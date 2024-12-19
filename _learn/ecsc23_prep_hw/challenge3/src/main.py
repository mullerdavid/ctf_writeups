from machine import Timer

def example(unused):
    print("Example:")
    print(">>> from runtime import check_combination")
    print(">>> check_combination([0x2c,0x32,0,0,0,0,0,0,0,0,0,0,0,0,0,0])")


tim = Timer(-1, mode=Timer.ONE_SHOT)
tim.init(period=5000, mode=Timer.ONE_SHOT, callback=example)
