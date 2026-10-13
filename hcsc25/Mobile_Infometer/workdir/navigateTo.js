function navigateTo(destinationName) {
    Java.perform(function () {
        var NavHostFragment = Java.use(
            'androidx.navigation.fragment.NavHostFragment'
        );

        var NavController = Java.use('androidx.navigation.NavController');
        var Bundle = Java.use('android.os.Bundle');

        var navHost = null;

        Java.choose('androidx.navigation.fragment.NavHostFragment', {
            onMatch: function (fragment) {
                navHost = fragment;
            },
            onComplete: function () {}
        });

        if (!navHost) {
            console.log('No NavHostFragment found');
            return;
        }

        var nav = Java.cast(
            navHost.getNavController(),
            NavController
        );

        var activity = navHost.requireActivity();
        var resources = activity.getResources();
        var packageName = activity.getPackageName();

        var destinationId = resources.getIdentifier(
            destinationName,
            'id',
            packageName
        );

        if (destinationId === 0) {
            console.log(
                'Could not resolve destination: ' + destinationName
            );
            return;
        }

        console.log(
            'Scheduling navigation to ' + destinationName +
            ' (0x' + destinationId.toString(16) + ')'
        );

        // Obfuscated NavController.navigate(int, Bundle)
        var navigateMethod = NavController.l.overload(
            'int',
            'android.os.Bundle'
        );

        Java.scheduleOnMainThread(function () {
            var args = Bundle.$new();

            if (destinationName === 'navigation_result') {
                args.putString('information', 'Frida navigation test');
            }

            navigateMethod.call(nav, destinationId, args);

            console.log('Navigated to ' + destinationName);
        });
    });
}