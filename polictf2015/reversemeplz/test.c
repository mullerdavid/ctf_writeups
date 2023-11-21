#include <stdio.h>
#include <string.h>

int sub_8048519(char a1)
{
	__asm__(
		//"push   %ebp;"
		//"mov    %esp,%ebp;"
		//"push   %edi;"
		//"push   %esi;"
		//"push   %ebx;"
		"mov    $0x13,%ebx;"
		"sub    $0x8,%esp;"
		"pushl  0x8(%ebp);"
		//"call   80484fb <__libc_start_main@plt+0x17b>"
		"movzbl %al,%esi;"
		"mov    %al,%dl;"
		"mov    %esi,%edi;"
		"and    $0x5f,%edx;"
		"not    %esi;"
		"shl    $0x8,%edi;"
		"cmp    $0x56,%dl;"
		"sete   %dl;"
		"movzbl %dl,%edx;"
		"pop    %ecx;"
		"lea    (%edx,%edx,8),%edx;"
		"mov    %al,%cl;"
		"and    $0x3f,%ecx;"
		"or     %edi,%edx;"
		"cmp    $0x26,%cl;"
		"mov    $0x0,%edi;"
		"cmovne %edi,%ebx;"
		"mov    $0x47,%di;"
		"or     %ebx,%edx;"
		"mov    %al,%bl;"
		"and    $0x77,%ebx;"
		"cmp    $0x74,%bl;"
		"mov    $0x0,%ebx;"
		"cmovne %ebx,%edi;"
		"or     %edi,%edx;"
		"cmp    $0x27,%cl;"
		"mov    $0x0,%edi;"
		"mov    $0x54,%ecx;"
		"cmovne %edi,%ecx;"
		"mov    $0x30,%di;"
		"or     %ecx,%edx;"
		"mov    %al,%cl;"
		"and    $0x4f,%ecx;"
		"cmp    $0x4,%cl;"
		"mov    %al,%cl;"
		"cmovne %ebx,%edi;"
		"and    $0x1f,%ecx;"
		"xor    %ebx,%ebx;"
		"or     %edx,%edi;"
		"cmp    $0xf,%cl;"
		"sete   %bl;"
		"add    %ebx,%ebx;"
		"or     %ebx,%edi;"
		"mov    %al,%bl;"
		"and    $0x5b,%ebx;"
		"cmp    $0x53,%bl;"
		"sete   %bl;"
		"xor    %edx,%edx;"
		"movzbl %bl,%ebx;"
		"add    %ebx,%ebx;"
		"or     %edi,%ebx;"
		"cmp    $0x1,%cl;"
		"sete   %dl;"
		"mov    %ebx,%edi;"
		"mov    %al,%bl;"
		"shl    $0x3,%edx;"
		"and    $0x57,%ebx;"
		"or     %edx,%edi;"
		"xor    %edx,%edx;"
		"cmp    $0x50,%bl;"
		"sete   %dl;"
		"lea    (%edx,%edx,2),%edx;"
		"or     %edi,%edx;"
		"mov    %edx,-0x10(%ebp);"
		"xor    %edx,%edx;"
		"cmp    $0xb,%cl;"
		"sete   %dl;"
		"mov    %edx,%edi;"
		"mov    -0x10(%ebp),%edx;"
		"mov    %esi,-0x10(%ebp);"
		"shl    $0x3,%edi;"
		"or     %edi,%edx;"
		"cmp    $0x2,%cl;"
		"mov    $0x0,%edi;"
		"sete   %cl;"
		"movzbl %cl,%ecx;"
		"shl    $0x3,%ecx;"
		"or     %ecx,%edx;"
		"xor    %ecx,%ecx;"
		"cmp    $0x42,%bl;"
		"sete   %cl;"
		"mov    $0x72,%ebx;"
		"add    %ecx,%ecx;"
		"or     %ecx,%edx;"
		"mov    %al,%cl;"
		"and    $0x2e,%ecx;"
		"cmp    $0x2c,%cl;"
		"sete   %cl;"
		"movzbl %cl,%ecx;"
		"shl    $0x3,%ecx;"
		"or     %ecx,%edx;"
		"mov    %al,%cl;"
		"and    $0x37,%ecx;"
		"cmp    $0x25,%cl;"
		"mov    %al,%cl;"
		"cmovne %edi,%ebx;"
		"and    $0x1c,%ecx;"
		"mov    $0x10,%di;"
		"or     %ebx,%edx;"
		"cmp    $0x8,%cl;"
		"mov    $0x0,%ecx;"
		"cmove  %edi,%ecx;"
		"mov    $0x40,%ebx;"
		"or     %ecx,%edx;"
		"mov    %esi,%ecx;"
		"and    $0x78,%ecx;"
		"cmp    $0x1,%ecx;"
		"sbb    %esi,%esi;"
		"and    $0x48,%esi;"
		"or     %edx,%esi;"
		"mov    %al,%dl;"
		"and    $0x1d,%edx;"
		"cmp    $0x10,%dl;"
		"mov    $0x0,%edx;"
		"cmovne %edx,%ebx;"
		"mov    %al,%dl;"
		"and    $0xf,%edx;"
		"or     %ebx,%esi;"
		"mov    $0x0,%ebx;"
		"cmp    $0xb,%dl;"
		"mov    $0x0,%edx;"
		"cmove  %edi,%edx;"
		"xor    %ecx,%ecx;"
		"or     %edx,%esi;"
		"mov    %al,%dl;"
		"and    $0x55,%edx;"
		"cmp    $0x40,%dl;"
		"sete   %cl;"
		"shl    $0x2,%ecx;"
		"or     %ecx,%esi;"
		"mov    %al,%cl;"
		"and    $0x4b,%ecx;"
		"dec    %cl;"
		"mov    $0x48,%ecx;"
		"cmovne %ebx,%ecx;"
		"mov    %al,%bl;"
		"and    $0x47,%ebx;"
		"or     %ecx,%esi;"
		"mov    $0x18,%ecx;"
		"mov    %bl,-0x11(%ebp);"
		"dec    %bl;"
		"mov    $0x0,%ebx;"
		"cmovne %ebx,%ecx;"
		"or     %ecx,%esi;"
		"mov    %al,%cl;"
		"and    $0x2b,%ecx;"
		"cmp    $0x22,%cl;"
		"mov    $0x60,%ecx;"
		"cmovne %ebx,%ecx;"
		"or     %ecx,%esi;"
		"mov    -0x10(%ebp),%ecx;"
		"and    $0x55,%ecx;"
		"cmp    $0x1,%ecx;"
		"mov    %al,%cl;"
		"sbb    %ebx,%ebx;"
		"and    $0x31,%ecx;"
		"and    $0x48,%ebx;"
		"or     %ebx,%esi;"
		"cmp    $0x10,%cl;"
		"mov    $0x0,%ebx;"
		"cmove  %edi,%ebx;"
		"mov    %al,%cl;"
		"or     %ebx,%esi;"
		"cmp    $0x51,%dl;"
		"mov    $0x0,%ebx;"
		"mov    $0x44,%edx;"
		"cmove  %edx,%ebx;"
		"and    $0xe,%ecx;"
		"mov    $0x20,%dl;"
		"or     %ebx,%esi;"
		"cmp    $0x8,%cl;"
		"mov    $0x0,%ebx;"
		"mov    %al,%cl;"
		"cmove  %edx,%ebx;"
		"mov    $0x0,%dl;"
		"and    $0x59,%ecx;"
		"or     %ebx,%esi;"
		"mov    $0x51,%ebx;"
		"cmp    $0x48,%cl;"
		"mov    $0x61,%ecx;"
		"cmovne %edx,%ecx;"
		"or     %ecx,%esi;"
		"mov    %al,%cl;"
		"and    $0x17,%ecx;"
		"cmp    $0x4,%cl;"
		"cmovne %edx,%ebx;"
		"or     %esi,%ebx;"
		"cmpb   $0x42,-0x11(%ebp);"
		"mov    $0x25,%esi;"
		"cmovne %edx,%esi;"
		"or     %ebx,%esi;"
		"mov    %al,%bl;"
		"and    $0x43,%ebx;"
		"cmp    $0x2,%bl;"
		"sete   %bl;"
		"movzbl %bl,%ebx;"
		"shl    $0x3,%ebx;"
		"or     %esi,%ebx;"
		"mov    %eax,%esi;"
		"and    $0x46,%esi;"
		"mov    %esi,%edx;"
		"mov    $0x0,%esi;"
		"cmp    $0x2,%dl;"
		"mov    $0x20,%edx;"
		"cmove  %edi,%esi;"
		"mov    $0x0,%di;"
		"or     %esi,%ebx;"
		"cmp    $0x3,%cl;"
		"mov    $0x50,%esi;"
		"cmovne %edi,%esi;"
		"or     %esi,%ebx;"
		"dec    %cl;"
		"mov    $0x46,%esi;"
		"cmovne %edi,%esi;"
		"mov    %al,%cl;"
		"or     %esi,%ebx;"
		"mov    -0x10(%ebp),%esi;"
		"and    $0x70,%ecx;"
		"cmp    $0x40,%cl;"
		"mov    $0x28,%ecx;"
		"cmovne %edi,%ecx;"
		"and    $0xb,%esi;"
		"or     %ecx,%ebx;"
		"mov    %al,%cl;"
		"cmp    $0x1,%esi;"
		"mov    $0x0,%esi;"
		"sbb    %edi,%edi;"
		"and    $0x41,%ecx;"
		"and    $0x60,%edi;"
		"or     %edi,%ebx;"
		"dec    %cl;"
		"sete   %cl;"
		"mov    %ebx,%edi;"
		"movzbl %cl,%ecx;"
		"shl    $0x2,%ecx;"
		"or     %ecx,%edi;"
		"mov    %al,%cl;"
		"and    $0x48,%ecx;"
		"cmp    $0x40,%cl;"
		"cmovne %esi,%edx;"
		"and    $0x21,%eax;"
		"or     %edi,%edx;"
		"dec    %al;"
		"mov    $0x0,%edi;"
		"mov    $0x44,%eax;"
		"cmove  %eax,%edi;"
		"lea    -0xc(%ebp),%esp;"
		"mov    %edx,%eax;"
		"or     %edi,%eax;"
		//"pop    %ebx;"
		//"pop    %esi;"
		//"pop    %edi;"
		//"pop    %ebp;"
		//"ret;"
	);
	return;
}

int sub_8048804(char* input)
{

	char a1[32];
	signed int v1;
	int v2;
	char v3;
	char v9[32];
	
	memcpy(a1, input, sizeof(a1));
	
	v1 = 0;
	v2 = 0;
	do
	{
		if ( a1[v2] <= 96 )
			a1[v2] = sub_8048519(a1[1] & 1);
		if ( a1[v2] > 122 )
			a1[v2] = sub_8048519(a1[1] & 2);
		v3 = sub_8048519(a1[v2]);
		v9[v2] = v3;
		if ( v3 != -49 && (unsigned char)v3 > 204 )
			v1 = 1;
		++v2;
	} while ( v2 != 15 );
	
	printf("%s\n", a1);
	printf("%s\n", v9);
	printf("%x\n", v1);
	
	return 0;
}

int main()
{
	char buff[32];
	size_t ln;
	
	memset(buff, 0, sizeof(buff));
	fgets(buff, sizeof(buff), stdin);
	
	ln = strlen(buff) - 1;
	if (buff[ln] == '\n')
		buff[ln] = '\0';
	
	if (sub_8048804(buff))
	{
		printf("Good input\n");
	}
	else
	{
		printf("Wrong input\n");
	}
	
	
	return 0;
}