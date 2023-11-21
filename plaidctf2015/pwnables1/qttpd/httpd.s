
httpd.stripped:     file format elf32-i386


Disassembly of section .init:

08049464 <.init>:
 8049464:	e8 57 07 00 00       	call   8049bc0 <_btext+0x150>
 8049469:	e8 12 b6 00 00       	call   8054a80 <__umoddi3+0x130>
 804946e:	c2 00 00             	ret    $0x0

Disassembly of section .plt:

08049474 <clock_gettime@plt-0x10>:
 8049474:	ff 35 d0 76 05 08    	pushl  0x80576d0
 804947a:	ff 25 d4 76 05 08    	jmp    *0x80576d4
 8049480:	00 00                	add    %al,(%eax)
	...

08049484 <clock_gettime@plt>:
 8049484:	ff 25 d8 76 05 08    	jmp    *0x80576d8
 804948a:	68 00 00 00 00       	push   $0x0
 804948f:	e9 e0 ff ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049494 <chroot@plt>:
 8049494:	ff 25 dc 76 05 08    	jmp    *0x80576dc
 804949a:	68 08 00 00 00       	push   $0x8
 804949f:	e9 d0 ff ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080494a4 <strcpy@plt>:
 80494a4:	ff 25 e0 76 05 08    	jmp    *0x80576e0
 80494aa:	68 10 00 00 00       	push   $0x10
 80494af:	e9 c0 ff ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080494b4 <MsgSend@plt>:
 80494b4:	ff 25 e4 76 05 08    	jmp    *0x80576e4
 80494ba:	68 18 00 00 00       	push   $0x18
 80494bf:	e9 b0 ff ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080494c4 <_init_array@plt>:
 80494c4:	ff 25 e8 76 05 08    	jmp    *0x80576e8
 80494ca:	68 20 00 00 00       	push   $0x20
 80494cf:	e9 a0 ff ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080494d4 <geteuid@plt>:
 80494d4:	ff 25 ec 76 05 08    	jmp    *0x80576ec
 80494da:	68 28 00 00 00       	push   $0x28
 80494df:	e9 90 ff ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080494e4 <munmap@plt>:
 80494e4:	ff 25 f0 76 05 08    	jmp    *0x80576f0
 80494ea:	68 30 00 00 00       	push   $0x30
 80494ef:	e9 80 ff ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080494f4 <bind@plt>:
 80494f4:	ff 25 f4 76 05 08    	jmp    *0x80576f4
 80494fa:	68 38 00 00 00       	push   $0x38
 80494ff:	e9 70 ff ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049504 <ConnectClientInfo@plt>:
 8049504:	ff 25 f8 76 05 08    	jmp    *0x80576f8
 804950a:	68 40 00 00 00       	push   $0x40
 804950f:	e9 60 ff ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049514 <shm_open@plt>:
 8049514:	ff 25 fc 76 05 08    	jmp    *0x80576fc
 804951a:	68 48 00 00 00       	push   $0x48
 804951f:	e9 50 ff ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049524 <timer_create@plt>:
 8049524:	ff 25 00 77 05 08    	jmp    *0x8057700
 804952a:	68 50 00 00 00       	push   $0x50
 804952f:	e9 40 ff ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049534 <setsockopt@plt>:
 8049534:	ff 25 04 77 05 08    	jmp    *0x8057704
 804953a:	68 58 00 00 00       	push   $0x58
 804953f:	e9 30 ff ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049544 <getpid@plt>:
 8049544:	ff 25 08 77 05 08    	jmp    *0x8057708
 804954a:	68 60 00 00 00       	push   $0x60
 804954f:	e9 20 ff ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049554 <_preinit_array@plt>:
 8049554:	ff 25 0c 77 05 08    	jmp    *0x805770c
 804955a:	68 68 00 00 00       	push   $0x68
 804955f:	e9 10 ff ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049564 <fgets@plt>:
 8049564:	ff 25 10 77 05 08    	jmp    *0x8057710
 804956a:	68 70 00 00 00       	push   $0x70
 804956f:	e9 00 ff ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049574 <memcpy@plt>:
 8049574:	ff 25 14 77 05 08    	jmp    *0x8057714
 804957a:	68 78 00 00 00       	push   $0x78
 804957f:	e9 f0 fe ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049584 <__cxa_finalize@plt>:
 8049584:	ff 25 18 77 05 08    	jmp    *0x8057718
 804958a:	68 80 00 00 00       	push   $0x80
 804958f:	e9 e0 fe ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049594 <mbrtowc@plt>:
 8049594:	ff 25 1c 77 05 08    	jmp    *0x805771c
 804959a:	68 88 00 00 00       	push   $0x88
 804959f:	e9 d0 fe ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080495a4 <timer_delete@plt>:
 80495a4:	ff 25 20 77 05 08    	jmp    *0x8057720
 80495aa:	68 90 00 00 00       	push   $0x90
 80495af:	e9 c0 fe ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080495b4 <malloc@plt>:
 80495b4:	ff 25 24 77 05 08    	jmp    *0x8057724
 80495ba:	68 98 00 00 00       	push   $0x98
 80495bf:	e9 b0 fe ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080495c4 <isatty@plt>:
 80495c4:	ff 25 28 77 05 08    	jmp    *0x8057728
 80495ca:	68 a0 00 00 00       	push   $0xa0
 80495cf:	e9 a0 fe ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080495d4 <rmdir@plt>:
 80495d4:	ff 25 2c 77 05 08    	jmp    *0x805772c
 80495da:	68 a8 00 00 00       	push   $0xa8
 80495df:	e9 90 fe ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080495e4 <setgroups@plt>:
 80495e4:	ff 25 30 77 05 08    	jmp    *0x8057730
 80495ea:	68 b0 00 00 00       	push   $0xb0
 80495ef:	e9 80 fe ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080495f4 <ftruncate@plt>:
 80495f4:	ff 25 34 77 05 08    	jmp    *0x8057734
 80495fa:	68 b8 00 00 00       	push   $0xb8
 80495ff:	e9 70 fe ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049604 <mmap@plt>:
 8049604:	ff 25 38 77 05 08    	jmp    *0x8057738
 804960a:	68 c0 00 00 00       	push   $0xc0
 804960f:	e9 60 fe ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049614 <strncasecmp@plt>:
 8049614:	ff 25 3c 77 05 08    	jmp    *0x805773c
 804961a:	68 c8 00 00 00       	push   $0xc8
 804961f:	e9 50 fe ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049624 <abort@plt>:
 8049624:	ff 25 40 77 05 08    	jmp    *0x8057740
 804962a:	68 d0 00 00 00       	push   $0xd0
 804962f:	e9 40 fe ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049634 <strtol@plt>:
 8049634:	ff 25 44 77 05 08    	jmp    *0x8057744
 804963a:	68 d8 00 00 00       	push   $0xd8
 804963f:	e9 30 fe ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049644 <MsgSendPulse@plt>:
 8049644:	ff 25 48 77 05 08    	jmp    *0x8057748
 804964a:	68 e0 00 00 00       	push   $0xe0
 804964f:	e9 20 fe ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049654 <strrchr@plt>:
 8049654:	ff 25 4c 77 05 08    	jmp    *0x805774c
 804965a:	68 e8 00 00 00       	push   $0xe8
 804965f:	e9 10 fe ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049664 <calloc@plt>:
 8049664:	ff 25 50 77 05 08    	jmp    *0x8057750
 804966a:	68 f0 00 00 00       	push   $0xf0
 804966f:	e9 00 fe ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049674 <write@plt>:
 8049674:	ff 25 54 77 05 08    	jmp    *0x8057754
 804967a:	68 f8 00 00 00       	push   $0xf8
 804967f:	e9 f0 fd ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049684 <MsgError@plt>:
 8049684:	ff 25 58 77 05 08    	jmp    *0x8057758
 804968a:	68 00 01 00 00       	push   $0x100
 804968f:	e9 e0 fd ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049694 <fstat@plt>:
 8049694:	ff 25 5c 77 05 08    	jmp    *0x805775c
 804969a:	68 08 01 00 00       	push   $0x108
 804969f:	e9 d0 fd ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080496a4 <fprintf@plt>:
 80496a4:	ff 25 60 77 05 08    	jmp    *0x8057760
 80496aa:	68 10 01 00 00       	push   $0x110
 80496af:	e9 c0 fd ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080496b4 <ConnectDetach@plt>:
 80496b4:	ff 25 64 77 05 08    	jmp    *0x8057764
 80496ba:	68 18 01 00 00       	push   $0x118
 80496bf:	e9 b0 fd ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080496c4 <__deregister_frame_info@plt>:
 80496c4:	ff 25 68 77 05 08    	jmp    *0x8057768
 80496ca:	68 20 01 00 00       	push   $0x120
 80496cf:	e9 a0 fd ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080496d4 <chdir@plt>:
 80496d4:	ff 25 6c 77 05 08    	jmp    *0x805776c
 80496da:	68 28 01 00 00       	push   $0x128
 80496df:	e9 90 fd ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080496e4 <memchr@plt>:
 80496e4:	ff 25 70 77 05 08    	jmp    *0x8057770
 80496ea:	68 30 01 00 00       	push   $0x130
 80496ef:	e9 80 fd ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080496f4 <wait@plt>:
 80496f4:	ff 25 74 77 05 08    	jmp    *0x8057774
 80496fa:	68 38 01 00 00       	push   $0x138
 80496ff:	e9 70 fd ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049704 <__get_errno_ptr@plt>:
 8049704:	ff 25 78 77 05 08    	jmp    *0x8057778
 804970a:	68 40 01 00 00       	push   $0x140
 804970f:	e9 60 fd ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049714 <ferror@plt>:
 8049714:	ff 25 7c 77 05 08    	jmp    *0x805777c
 804971a:	68 48 01 00 00       	push   $0x148
 804971f:	e9 50 fd ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049724 <setgid@plt>:
 8049724:	ff 25 80 77 05 08    	jmp    *0x8057780
 804972a:	68 50 01 00 00       	push   $0x150
 804972f:	e9 40 fd ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049734 <read@plt>:
 8049734:	ff 25 84 77 05 08    	jmp    *0x8057784
 804973a:	68 58 01 00 00       	push   $0x158
 804973f:	e9 30 fd ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049744 <strncmp@plt>:
 8049744:	ff 25 88 77 05 08    	jmp    *0x8057788
 804974a:	68 60 01 00 00       	push   $0x160
 804974f:	e9 20 fd ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049754 <strncpy@plt>:
 8049754:	ff 25 8c 77 05 08    	jmp    *0x805778c
 804975a:	68 68 01 00 00       	push   $0x168
 804975f:	e9 10 fd ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049764 <unlink@plt>:
 8049764:	ff 25 90 77 05 08    	jmp    *0x8057790
 804976a:	68 70 01 00 00       	push   $0x170
 804976f:	e9 00 fd ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049774 <accept@plt>:
 8049774:	ff 25 94 77 05 08    	jmp    *0x8057794
 804977a:	68 78 01 00 00       	push   $0x178
 804977f:	e9 f0 fc ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049784 <strcasecmp@plt>:
 8049784:	ff 25 98 77 05 08    	jmp    *0x8057798
 804978a:	68 80 01 00 00       	push   $0x180
 804978f:	e9 e0 fc ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049794 <getprio@plt>:
 8049794:	ff 25 9c 77 05 08    	jmp    *0x805779c
 804979a:	68 88 01 00 00       	push   $0x188
 804979f:	e9 d0 fc ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080497a4 <realloc@plt>:
 80497a4:	ff 25 a0 77 05 08    	jmp    *0x80577a0
 80497aa:	68 90 01 00 00       	push   $0x190
 80497af:	e9 c0 fc ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080497b4 <ConnectAttach@plt>:
 80497b4:	ff 25 a4 77 05 08    	jmp    *0x80577a4
 80497ba:	68 98 01 00 00       	push   $0x198
 80497bf:	e9 b0 fc ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080497c4 <fork@plt>:
 80497c4:	ff 25 a8 77 05 08    	jmp    *0x80577a8
 80497ca:	68 a0 01 00 00       	push   $0x1a0
 80497cf:	e9 a0 fc ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080497d4 <sscanf@plt>:
 80497d4:	ff 25 ac 77 05 08    	jmp    *0x80577ac
 80497da:	68 a8 01 00 00       	push   $0x1a8
 80497df:	e9 90 fc ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080497e4 <fread@plt>:
 80497e4:	ff 25 b0 77 05 08    	jmp    *0x80577b0
 80497ea:	68 b0 01 00 00       	push   $0x1b0
 80497ef:	e9 80 fc ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080497f4 <MsgReceivePulse@plt>:
 80497f4:	ff 25 b4 77 05 08    	jmp    *0x80577b4
 80497fa:	68 b8 01 00 00       	push   $0x1b8
 80497ff:	e9 70 fc ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049804 <strdup@plt>:
 8049804:	ff 25 b8 77 05 08    	jmp    *0x80577b8
 804980a:	68 c0 01 00 00       	push   $0x1c0
 804980f:	e9 60 fc ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049814 <recv@plt>:
 8049814:	ff 25 bc 77 05 08    	jmp    *0x80577bc
 804981a:	68 c8 01 00 00       	push   $0x1c8
 804981f:	e9 50 fc ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049824 <_init_libc@plt>:
 8049824:	ff 25 c0 77 05 08    	jmp    *0x80577c0
 804982a:	68 d0 01 00 00       	push   $0x1d0
 804982f:	e9 40 fc ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049834 <fopen@plt>:
 8049834:	ff 25 c4 77 05 08    	jmp    *0x80577c4
 804983a:	68 d8 01 00 00       	push   $0x1d8
 804983f:	e9 30 fc ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049844 <getopt@plt>:
 8049844:	ff 25 c8 77 05 08    	jmp    *0x80577c8
 804984a:	68 e0 01 00 00       	push   $0x1e0
 804984f:	e9 20 fc ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049854 <memset@plt>:
 8049854:	ff 25 cc 77 05 08    	jmp    *0x80577cc
 804985a:	68 e8 01 00 00       	push   $0x1e8
 804985f:	e9 10 fc ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049864 <ionotify@plt>:
 8049864:	ff 25 d0 77 05 08    	jmp    *0x80577d0
 804986a:	68 f0 01 00 00       	push   $0x1f0
 804986f:	e9 00 fc ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049874 <clearerr@plt>:
 8049874:	ff 25 d4 77 05 08    	jmp    *0x80577d4
 804987a:	68 f8 01 00 00       	push   $0x1f8
 804987f:	e9 f0 fb ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049884 <fclose@plt>:
 8049884:	ff 25 d8 77 05 08    	jmp    *0x80577d8
 804988a:	68 00 02 00 00       	push   $0x200
 804988f:	e9 e0 fb ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049894 <ChannelCreate@plt>:
 8049894:	ff 25 dc 77 05 08    	jmp    *0x80577dc
 804989a:	68 08 02 00 00       	push   $0x208
 804989f:	e9 d0 fb ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080498a4 <MsgSendv@plt>:
 80498a4:	ff 25 e0 77 05 08    	jmp    *0x80577e0
 80498aa:	68 10 02 00 00       	push   $0x210
 80498af:	e9 c0 fb ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080498b4 <_fini_array@plt>:
 80498b4:	ff 25 e4 77 05 08    	jmp    *0x80577e4
 80498ba:	68 18 02 00 00       	push   $0x218
 80498bf:	e9 b0 fb ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080498c4 <shm_unlink@plt>:
 80498c4:	ff 25 e8 77 05 08    	jmp    *0x80577e8
 80498ca:	68 20 02 00 00       	push   $0x220
 80498cf:	e9 a0 fb ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080498d4 <strcmp@plt>:
 80498d4:	ff 25 ec 77 05 08    	jmp    *0x80577ec
 80498da:	68 28 02 00 00       	push   $0x228
 80498df:	e9 90 fb ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080498e4 <send@plt>:
 80498e4:	ff 25 f0 77 05 08    	jmp    *0x80577f0
 80498ea:	68 30 02 00 00       	push   $0x230
 80498ef:	e9 80 fb ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080498f4 <fgetc@plt>:
 80498f4:	ff 25 f4 77 05 08    	jmp    *0x80577f4
 80498fa:	68 38 02 00 00       	push   $0x238
 80498ff:	e9 70 fb ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049904 <sprintf@plt>:
 8049904:	ff 25 f8 77 05 08    	jmp    *0x80577f8
 804990a:	68 40 02 00 00       	push   $0x240
 804990f:	e9 60 fb ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049914 <atexit@plt>:
 8049914:	ff 25 fc 77 05 08    	jmp    *0x80577fc
 804991a:	68 48 02 00 00       	push   $0x248
 804991f:	e9 50 fb ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049924 <MsgReceive@plt>:
 8049924:	ff 25 00 78 05 08    	jmp    *0x8057800
 804992a:	68 50 02 00 00       	push   $0x250
 804992f:	e9 40 fb ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049934 <socket@plt>:
 8049934:	ff 25 04 78 05 08    	jmp    *0x8057804
 804993a:	68 58 02 00 00       	push   $0x258
 804993f:	e9 30 fb ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049944 <stat@plt>:
 8049944:	ff 25 08 78 05 08    	jmp    *0x8057808
 804994a:	68 60 02 00 00       	push   $0x260
 804994f:	e9 20 fb ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049954 <fwrite@plt>:
 8049954:	ff 25 0c 78 05 08    	jmp    *0x805780c
 804995a:	68 68 02 00 00       	push   $0x268
 804995f:	e9 10 fb ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049964 <access@plt>:
 8049964:	ff 25 10 78 05 08    	jmp    *0x8057810
 804996a:	68 70 02 00 00       	push   $0x270
 804996f:	e9 00 fb ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049974 <exit@plt>:
 8049974:	ff 25 14 78 05 08    	jmp    *0x8057814
 804997a:	68 78 02 00 00       	push   $0x278
 804997f:	e9 f0 fa ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049984 <inet_ntop@plt>:
 8049984:	ff 25 18 78 05 08    	jmp    *0x8057818
 804998a:	68 80 02 00 00       	push   $0x280
 804998f:	e9 e0 fa ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049994 <MsgRead@plt>:
 8049994:	ff 25 1c 78 05 08    	jmp    *0x805781c
 804999a:	68 88 02 00 00       	push   $0x288
 804999f:	e9 d0 fa ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080499a4 <fileno@plt>:
 80499a4:	ff 25 20 78 05 08    	jmp    *0x8057820
 80499aa:	68 90 02 00 00       	push   $0x290
 80499af:	e9 c0 fa ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080499b4 <listen@plt>:
 80499b4:	ff 25 24 78 05 08    	jmp    *0x8057824
 80499ba:	68 98 02 00 00       	push   $0x298
 80499bf:	e9 b0 fa ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080499c4 <strlen@plt>:
 80499c4:	ff 25 28 78 05 08    	jmp    *0x8057828
 80499ca:	68 a0 02 00 00       	push   $0x2a0
 80499cf:	e9 a0 fa ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080499d4 <open@plt>:
 80499d4:	ff 25 2c 78 05 08    	jmp    *0x805782c
 80499da:	68 a8 02 00 00       	push   $0x2a8
 80499df:	e9 90 fa ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080499e4 <strchr@plt>:
 80499e4:	ff 25 30 78 05 08    	jmp    *0x8057830
 80499ea:	68 b0 02 00 00       	push   $0x2b0
 80499ef:	e9 80 fa ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

080499f4 <MsgReply@plt>:
 80499f4:	ff 25 34 78 05 08    	jmp    *0x8057834
 80499fa:	68 b8 02 00 00       	push   $0x2b8
 80499ff:	e9 70 fa ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049a04 <setuid@plt>:
 8049a04:	ff 25 38 78 05 08    	jmp    *0x8057838
 8049a0a:	68 c0 02 00 00       	push   $0x2c0
 8049a0f:	e9 60 fa ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049a14 <timer_settime@plt>:
 8049a14:	ff 25 3c 78 05 08    	jmp    *0x805783c
 8049a1a:	68 c8 02 00 00       	push   $0x2c8
 8049a1f:	e9 50 fa ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049a24 <mkdir@plt>:
 8049a24:	ff 25 40 78 05 08    	jmp    *0x8057840
 8049a2a:	68 d0 02 00 00       	push   $0x2d0
 8049a2f:	e9 40 fa ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049a34 <__register_frame_info@plt>:
 8049a34:	ff 25 44 78 05 08    	jmp    *0x8057844
 8049a3a:	68 d8 02 00 00       	push   $0x2d8
 8049a3f:	e9 30 fa ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049a44 <close@plt>:
 8049a44:	ff 25 48 78 05 08    	jmp    *0x8057848
 8049a4a:	68 e0 02 00 00       	push   $0x2e0
 8049a4f:	e9 20 fa ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

08049a54 <free@plt>:
 8049a54:	ff 25 4c 78 05 08    	jmp    *0x805784c
 8049a5a:	68 e8 02 00 00       	push   $0x2e8
 8049a5f:	e9 10 fa ff ff       	jmp    8049474 <clock_gettime@plt-0x10>

Disassembly of section .text:

08049a70 <_btext>:
 8049a70:	4e                   	dec    %esi
 8049a71:	49                   	dec    %ecx
 8049a72:	41                   	inc    %ecx
 8049a73:	4d                   	dec    %ebp
 8049a74:	20 9c 04 08 89 d3 8b 	and    %bl,-0x742c76f8(%esp,%eax,1)
 8049a7b:	34 24                	xor    $0x24,%al
 8049a7d:	8d 4c 24 04          	lea    0x4(%esp),%ecx
 8049a81:	8d 04 b1             	lea    (%ecx,%esi,4),%eax
 8049a84:	8d 78 04             	lea    0x4(%eax),%edi
 8049a87:	8d 50 08             	lea    0x8(%eax),%edx
 8049a8a:	83 78 04 00          	cmpl   $0x0,0x4(%eax)
 8049a8e:	74 09                	je     8049a99 <_btext+0x29>
 8049a90:	8b 02                	mov    (%edx),%eax
 8049a92:	83 c2 04             	add    $0x4,%edx
 8049a95:	85 c0                	test   %eax,%eax
 8049a97:	75 f7                	jne    8049a90 <_btext+0x20>
 8049a99:	53                   	push   %ebx
 8049a9a:	52                   	push   %edx
 8049a9b:	57                   	push   %edi
 8049a9c:	51                   	push   %ecx
 8049a9d:	56                   	push   %esi
 8049a9e:	e8 81 fd ff ff       	call   8049824 <_init_libc@plt>
 8049aa3:	68 c0 75 05 08       	push   $0x80575c0
 8049aa8:	68 c0 75 05 08       	push   $0x80575c0
 8049aad:	e8 a2 fa ff ff       	call   8049554 <_preinit_array@plt>
 8049ab2:	83 c4 08             	add    $0x8,%esp
 8049ab5:	68 c0 4a 05 08       	push   $0x8054ac0
 8049aba:	e8 55 fe ff ff       	call   8049914 <atexit@plt>
 8049abf:	83 c4 04             	add    $0x4,%esp
 8049ac2:	68 c0 75 05 08       	push   $0x80575c0
 8049ac7:	68 c0 75 05 08       	push   $0x80575c0
 8049acc:	e8 e3 fd ff ff       	call   80498b4 <_fini_array@plt>
 8049ad1:	83 c4 08             	add    $0x8,%esp
 8049ad4:	e8 8b f9 ff ff       	call   8049464 <clock_gettime@plt-0x20>
 8049ad9:	68 c0 75 05 08       	push   $0x80575c0
 8049ade:	68 c0 75 05 08       	push   $0x80575c0
 8049ae3:	e8 dc f9 ff ff       	call   80494c4 <_init_array@plt>
 8049ae8:	83 c4 08             	add    $0x8,%esp
 8049aeb:	c7 05 f0 78 05 08 00 	movl   $0x0,0x80578f0
 8049af2:	00 00 00 
 8049af5:	e8 26 01 00 00       	call   8049c20 <main>
 8049afa:	50                   	push   %eax
 8049afb:	e8 74 fe ff ff       	call   8049974 <exit@plt>
 8049b00:	cc                   	int3   
 8049b01:	90                   	nop
 8049b02:	90                   	nop
 8049b03:	90                   	nop
 8049b04:	90                   	nop
 8049b05:	90                   	nop
 8049b06:	90                   	nop
 8049b07:	90                   	nop
 8049b08:	90                   	nop
 8049b09:	90                   	nop
 8049b0a:	90                   	nop
 8049b0b:	90                   	nop
 8049b0c:	90                   	nop
 8049b0d:	90                   	nop
 8049b0e:	90                   	nop
 8049b0f:	90                   	nop
 8049b10:	55                   	push   %ebp
 8049b11:	89 e5                	mov    %esp,%ebp
 8049b13:	56                   	push   %esi
 8049b14:	53                   	push   %ebx
 8049b15:	e8 00 00 00 00       	call   8049b1a <_btext+0xaa>
 8049b1a:	5b                   	pop    %ebx
 8049b1b:	81 c3 b2 db 00 00    	add    $0xdbb2,%ebx
 8049b21:	80 bb 04 03 00 00 00 	cmpb   $0x0,0x304(%ebx)
 8049b28:	0f 85 7d 00 00 00    	jne    8049bab <_btext+0x13b>
 8049b2e:	8b 8b 84 01 00 00    	mov    0x184(%ebx),%ecx
 8049b34:	85 c9                	test   %ecx,%ecx
 8049b36:	74 12                	je     8049b4a <_btext+0xda>
 8049b38:	83 ec 0c             	sub    $0xc,%esp
 8049b3b:	8b 93 d8 ff ff ff    	mov    -0x28(%ebx),%edx
 8049b41:	52                   	push   %edx
 8049b42:	e8 3d fa ff ff       	call   8049584 <__cxa_finalize@plt>
 8049b47:	83 c4 10             	add    $0x10,%esp
 8049b4a:	8b 83 08 03 00 00    	mov    0x308(%ebx),%eax
 8049b50:	8d b3 00 ff ff ff    	lea    -0x100(%ebx),%esi
 8049b56:	8d 93 fc fe ff ff    	lea    -0x104(%ebx),%edx
 8049b5c:	29 d6                	sub    %edx,%esi
 8049b5e:	c1 fe 02             	sar    $0x2,%esi
 8049b61:	4e                   	dec    %esi
 8049b62:	39 f0                	cmp    %esi,%eax
 8049b64:	73 22                	jae    8049b88 <_btext+0x118>
 8049b66:	8d 76 00             	lea    0x0(%esi),%esi
 8049b69:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8049b70:	40                   	inc    %eax
 8049b71:	89 83 08 03 00 00    	mov    %eax,0x308(%ebx)
 8049b77:	ff 94 83 fc fe ff ff 	call   *-0x104(%ebx,%eax,4)
 8049b7e:	8b 83 08 03 00 00    	mov    0x308(%ebx),%eax
 8049b84:	39 f0                	cmp    %esi,%eax
 8049b86:	72 e8                	jb     8049b70 <_btext+0x100>
 8049b88:	8b 83 88 01 00 00    	mov    0x188(%ebx),%eax
 8049b8e:	85 c0                	test   %eax,%eax
 8049b90:	74 12                	je     8049ba4 <_btext+0x134>
 8049b92:	83 ec 0c             	sub    $0xc,%esp
 8049b95:	8d 83 98 ee ff ff    	lea    -0x1168(%ebx),%eax
 8049b9b:	50                   	push   %eax
 8049b9c:	e8 23 fb ff ff       	call   80496c4 <__deregister_frame_info@plt>
 8049ba1:	83 c4 10             	add    $0x10,%esp
 8049ba4:	c6 83 04 03 00 00 01 	movb   $0x1,0x304(%ebx)
 8049bab:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8049bae:	5b                   	pop    %ebx
 8049baf:	5e                   	pop    %esi
 8049bb0:	5d                   	pop    %ebp
 8049bb1:	c3                   	ret    
 8049bb2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8049bb9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8049bc0:	55                   	push   %ebp
 8049bc1:	89 e5                	mov    %esp,%ebp
 8049bc3:	53                   	push   %ebx
 8049bc4:	83 ec 04             	sub    $0x4,%esp
 8049bc7:	e8 00 00 00 00       	call   8049bcc <_btext+0x15c>
 8049bcc:	5b                   	pop    %ebx
 8049bcd:	81 c3 00 db 00 00    	add    $0xdb00,%ebx
 8049bd3:	8b 93 90 01 00 00    	mov    0x190(%ebx),%edx
 8049bd9:	85 d2                	test   %edx,%edx
 8049bdb:	74 19                	je     8049bf6 <_btext+0x186>
 8049bdd:	83 ec 08             	sub    $0x8,%esp
 8049be0:	8d 83 0c 03 00 00    	lea    0x30c(%ebx),%eax
 8049be6:	50                   	push   %eax
 8049be7:	8d 83 98 ee ff ff    	lea    -0x1168(%ebx),%eax
 8049bed:	50                   	push   %eax
 8049bee:	e8 41 fe ff ff       	call   8049a34 <__register_frame_info@plt>
 8049bf3:	83 c4 10             	add    $0x10,%esp
 8049bf6:	8b 83 04 ff ff ff    	mov    -0xfc(%ebx),%eax
 8049bfc:	85 c0                	test   %eax,%eax
 8049bfe:	74 19                	je     8049c19 <_btext+0x1a9>
 8049c00:	8b 83 8c 01 00 00    	mov    0x18c(%ebx),%eax
 8049c06:	85 c0                	test   %eax,%eax
 8049c08:	74 0f                	je     8049c19 <_btext+0x1a9>
 8049c0a:	83 ec 0c             	sub    $0xc,%esp
 8049c0d:	8d 93 04 ff ff ff    	lea    -0xfc(%ebx),%edx
 8049c13:	52                   	push   %edx
 8049c14:	ff d0                	call   *%eax
 8049c16:	83 c4 10             	add    $0x10,%esp
 8049c19:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8049c1c:	c9                   	leave  
 8049c1d:	c3                   	ret    
 8049c1e:	90                   	nop
 8049c1f:	90                   	nop

08049c20 <main>:
 8049c20:	55                   	push   %ebp
 8049c21:	89 e5                	mov    %esp,%ebp
 8049c23:	83 e4 f0             	and    $0xfffffff0,%esp
 8049c26:	57                   	push   %edi
 8049c27:	31 ff                	xor    %edi,%edi
 8049c29:	56                   	push   %esi
 8049c2a:	53                   	push   %ebx
 8049c2b:	83 ec 14             	sub    $0x14,%esp
 8049c2e:	8b 75 08             	mov    0x8(%ebp),%esi
 8049c31:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8049c34:	c7 44 24 08 e0 4a 05 	movl   $0x8054ae0,0x8(%esp)
 8049c3b:	08 
 8049c3c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8049c40:	89 34 24             	mov    %esi,(%esp)
 8049c43:	e8 fc fb ff ff       	call   8049844 <getopt@plt>
 8049c48:	83 f8 ff             	cmp    $0xffffffff,%eax
 8049c4b:	74 53                	je     8049ca0 <main+0x80>
 8049c4d:	83 f8 3f             	cmp    $0x3f,%eax
 8049c50:	74 1e                	je     8049c70 <main+0x50>
 8049c52:	83 f8 63             	cmp    $0x63,%eax
 8049c55:	75 dd                	jne    8049c34 <main+0x14>
 8049c57:	a1 08 79 05 08       	mov    0x8057908,%eax
 8049c5c:	c7 44 24 04 11 4e 05 	movl   $0x8054e11,0x4(%esp)
 8049c63:	08 
 8049c64:	89 04 24             	mov    %eax,(%esp)
 8049c67:	e8 c8 fb ff ff       	call   8049834 <fopen@plt>
 8049c6c:	89 c7                	mov    %eax,%edi
 8049c6e:	eb c4                	jmp    8049c34 <main+0x14>
 8049c70:	8b 03                	mov    (%ebx),%eax
 8049c72:	c7 44 24 04 1b 4b 05 	movl   $0x8054b1b,0x4(%esp)
 8049c79:	08 
 8049c7a:	c7 04 24 80 79 05 08 	movl   $0x8057980,(%esp)
 8049c81:	89 44 24 08          	mov    %eax,0x8(%esp)
 8049c85:	e8 1a fa ff ff       	call   80496a4 <fprintf@plt>
 8049c8a:	83 c4 14             	add    $0x14,%esp
 8049c8d:	31 c0                	xor    %eax,%eax
 8049c8f:	5b                   	pop    %ebx
 8049c90:	5e                   	pop    %esi
 8049c91:	5f                   	pop    %edi
 8049c92:	89 ec                	mov    %ebp,%esp
 8049c94:	5d                   	pop    %ebp
 8049c95:	c3                   	ret    
 8049c96:	8d 76 00             	lea    0x0(%esi),%esi
 8049c99:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8049ca0:	85 ff                	test   %edi,%edi
 8049ca2:	74 cc                	je     8049c70 <main+0x50>
 8049ca4:	89 3c 24             	mov    %edi,(%esp)
 8049ca7:	e8 04 39 00 00       	call   804d5b0 <main+0x3990>
 8049cac:	89 3c 24             	mov    %edi,(%esp)
 8049caf:	a3 40 8e 05 08       	mov    %eax,0x8058e40
 8049cb4:	e8 cb fb ff ff       	call   8049884 <fclose@plt>
 8049cb9:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 8049cbe:	85 c0                	test   %eax,%eax
 8049cc0:	74 39                	je     8049cfb <main+0xdb>
 8049cc2:	e8 69 00 00 00       	call   8049d30 <main+0x110>
 8049cc7:	85 c0                	test   %eax,%eax
 8049cc9:	74 0a                	je     8049cd5 <main+0xb5>
 8049ccb:	89 04 24             	mov    %eax,(%esp)
 8049cce:	e8 1d 04 00 00       	call   804a0f0 <main+0x4d0>
 8049cd3:	eb b5                	jmp    8049c8a <main+0x6a>
 8049cd5:	c7 44 24 0c 80 79 05 	movl   $0x8057980,0xc(%esp)
 8049cdc:	08 
 8049cdd:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 8049ce4:	00 
 8049ce5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8049cec:	00 
 8049ced:	c7 04 24 fd 4a 05 08 	movl   $0x8054afd,(%esp)
 8049cf4:	e8 5b fc ff ff       	call   8049954 <fwrite@plt>
 8049cf9:	eb 8f                	jmp    8049c8a <main+0x6a>
 8049cfb:	c7 44 24 0c 80 79 05 	movl   $0x8057980,0xc(%esp)
 8049d02:	08 
 8049d03:	c7 44 24 08 19 00 00 	movl   $0x19,0x8(%esp)
 8049d0a:	00 
 8049d0b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8049d12:	00 
 8049d13:	c7 04 24 e3 4a 05 08 	movl   $0x8054ae3,(%esp)
 8049d1a:	e8 35 fc ff ff       	call   8049954 <fwrite@plt>
 8049d1f:	e9 66 ff ff ff       	jmp    8049c8a <main+0x6a>
 8049d24:	90                   	nop
 8049d25:	90                   	nop
 8049d26:	90                   	nop
 8049d27:	90                   	nop
 8049d28:	90                   	nop
 8049d29:	90                   	nop
 8049d2a:	90                   	nop
 8049d2b:	90                   	nop
 8049d2c:	90                   	nop
 8049d2d:	90                   	nop
 8049d2e:	90                   	nop
 8049d2f:	90                   	nop
 8049d30:	55                   	push   %ebp
 8049d31:	89 e5                	mov    %esp,%ebp
 8049d33:	83 ec 28             	sub    $0x28,%esp
 8049d36:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8049d39:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8049d3c:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 8049d43:	00 
 8049d44:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8049d4b:	e8 14 f9 ff ff       	call   8049664 <calloc@plt>
 8049d50:	85 c0                	test   %eax,%eax
 8049d52:	89 c3                	mov    %eax,%ebx
 8049d54:	89 c6                	mov    %eax,%esi
 8049d56:	75 18                	jne    8049d70 <main+0x150>
 8049d58:	89 f0                	mov    %esi,%eax
 8049d5a:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8049d5d:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8049d60:	89 ec                	mov    %ebp,%esp
 8049d62:	5d                   	pop    %ebp
 8049d63:	c3                   	ret    
 8049d64:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8049d6a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 8049d70:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8049d77:	00 
 8049d78:	c7 44 24 04 35 4b 05 	movl   $0x8054b35,0x4(%esp)
 8049d7f:	08 
 8049d80:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 8049d85:	89 04 24             	mov    %eax,(%esp)
 8049d88:	e8 63 37 00 00       	call   804d4f0 <main+0x38d0>
 8049d8d:	89 43 04             	mov    %eax,0x4(%ebx)
 8049d90:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 8049d97:	00 
 8049d98:	89 04 24             	mov    %eax,(%esp)
 8049d9b:	e8 c4 f8 ff ff       	call   8049664 <calloc@plt>
 8049da0:	85 c0                	test   %eax,%eax
 8049da2:	89 43 08             	mov    %eax,0x8(%ebx)
 8049da5:	75 19                	jne    8049dc0 <main+0x1a0>
 8049da7:	31 f6                	xor    %esi,%esi
 8049da9:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8049dac:	89 f0                	mov    %esi,%eax
 8049dae:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8049db1:	89 ec                	mov    %ebp,%esp
 8049db3:	5d                   	pop    %ebp
 8049db4:	c3                   	ret    
 8049db5:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8049db9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8049dc0:	8b 53 04             	mov    0x4(%ebx),%edx
 8049dc3:	85 d2                	test   %edx,%edx
 8049dc5:	74 20                	je     8049de7 <main+0x1c7>
 8049dc7:	31 d2                	xor    %edx,%edx
 8049dc9:	eb 08                	jmp    8049dd3 <main+0x1b3>
 8049dcb:	90                   	nop
 8049dcc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8049dd0:	8b 43 08             	mov    0x8(%ebx),%eax
 8049dd3:	89 d1                	mov    %edx,%ecx
 8049dd5:	83 c2 01             	add    $0x1,%edx
 8049dd8:	c1 e1 04             	shl    $0x4,%ecx
 8049ddb:	c7 04 01 01 00 00 00 	movl   $0x1,(%ecx,%eax,1)
 8049de2:	39 53 04             	cmp    %edx,0x4(%ebx)
 8049de5:	77 e9                	ja     8049dd0 <main+0x1b0>
 8049de7:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8049dee:	e8 a1 fa ff ff       	call   8049894 <ChannelCreate@plt>
 8049df3:	83 f8 ff             	cmp    $0xffffffff,%eax
 8049df6:	89 03                	mov    %eax,(%ebx)
 8049df8:	74 ad                	je     8049da7 <main+0x187>
 8049dfa:	c7 44 24 08 00 00 08 	movl   $0x80000,0x8(%esp)
 8049e01:	00 
 8049e02:	c7 44 24 04 41 4b 05 	movl   $0x8054b41,0x4(%esp)
 8049e09:	08 
 8049e0a:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 8049e0f:	89 04 24             	mov    %eax,(%esp)
 8049e12:	e8 d9 36 00 00       	call   804d4f0 <main+0x38d0>
 8049e17:	a3 3c 8e 05 08       	mov    %eax,0x8058e3c
 8049e1c:	c7 44 24 08 80 01 00 	movl   $0x180,0x8(%esp)
 8049e23:	00 
 8049e24:	c7 44 24 04 02 03 00 	movl   $0x302,0x4(%esp)
 8049e2b:	00 
 8049e2c:	c7 04 24 4a 4b 05 08 	movl   $0x8054b4a,(%esp)
 8049e33:	e8 dc f6 ff ff       	call   8049514 <shm_open@plt>
 8049e38:	83 f8 ff             	cmp    $0xffffffff,%eax
 8049e3b:	89 43 14             	mov    %eax,0x14(%ebx)
 8049e3e:	0f 84 63 ff ff ff    	je     8049da7 <main+0x187>
 8049e44:	8b 15 3c 8e 05 08    	mov    0x8058e3c,%edx
 8049e4a:	89 04 24             	mov    %eax,(%esp)
 8049e4d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8049e51:	e8 9e f7 ff ff       	call   80495f4 <ftruncate@plt>
 8049e56:	83 f8 ff             	cmp    $0xffffffff,%eax
 8049e59:	0f 84 48 ff ff ff    	je     8049da7 <main+0x187>
 8049e5f:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8049e66:	00 
 8049e67:	8b 43 14             	mov    0x14(%ebx),%eax
 8049e6a:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8049e71:	00 
 8049e72:	c7 44 24 08 00 03 00 	movl   $0x300,0x8(%esp)
 8049e79:	00 
 8049e7a:	89 44 24 10          	mov    %eax,0x10(%esp)
 8049e7e:	a1 3c 8e 05 08       	mov    0x8058e3c,%eax
 8049e83:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8049e8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8049e8e:	e8 71 f7 ff ff       	call   8049604 <mmap@plt>
 8049e93:	83 f8 ff             	cmp    $0xffffffff,%eax
 8049e96:	a3 44 8e 05 08       	mov    %eax,0x8058e44
 8049e9b:	0f 84 06 ff ff ff    	je     8049da7 <main+0x187>
 8049ea1:	8b 43 14             	mov    0x14(%ebx),%eax
 8049ea4:	89 04 24             	mov    %eax,(%esp)
 8049ea7:	e8 98 fb ff ff       	call   8049a44 <close@plt>
 8049eac:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8049eb3:	00 
 8049eb4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8049ebb:	00 
 8049ebc:	c7 04 24 4a 4b 05 08 	movl   $0x8054b4a,(%esp)
 8049ec3:	e8 4c f6 ff ff       	call   8049514 <shm_open@plt>
 8049ec8:	83 f8 ff             	cmp    $0xffffffff,%eax
 8049ecb:	89 43 14             	mov    %eax,0x14(%ebx)
 8049ece:	0f 84 d3 fe ff ff    	je     8049da7 <main+0x187>
 8049ed4:	c7 04 24 4a 4b 05 08 	movl   $0x8054b4a,(%esp)
 8049edb:	e8 e4 f9 ff ff       	call   80498c4 <shm_unlink@plt>
 8049ee0:	e9 73 fe ff ff       	jmp    8049d58 <main+0x138>
 8049ee5:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8049ee9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8049ef0:	55                   	push   %ebp
 8049ef1:	89 e5                	mov    %esp,%ebp
 8049ef3:	57                   	push   %edi
 8049ef4:	56                   	push   %esi
 8049ef5:	89 c6                	mov    %eax,%esi
 8049ef7:	53                   	push   %ebx
 8049ef8:	83 ec 4c             	sub    $0x4c,%esp
 8049efb:	8b 58 04             	mov    0x4(%eax),%ebx
 8049efe:	85 db                	test   %ebx,%ebx
 8049f00:	0f 84 8b 00 00 00    	je     8049f91 <main+0x371>
 8049f06:	31 db                	xor    %ebx,%ebx
 8049f08:	eb 0e                	jmp    8049f18 <main+0x2f8>
 8049f0a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8049f10:	83 c3 01             	add    $0x1,%ebx
 8049f13:	39 5e 04             	cmp    %ebx,0x4(%esi)
 8049f16:	76 79                	jbe    8049f91 <main+0x371>
 8049f18:	8b 46 08             	mov    0x8(%esi),%eax
 8049f1b:	89 df                	mov    %ebx,%edi
 8049f1d:	c1 e7 04             	shl    $0x4,%edi
 8049f20:	01 f8                	add    %edi,%eax
 8049f22:	8b 08                	mov    (%eax),%ecx
 8049f24:	85 c9                	test   %ecx,%ecx
 8049f26:	74 e8                	je     8049f10 <main+0x2f0>
 8049f28:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8049f2e:	8b 46 10             	mov    0x10(%esi),%eax
 8049f31:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8049f34:	8b 46 0c             	mov    0xc(%esi),%eax
 8049f37:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8049f3a:	e8 85 f8 ff ff       	call   80497c4 <fork@plt>
 8049f3f:	85 c0                	test   %eax,%eax
 8049f41:	74 67                	je     8049faa <main+0x38a>
 8049f43:	83 f8 ff             	cmp    $0xffffffff,%eax
 8049f46:	74 58                	je     8049fa0 <main+0x380>
 8049f48:	8b 56 08             	mov    0x8(%esi),%edx
 8049f4b:	83 c3 01             	add    $0x1,%ebx
 8049f4e:	89 44 3a 04          	mov    %eax,0x4(%edx,%edi,1)
 8049f52:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8049f55:	01 d7                	add    %edx,%edi
 8049f57:	89 44 24 04          	mov    %eax,0x4(%esp)
 8049f5b:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 8049f62:	e8 1d f5 ff ff       	call   8049484 <clock_gettime@plt>
 8049f67:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8049f6a:	b8 83 de 1b 43       	mov    $0x431bde83,%eax
 8049f6f:	c7 47 0c 00 00 00 00 	movl   $0x0,0xc(%edi)
 8049f76:	f7 e9                	imul   %ecx
 8049f78:	69 45 dc e8 03 00 00 	imul   $0x3e8,-0x24(%ebp),%eax
 8049f7f:	c1 f9 1f             	sar    $0x1f,%ecx
 8049f82:	c1 fa 12             	sar    $0x12,%edx
 8049f85:	29 ca                	sub    %ecx,%edx
 8049f87:	01 c2                	add    %eax,%edx
 8049f89:	39 5e 04             	cmp    %ebx,0x4(%esi)
 8049f8c:	89 57 08             	mov    %edx,0x8(%edi)
 8049f8f:	77 87                	ja     8049f18 <main+0x2f8>
 8049f91:	b8 01 00 00 00       	mov    $0x1,%eax
 8049f96:	eb 0a                	jmp    8049fa2 <main+0x382>
 8049f98:	90                   	nop
 8049f99:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8049fa0:	31 c0                	xor    %eax,%eax
 8049fa2:	83 c4 4c             	add    $0x4c,%esp
 8049fa5:	5b                   	pop    %ebx
 8049fa6:	5e                   	pop    %esi
 8049fa7:	5f                   	pop    %edi
 8049fa8:	5d                   	pop    %ebp
 8049fa9:	c3                   	ret    
 8049faa:	a1 3c 8e 05 08       	mov    0x8058e3c,%eax
 8049faf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8049fb3:	a1 44 8e 05 08       	mov    0x8058e44,%eax
 8049fb8:	89 04 24             	mov    %eax,(%esp)
 8049fbb:	e8 24 f5 ff ff       	call   80494e4 <munmap@plt>
 8049fc0:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8049fc7:	00 
 8049fc8:	8b 46 14             	mov    0x14(%esi),%eax
 8049fcb:	c7 44 24 0c 11 00 00 	movl   $0x11,0xc(%esp)
 8049fd2:	00 
 8049fd3:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 8049fda:	00 
 8049fdb:	89 44 24 10          	mov    %eax,0x10(%esp)
 8049fdf:	a1 3c 8e 05 08       	mov    0x8058e3c,%eax
 8049fe4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8049fe8:	a1 44 8e 05 08       	mov    0x8058e44,%eax
 8049fed:	89 04 24             	mov    %eax,(%esp)
 8049ff0:	e8 0f f6 ff ff       	call   8049604 <mmap@plt>
 8049ff5:	3b 05 44 8e 05 08    	cmp    0x8058e44,%eax
 8049ffb:	74 0c                	je     804a009 <main+0x3e9>
 8049ffd:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 804a004:	e8 6b f9 ff ff       	call   8049974 <exit@plt>
 804a009:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804a00e:	c7 44 24 08 63 00 00 	movl   $0x63,0x8(%esp)
 804a015:	00 
 804a016:	c7 44 24 04 58 4b 05 	movl   $0x8054b58,0x4(%esp)
 804a01d:	08 
 804a01e:	89 04 24             	mov    %eax,(%esp)
 804a021:	e8 ca 34 00 00       	call   804d4f0 <main+0x38d0>
 804a026:	c7 44 24 08 63 00 00 	movl   $0x63,0x8(%esp)
 804a02d:	00 
 804a02e:	c7 44 24 04 63 4b 05 	movl   $0x8054b63,0x4(%esp)
 804a035:	08 
 804a036:	89 c6                	mov    %eax,%esi
 804a038:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804a03d:	89 04 24             	mov    %eax,(%esp)
 804a040:	e8 ab 34 00 00       	call   804d4f0 <main+0x38d0>
 804a045:	89 75 e4             	mov    %esi,-0x1c(%ebp)
 804a048:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 804a04f:	00 
 804a050:	c7 44 24 04 6e 4b 05 	movl   $0x8054b6e,0x4(%esp)
 804a057:	08 
 804a058:	89 c3                	mov    %eax,%ebx
 804a05a:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804a05f:	89 04 24             	mov    %eax,(%esp)
 804a062:	e8 59 34 00 00       	call   804d4c0 <main+0x38a0>
 804a067:	85 c0                	test   %eax,%eax
 804a069:	74 0d                	je     804a078 <main+0x458>
 804a06b:	89 04 24             	mov    %eax,(%esp)
 804a06e:	e8 21 f4 ff ff       	call   8049494 <chroot@plt>
 804a073:	83 f8 ff             	cmp    $0xffffffff,%eax
 804a076:	74 85                	je     8049ffd <main+0x3dd>
 804a078:	c7 04 24 f3 4b 05 08 	movl   $0x8054bf3,(%esp)
 804a07f:	e8 50 f6 ff ff       	call   80496d4 <chdir@plt>
 804a084:	83 f8 ff             	cmp    $0xffffffff,%eax
 804a087:	0f 84 70 ff ff ff    	je     8049ffd <main+0x3dd>
 804a08d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 804a090:	89 44 24 04          	mov    %eax,0x4(%esp)
 804a094:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 804a09b:	e8 44 f5 ff ff       	call   80495e4 <setgroups@plt>
 804a0a0:	83 f8 ff             	cmp    $0xffffffff,%eax
 804a0a3:	0f 84 54 ff ff ff    	je     8049ffd <main+0x3dd>
 804a0a9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 804a0ac:	89 04 24             	mov    %eax,(%esp)
 804a0af:	e8 70 f6 ff ff       	call   8049724 <setgid@plt>
 804a0b4:	83 f8 ff             	cmp    $0xffffffff,%eax
 804a0b7:	0f 84 40 ff ff ff    	je     8049ffd <main+0x3dd>
 804a0bd:	89 1c 24             	mov    %ebx,(%esp)
 804a0c0:	e8 3f f9 ff ff       	call   8049a04 <setuid@plt>
 804a0c5:	83 f8 ff             	cmp    $0xffffffff,%eax
 804a0c8:	0f 84 2f ff ff ff    	je     8049ffd <main+0x3dd>
 804a0ce:	8b 45 d0             	mov    -0x30(%ebp),%eax
 804a0d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 804a0d5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 804a0d8:	89 04 24             	mov    %eax,(%esp)
 804a0db:	e8 20 25 00 00       	call   804c600 <main+0x29e0>
 804a0e0:	e9 18 ff ff ff       	jmp    8049ffd <main+0x3dd>
 804a0e5:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804a0e9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804a0f0:	55                   	push   %ebp
 804a0f1:	89 e5                	mov    %esp,%ebp
 804a0f3:	57                   	push   %edi
 804a0f4:	56                   	push   %esi
 804a0f5:	53                   	push   %ebx
 804a0f6:	83 ec 3c             	sub    $0x3c,%esp
 804a0f9:	8b 75 08             	mov    0x8(%ebp),%esi
 804a0fc:	8b 3e                	mov    (%esi),%edi
 804a0fe:	e8 41 f4 ff ff       	call   8049544 <getpid@plt>
 804a103:	89 c3                	mov    %eax,%ebx
 804a105:	e8 ba f6 ff ff       	call   80497c4 <fork@plt>
 804a10a:	85 c0                	test   %eax,%eax
 804a10c:	0f 84 b1 01 00 00    	je     804a2c3 <main+0x6a3>
 804a112:	83 f8 ff             	cmp    $0xffffffff,%eax
 804a115:	0f 84 45 01 00 00    	je     804a260 <main+0x640>
 804a11b:	89 46 0c             	mov    %eax,0xc(%esi)
 804a11e:	8d 5d cc             	lea    -0x34(%ebp),%ebx
 804a121:	eb 0d                	jmp    804a130 <main+0x510>
 804a123:	90                   	nop
 804a124:	90                   	nop
 804a125:	90                   	nop
 804a126:	90                   	nop
 804a127:	90                   	nop
 804a128:	90                   	nop
 804a129:	90                   	nop
 804a12a:	90                   	nop
 804a12b:	90                   	nop
 804a12c:	90                   	nop
 804a12d:	90                   	nop
 804a12e:	90                   	nop
 804a12f:	90                   	nop
 804a130:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 804a137:	00 
 804a138:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 804a13f:	00 
 804a140:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 804a144:	8b 06                	mov    (%esi),%eax
 804a146:	89 04 24             	mov    %eax,(%esp)
 804a149:	e8 a6 f6 ff ff       	call   80497f4 <MsgReceivePulse@plt>
 804a14e:	85 c0                	test   %eax,%eax
 804a150:	0f 85 0a 01 00 00    	jne    804a260 <main+0x640>
 804a156:	80 7d d0 00          	cmpb   $0x0,-0x30(%ebp)
 804a15a:	75 d4                	jne    804a130 <main+0x510>
 804a15c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 804a15f:	89 46 10             	mov    %eax,0x10(%esi)
 804a162:	89 f0                	mov    %esi,%eax
 804a164:	e8 87 fd ff ff       	call   8049ef0 <main+0x2d0>
 804a169:	85 c0                	test   %eax,%eax
 804a16b:	0f 84 ef 00 00 00    	je     804a260 <main+0x640>
 804a171:	eb 0d                	jmp    804a180 <main+0x560>
 804a173:	90                   	nop
 804a174:	90                   	nop
 804a175:	90                   	nop
 804a176:	90                   	nop
 804a177:	90                   	nop
 804a178:	90                   	nop
 804a179:	90                   	nop
 804a17a:	90                   	nop
 804a17b:	90                   	nop
 804a17c:	90                   	nop
 804a17d:	90                   	nop
 804a17e:	90                   	nop
 804a17f:	90                   	nop
 804a180:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 804a183:	89 04 24             	mov    %eax,(%esp)
 804a186:	e8 69 f5 ff ff       	call   80496f4 <wait@plt>
 804a18b:	83 f8 ff             	cmp    $0xffffffff,%eax
 804a18e:	89 c3                	mov    %eax,%ebx
 804a190:	0f 84 ca 00 00 00    	je     804a260 <main+0x640>
 804a196:	8b 56 04             	mov    0x4(%esi),%edx
 804a199:	85 d2                	test   %edx,%edx
 804a19b:	74 29                	je     804a1c6 <main+0x5a6>
 804a19d:	8b 4e 08             	mov    0x8(%esi),%ecx
 804a1a0:	31 c0                	xor    %eax,%eax
 804a1a2:	31 ff                	xor    %edi,%edi
 804a1a4:	3b 59 04             	cmp    0x4(%ecx),%ebx
 804a1a7:	75 12                	jne    804a1bb <main+0x59b>
 804a1a9:	eb 4a                	jmp    804a1f5 <main+0x5d5>
 804a1ab:	90                   	nop
 804a1ac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804a1b0:	89 c7                	mov    %eax,%edi
 804a1b2:	c1 e7 04             	shl    $0x4,%edi
 804a1b5:	3b 5c 39 04          	cmp    0x4(%ecx,%edi,1),%ebx
 804a1b9:	74 07                	je     804a1c2 <main+0x5a2>
 804a1bb:	83 c0 01             	add    $0x1,%eax
 804a1be:	39 d0                	cmp    %edx,%eax
 804a1c0:	72 ee                	jb     804a1b0 <main+0x590>
 804a1c2:	39 d0                	cmp    %edx,%eax
 804a1c4:	75 2a                	jne    804a1f0 <main+0x5d0>
 804a1c6:	3b 5e 0c             	cmp    0xc(%esi),%ebx
 804a1c9:	0f 84 d4 00 00 00    	je     804a2a3 <main+0x683>
 804a1cf:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 804a1d3:	c7 44 24 04 93 4b 05 	movl   $0x8054b93,0x4(%esp)
 804a1da:	08 
 804a1db:	c7 04 24 80 79 05 08 	movl   $0x8057980,(%esp)
 804a1e2:	e8 bd f4 ff ff       	call   80496a4 <fprintf@plt>
 804a1e7:	eb 97                	jmp    804a180 <main+0x560>
 804a1e9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804a1f0:	89 c7                	mov    %eax,%edi
 804a1f2:	c1 e7 04             	shl    $0x4,%edi
 804a1f5:	c7 44 39 04 00 00 00 	movl   $0x0,0x4(%ecx,%edi,1)
 804a1fc:	00 
 804a1fd:	8d 45 dc             	lea    -0x24(%ebp),%eax
 804a200:	89 44 24 04          	mov    %eax,0x4(%esp)
 804a204:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 804a20b:	e8 74 f2 ff ff       	call   8049484 <clock_gettime@plt>
 804a210:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 804a213:	ba 83 de 1b 43       	mov    $0x431bde83,%edx
 804a218:	89 c8                	mov    %ecx,%eax
 804a21a:	f7 ea                	imul   %edx
 804a21c:	69 45 dc e8 03 00 00 	imul   $0x3e8,-0x24(%ebp),%eax
 804a223:	c1 f9 1f             	sar    $0x1f,%ecx
 804a226:	c1 fa 12             	sar    $0x12,%edx
 804a229:	29 ca                	sub    %ecx,%edx
 804a22b:	31 c9                	xor    %ecx,%ecx
 804a22d:	01 c2                	add    %eax,%edx
 804a22f:	8b 46 08             	mov    0x8(%esi),%eax
 804a232:	2b 54 38 08          	sub    0x8(%eax,%edi,1),%edx
 804a236:	1b 4c 38 0c          	sbb    0xc(%eax,%edi,1),%ecx
 804a23a:	83 f9 00             	cmp    $0x0,%ecx
 804a23d:	77 31                	ja     804a270 <main+0x650>
 804a23f:	83 fa 09             	cmp    $0x9,%edx
 804a242:	77 2c                	ja     804a270 <main+0x650>
 804a244:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 804a248:	c7 44 24 04 ae 4b 05 	movl   $0x8054bae,0x4(%esp)
 804a24f:	08 
 804a250:	c7 04 24 80 79 05 08 	movl   $0x8057980,(%esp)
 804a257:	e8 48 f4 ff ff       	call   80496a4 <fprintf@plt>
 804a25c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804a260:	83 c4 3c             	add    $0x3c,%esp
 804a263:	5b                   	pop    %ebx
 804a264:	5e                   	pop    %esi
 804a265:	5f                   	pop    %edi
 804a266:	5d                   	pop    %ebp
 804a267:	c3                   	ret    
 804a268:	90                   	nop
 804a269:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804a270:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 804a274:	c7 44 24 04 cb 4b 05 	movl   $0x8054bcb,0x4(%esp)
 804a27b:	08 
 804a27c:	c7 04 24 80 79 05 08 	movl   $0x8057980,(%esp)
 804a283:	e8 1c f4 ff ff       	call   80496a4 <fprintf@plt>
 804a288:	8b 46 08             	mov    0x8(%esi),%eax
 804a28b:	c7 04 38 01 00 00 00 	movl   $0x1,(%eax,%edi,1)
 804a292:	89 f0                	mov    %esi,%eax
 804a294:	e8 57 fc ff ff       	call   8049ef0 <main+0x2d0>
 804a299:	85 c0                	test   %eax,%eax
 804a29b:	0f 85 df fe ff ff    	jne    804a180 <main+0x560>
 804a2a1:	eb bd                	jmp    804a260 <main+0x640>
 804a2a3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 804a2a7:	c7 44 24 04 79 4b 05 	movl   $0x8054b79,0x4(%esp)
 804a2ae:	08 
 804a2af:	c7 04 24 80 79 05 08 	movl   $0x8057980,(%esp)
 804a2b6:	e8 e9 f3 ff ff       	call   80496a4 <fprintf@plt>
 804a2bb:	83 c4 3c             	add    $0x3c,%esp
 804a2be:	5b                   	pop    %ebx
 804a2bf:	5e                   	pop    %esi
 804a2c0:	5f                   	pop    %edi
 804a2c1:	5d                   	pop    %ebp
 804a2c2:	c3                   	ret    
 804a2c3:	89 7c 24 04          	mov    %edi,0x4(%esp)
 804a2c7:	89 1c 24             	mov    %ebx,(%esp)
 804a2ca:	e8 11 0c 00 00       	call   804aee0 <main+0x12c0>
 804a2cf:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 804a2d6:	e8 99 f6 ff ff       	call   8049974 <exit@plt>
 804a2db:	90                   	nop
 804a2dc:	90                   	nop
 804a2dd:	90                   	nop
 804a2de:	90                   	nop
 804a2df:	90                   	nop
 804a2e0:	55                   	push   %ebp
 804a2e1:	8b 4a 28             	mov    0x28(%edx),%ecx
 804a2e4:	89 e5                	mov    %esp,%ebp
 804a2e6:	85 c9                	test   %ecx,%ecx
 804a2e8:	75 16                	jne    804a300 <main+0x6e0>
 804a2ea:	8b 0a                	mov    (%edx),%ecx
 804a2ec:	85 c9                	test   %ecx,%ecx
 804a2ee:	74 40                	je     804a330 <main+0x710>
 804a2f0:	8b 42 04             	mov    0x4(%edx),%eax
 804a2f3:	89 41 04             	mov    %eax,0x4(%ecx)
 804a2f6:	8b 52 04             	mov    0x4(%edx),%edx
 804a2f9:	89 0a                	mov    %ecx,(%edx)
 804a2fb:	5d                   	pop    %ebp
 804a2fc:	c3                   	ret    
 804a2fd:	8d 76 00             	lea    0x0(%esi),%esi
 804a300:	83 f9 04             	cmp    $0x4,%ecx
 804a303:	74 1b                	je     804a320 <main+0x700>
 804a305:	83 f9 05             	cmp    $0x5,%ecx
 804a308:	74 36                	je     804a340 <main+0x720>
 804a30a:	8b 0a                	mov    (%edx),%ecx
 804a30c:	85 c9                	test   %ecx,%ecx
 804a30e:	75 e0                	jne    804a2f0 <main+0x6d0>
 804a310:	8b 52 04             	mov    0x4(%edx),%edx
 804a313:	31 c9                	xor    %ecx,%ecx
 804a315:	89 50 5c             	mov    %edx,0x5c(%eax)
 804a318:	eb df                	jmp    804a2f9 <main+0x6d9>
 804a31a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804a320:	8b 0a                	mov    (%edx),%ecx
 804a322:	85 c9                	test   %ecx,%ecx
 804a324:	75 ca                	jne    804a2f0 <main+0x6d0>
 804a326:	8b 52 04             	mov    0x4(%edx),%edx
 804a329:	31 c9                	xor    %ecx,%ecx
 804a32b:	89 50 64             	mov    %edx,0x64(%eax)
 804a32e:	eb c9                	jmp    804a2f9 <main+0x6d9>
 804a330:	8b 52 04             	mov    0x4(%edx),%edx
 804a333:	31 c9                	xor    %ecx,%ecx
 804a335:	89 50 74             	mov    %edx,0x74(%eax)
 804a338:	eb bf                	jmp    804a2f9 <main+0x6d9>
 804a33a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804a340:	8b 0a                	mov    (%edx),%ecx
 804a342:	85 c9                	test   %ecx,%ecx
 804a344:	75 aa                	jne    804a2f0 <main+0x6d0>
 804a346:	8b 52 04             	mov    0x4(%edx),%edx
 804a349:	31 c9                	xor    %ecx,%ecx
 804a34b:	89 50 6c             	mov    %edx,0x6c(%eax)
 804a34e:	eb a9                	jmp    804a2f9 <main+0x6d9>
 804a350:	55                   	push   %ebp
 804a351:	89 e5                	mov    %esp,%ebp
 804a353:	83 ec 18             	sub    $0x18,%esp
 804a356:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 804a359:	89 d3                	mov    %edx,%ebx
 804a35b:	89 75 fc             	mov    %esi,-0x4(%ebp)
 804a35e:	89 c6                	mov    %eax,%esi
 804a360:	8b 42 28             	mov    0x28(%edx),%eax
 804a363:	85 c0                	test   %eax,%eax
 804a365:	74 56                	je     804a3bd <main+0x79d>
 804a367:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 804a36e:	00 
 804a36f:	c7 44 24 08 00 00 00 	movl   $0x70000000,0x8(%esp)
 804a376:	70 
 804a377:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 804a37e:	00 
 804a37f:	8b 42 24             	mov    0x24(%edx),%eax
 804a382:	89 04 24             	mov    %eax,(%esp)
 804a385:	e8 da f4 ff ff       	call   8049864 <ionotify@plt>
 804a38a:	8b 43 24             	mov    0x24(%ebx),%eax
 804a38d:	89 04 24             	mov    %eax,(%esp)
 804a390:	e8 af f6 ff ff       	call   8049a44 <close@plt>
 804a395:	89 f0                	mov    %esi,%eax
 804a397:	89 da                	mov    %ebx,%edx
 804a399:	c7 43 24 ff ff ff ff 	movl   $0xffffffff,0x24(%ebx)
 804a3a0:	e8 3b ff ff ff       	call   804a2e0 <main+0x6c0>
 804a3a5:	8b 46 74             	mov    0x74(%esi),%eax
 804a3a8:	c7 03 00 00 00 00    	movl   $0x0,(%ebx)
 804a3ae:	c7 43 28 00 00 00 00 	movl   $0x0,0x28(%ebx)
 804a3b5:	89 43 04             	mov    %eax,0x4(%ebx)
 804a3b8:	89 18                	mov    %ebx,(%eax)
 804a3ba:	89 5e 74             	mov    %ebx,0x74(%esi)
 804a3bd:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 804a3c0:	8b 75 fc             	mov    -0x4(%ebp),%esi
 804a3c3:	89 ec                	mov    %ebp,%esp
 804a3c5:	5d                   	pop    %ebp
 804a3c6:	c3                   	ret    
 804a3c7:	89 f6                	mov    %esi,%esi
 804a3c9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804a3d0:	55                   	push   %ebp
 804a3d1:	89 e5                	mov    %esp,%ebp
 804a3d3:	83 ec 18             	sub    $0x18,%esp
 804a3d6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 804a3d9:	89 d3                	mov    %edx,%ebx
 804a3db:	89 75 fc             	mov    %esi,-0x4(%ebp)
 804a3de:	8b 4a 34             	mov    0x34(%edx),%ecx
 804a3e1:	ba 01 00 00 00       	mov    $0x1,%edx
 804a3e6:	3b 4b 38             	cmp    0x38(%ebx),%ecx
 804a3e9:	74 15                	je     804a400 <main+0x7e0>
 804a3eb:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 804a3ee:	89 d0                	mov    %edx,%eax
 804a3f0:	8b 75 fc             	mov    -0x4(%ebp),%esi
 804a3f3:	89 ec                	mov    %ebp,%esp
 804a3f5:	5d                   	pop    %ebp
 804a3f6:	c3                   	ret    
 804a3f7:	89 f6                	mov    %esi,%esi
 804a3f9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804a400:	85 c9                	test   %ecx,%ecx
 804a402:	be fc 01 00 00       	mov    $0x1fc,%esi
 804a407:	75 37                	jne    804a440 <main+0x820>
 804a409:	89 74 24 08          	mov    %esi,0x8(%esp)
 804a40d:	8b 53 30             	mov    0x30(%ebx),%edx
 804a410:	83 c0 34             	add    $0x34,%eax
 804a413:	89 04 24             	mov    %eax,(%esp)
 804a416:	89 54 24 04          	mov    %edx,0x4(%esp)
 804a41a:	e8 a1 39 00 00       	call   804ddc0 <main+0x41a0>
 804a41f:	31 d2                	xor    %edx,%edx
 804a421:	85 c0                	test   %eax,%eax
 804a423:	74 c6                	je     804a3eb <main+0x7cb>
 804a425:	b2 01                	mov    $0x1,%dl
 804a427:	89 43 30             	mov    %eax,0x30(%ebx)
 804a42a:	89 d0                	mov    %edx,%eax
 804a42c:	89 73 38             	mov    %esi,0x38(%ebx)
 804a42f:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 804a432:	8b 75 fc             	mov    -0x4(%ebp),%esi
 804a435:	89 ec                	mov    %ebp,%esp
 804a437:	5d                   	pop    %ebp
 804a438:	c3                   	ret    
 804a439:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804a440:	8d 74 09 04          	lea    0x4(%ecx,%ecx,1),%esi
 804a444:	eb c3                	jmp    804a409 <main+0x7e9>
 804a446:	8d 76 00             	lea    0x0(%esi),%esi
 804a449:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804a450:	55                   	push   %ebp
 804a451:	89 e5                	mov    %esp,%ebp
 804a453:	57                   	push   %edi
 804a454:	56                   	push   %esi
 804a455:	89 d6                	mov    %edx,%esi
 804a457:	53                   	push   %ebx
 804a458:	89 c3                	mov    %eax,%ebx
 804a45a:	83 ec 2c             	sub    $0x2c,%esp
 804a45d:	8b 52 28             	mov    0x28(%edx),%edx
 804a460:	85 d2                	test   %edx,%edx
 804a462:	0f 84 8e 00 00 00    	je     804a4f6 <main+0x8d6>
 804a468:	c7 45 d8 04 00 00 00 	movl   $0x4,-0x28(%ebp)
 804a46f:	8b 40 04             	mov    0x4(%eax),%eax
 804a472:	8d 7d d8             	lea    -0x28(%ebp),%edi
 804a475:	66 c7 45 e6 ff ff    	movw   $0xffff,-0x1a(%ebp)
 804a47b:	89 75 e0             	mov    %esi,-0x20(%ebp)
 804a47e:	66 c7 45 e4 02 00    	movw   $0x2,-0x1c(%ebp)
 804a484:	89 45 dc             	mov    %eax,-0x24(%ebp)
 804a487:	8b 46 4c             	mov    0x4c(%esi),%eax
 804a48a:	85 c0                	test   %eax,%eax
 804a48c:	74 68                	je     804a4f6 <main+0x8d6>
 804a48e:	66 90                	xchg   %ax,%ax
 804a490:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 804a494:	c7 44 24 08 00 00 00 	movl   $0x20000000,0x8(%esp)
 804a49b:	20 
 804a49c:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 804a4a3:	00 
 804a4a4:	8b 46 24             	mov    0x24(%esi),%eax
 804a4a7:	89 04 24             	mov    %eax,(%esp)
 804a4aa:	e8 b5 f3 ff ff       	call   8049864 <ionotify@plt>
 804a4af:	85 c0                	test   %eax,%eax
 804a4b1:	74 43                	je     804a4f6 <main+0x8d6>
 804a4b3:	83 f8 ff             	cmp    $0xffffffff,%eax
 804a4b6:	74 4f                	je     804a507 <main+0x8e7>
 804a4b8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 804a4bf:	00 
 804a4c0:	8b 46 54             	mov    0x54(%esi),%eax
 804a4c3:	89 44 24 08          	mov    %eax,0x8(%esp)
 804a4c7:	8b 46 4c             	mov    0x4c(%esi),%eax
 804a4ca:	03 46 50             	add    0x50(%esi),%eax
 804a4cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 804a4d1:	8b 46 24             	mov    0x24(%esi),%eax
 804a4d4:	89 04 24             	mov    %eax,(%esp)
 804a4d7:	e8 08 f4 ff ff       	call   80498e4 <send@plt>
 804a4dc:	85 c0                	test   %eax,%eax
 804a4de:	7e 20                	jle    804a500 <main+0x8e0>
 804a4e0:	8b 56 54             	mov    0x54(%esi),%edx
 804a4e3:	01 46 50             	add    %eax,0x50(%esi)
 804a4e6:	29 c2                	sub    %eax,%edx
 804a4e8:	85 d2                	test   %edx,%edx
 804a4ea:	89 56 54             	mov    %edx,0x54(%esi)
 804a4ed:	74 31                	je     804a520 <main+0x900>
 804a4ef:	8b 46 4c             	mov    0x4c(%esi),%eax
 804a4f2:	85 c0                	test   %eax,%eax
 804a4f4:	75 9a                	jne    804a490 <main+0x870>
 804a4f6:	83 c4 2c             	add    $0x2c,%esp
 804a4f9:	5b                   	pop    %ebx
 804a4fa:	5e                   	pop    %esi
 804a4fb:	5f                   	pop    %edi
 804a4fc:	5d                   	pop    %ebp
 804a4fd:	c3                   	ret    
 804a4fe:	66 90                	xchg   %ax,%ax
 804a500:	c7 46 54 00 00 00 00 	movl   $0x0,0x54(%esi)
 804a507:	89 f2                	mov    %esi,%edx
 804a509:	89 d8                	mov    %ebx,%eax
 804a50b:	e8 40 fe ff ff       	call   804a350 <main+0x730>
 804a510:	83 c4 2c             	add    $0x2c,%esp
 804a513:	5b                   	pop    %ebx
 804a514:	5e                   	pop    %esi
 804a515:	5f                   	pop    %edi
 804a516:	5d                   	pop    %ebp
 804a517:	c3                   	ret    
 804a518:	90                   	nop
 804a519:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804a520:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 804a527:	00 
 804a528:	8b 46 58             	mov    0x58(%esi),%eax
 804a52b:	89 04 24             	mov    %eax,(%esp)
 804a52e:	e8 51 f1 ff ff       	call   8049684 <MsgError@plt>
 804a533:	8b 46 4c             	mov    0x4c(%esi),%eax
 804a536:	89 04 24             	mov    %eax,(%esp)
 804a539:	e8 16 f5 ff ff       	call   8049a54 <free@plt>
 804a53e:	c7 46 4c 00 00 00 00 	movl   $0x0,0x4c(%esi)
 804a545:	c7 46 54 00 00 00 00 	movl   $0x0,0x54(%esi)
 804a54c:	c7 46 50 00 00 00 00 	movl   $0x0,0x50(%esi)
 804a553:	c7 46 58 00 00 00 00 	movl   $0x0,0x58(%esi)
 804a55a:	eb 9a                	jmp    804a4f6 <main+0x8d6>
 804a55c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804a560:	55                   	push   %ebp
 804a561:	89 e5                	mov    %esp,%ebp
 804a563:	56                   	push   %esi
 804a564:	89 ce                	mov    %ecx,%esi
 804a566:	53                   	push   %ebx
 804a567:	89 c3                	mov    %eax,%ebx
 804a569:	81 ec d0 00 00 00    	sub    $0xd0,%esp
 804a56f:	c7 85 48 ff ff ff 01 	movl   $0x1,-0xb8(%ebp)
 804a576:	00 00 00 
 804a579:	89 8d 4c ff ff ff    	mov    %ecx,-0xb4(%ebp)
 804a57f:	8b 41 08             	mov    0x8(%ecx),%eax
 804a582:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 804a588:	8b 41 0c             	mov    0xc(%ecx),%eax
 804a58b:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 804a591:	8b 41 10             	mov    0x10(%ecx),%eax
 804a594:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 804a59a:	8b 41 14             	mov    0x14(%ecx),%eax
 804a59d:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 804a5a3:	8b 41 18             	mov    0x18(%ecx),%eax
 804a5a6:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 804a5ac:	8b 41 1c             	mov    0x1c(%ecx),%eax
 804a5af:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 804a5b5:	8b 41 20             	mov    0x20(%ecx),%eax
 804a5b8:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 804a5be:	8b 41 30             	mov    0x30(%ecx),%eax
 804a5c1:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 804a5c7:	8b 49 48             	mov    0x48(%ecx),%ecx
 804a5ca:	85 c9                	test   %ecx,%ecx
 804a5cc:	0f 85 9e 00 00 00    	jne    804a670 <main+0xa50>
 804a5d2:	c6 85 70 ff ff ff 00 	movb   $0x0,-0x90(%ebp)
 804a5d9:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 804a5df:	89 14 24             	mov    %edx,(%esp)
 804a5e2:	c7 44 24 0c a8 00 00 	movl   $0xa8,0xc(%esp)
 804a5e9:	00 
 804a5ea:	89 44 24 08          	mov    %eax,0x8(%esp)
 804a5ee:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 804a5f5:	00 
 804a5f6:	e8 f9 f3 ff ff       	call   80499f4 <MsgReply@plt>
 804a5fb:	89 c2                	mov    %eax,%edx
 804a5fd:	31 c0                	xor    %eax,%eax
 804a5ff:	83 fa ff             	cmp    $0xffffffff,%edx
 804a602:	74 5a                	je     804a65e <main+0xa3e>
 804a604:	8d 45 f0             	lea    -0x10(%ebp),%eax
 804a607:	89 44 24 04          	mov    %eax,0x4(%esp)
 804a60b:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 804a612:	e8 6d ee ff ff       	call   8049484 <clock_gettime@plt>
 804a617:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 804a61a:	ba 83 de 1b 43       	mov    $0x431bde83,%edx
 804a61f:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 804a625:	c7 46 7c 00 00 00 00 	movl   $0x0,0x7c(%esi)
 804a62c:	c7 46 28 05 00 00 00 	movl   $0x5,0x28(%esi)
 804a633:	89 c8                	mov    %ecx,%eax
 804a635:	f7 ea                	imul   %edx
 804a637:	69 45 f0 e8 03 00 00 	imul   $0x3e8,-0x10(%ebp),%eax
 804a63e:	c1 f9 1f             	sar    $0x1f,%ecx
 804a641:	c1 fa 12             	sar    $0x12,%edx
 804a644:	29 ca                	sub    %ecx,%edx
 804a646:	01 c2                	add    %eax,%edx
 804a648:	8b 43 6c             	mov    0x6c(%ebx),%eax
 804a64b:	89 56 78             	mov    %edx,0x78(%esi)
 804a64e:	89 46 04             	mov    %eax,0x4(%esi)
 804a651:	8b 43 6c             	mov    0x6c(%ebx),%eax
 804a654:	89 73 6c             	mov    %esi,0x6c(%ebx)
 804a657:	89 30                	mov    %esi,(%eax)
 804a659:	b8 01 00 00 00       	mov    $0x1,%eax
 804a65e:	81 c4 d0 00 00 00    	add    $0xd0,%esp
 804a664:	5b                   	pop    %ebx
 804a665:	5e                   	pop    %esi
 804a666:	5d                   	pop    %ebp
 804a667:	c3                   	ret    
 804a668:	90                   	nop
 804a669:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804a670:	8b 43 18             	mov    0x18(%ebx),%eax
 804a673:	89 95 44 ff ff ff    	mov    %edx,-0xbc(%ebp)
 804a679:	89 04 24             	mov    %eax,(%esp)
 804a67c:	e8 43 f3 ff ff       	call   80499c4 <strlen@plt>
 804a681:	c7 44 24 08 80 00 00 	movl   $0x80,0x8(%esp)
 804a688:	00 
 804a689:	83 c0 01             	add    $0x1,%eax
 804a68c:	03 46 40             	add    0x40(%esi),%eax
 804a68f:	89 44 24 04          	mov    %eax,0x4(%esp)
 804a693:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 804a699:	89 04 24             	mov    %eax,(%esp)
 804a69c:	e8 b3 f0 ff ff       	call   8049754 <strncpy@plt>
 804a6a1:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
 804a6a7:	e9 2d ff ff ff       	jmp    804a5d9 <main+0x9b9>
 804a6ac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804a6b0:	55                   	push   %ebp
 804a6b1:	89 e5                	mov    %esp,%ebp
 804a6b3:	57                   	push   %edi
 804a6b4:	56                   	push   %esi
 804a6b5:	89 d6                	mov    %edx,%esi
 804a6b7:	53                   	push   %ebx
 804a6b8:	89 c3                	mov    %eax,%ebx
 804a6ba:	83 ec 2c             	sub    $0x2c,%esp
 804a6bd:	8b 7a 28             	mov    0x28(%edx),%edi
 804a6c0:	85 ff                	test   %edi,%edi
 804a6c2:	75 0c                	jne    804a6d0 <main+0xab0>
 804a6c4:	83 c4 2c             	add    $0x2c,%esp
 804a6c7:	5b                   	pop    %ebx
 804a6c8:	5e                   	pop    %esi
 804a6c9:	5f                   	pop    %edi
 804a6ca:	5d                   	pop    %ebp
 804a6cb:	c3                   	ret    
 804a6cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804a6d0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 804a6d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 804a6d7:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 804a6de:	e8 a1 ed ff ff       	call   8049484 <clock_gettime@plt>
 804a6e3:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 804a6e6:	ba 83 de 1b 43       	mov    $0x431bde83,%edx
 804a6eb:	c7 46 74 00 00 00 00 	movl   $0x0,0x74(%esi)
 804a6f2:	89 c8                	mov    %ecx,%eax
 804a6f4:	f7 ea                	imul   %edx
 804a6f6:	69 45 e0 e8 03 00 00 	imul   $0x3e8,-0x20(%ebp),%eax
 804a6fd:	c1 f9 1f             	sar    $0x1f,%ecx
 804a700:	c1 fa 12             	sar    $0x12,%edx
 804a703:	29 ca                	sub    %ecx,%edx
 804a705:	01 c2                	add    %eax,%edx
 804a707:	89 d8                	mov    %ebx,%eax
 804a709:	89 56 70             	mov    %edx,0x70(%esi)
 804a70c:	89 f2                	mov    %esi,%edx
 804a70e:	e8 cd fb ff ff       	call   804a2e0 <main+0x6c0>
 804a713:	eb 2a                	jmp    804a73f <main+0xb1f>
 804a715:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804a719:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804a720:	8b 10                	mov    (%eax),%edx
 804a722:	8b 78 04             	mov    0x4(%eax),%edi
 804a725:	89 04 24             	mov    %eax,(%esp)
 804a728:	89 53 54             	mov    %edx,0x54(%ebx)
 804a72b:	e8 24 f3 ff ff       	call   8049a54 <free@plt>
 804a730:	89 f1                	mov    %esi,%ecx
 804a732:	89 fa                	mov    %edi,%edx
 804a734:	89 d8                	mov    %ebx,%eax
 804a736:	e8 25 fe ff ff       	call   804a560 <main+0x940>
 804a73b:	85 c0                	test   %eax,%eax
 804a73d:	75 85                	jne    804a6c4 <main+0xaa4>
 804a73f:	8b 43 54             	mov    0x54(%ebx),%eax
 804a742:	85 c0                	test   %eax,%eax
 804a744:	75 da                	jne    804a720 <main+0xb00>
 804a746:	8b 43 64             	mov    0x64(%ebx),%eax
 804a749:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 804a74f:	c7 46 28 04 00 00 00 	movl   $0x4,0x28(%esi)
 804a756:	89 46 04             	mov    %eax,0x4(%esi)
 804a759:	89 30                	mov    %esi,(%eax)
 804a75b:	89 73 64             	mov    %esi,0x64(%ebx)
 804a75e:	e9 61 ff ff ff       	jmp    804a6c4 <main+0xaa4>
 804a763:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804a769:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804a770:	55                   	push   %ebp
 804a771:	89 e5                	mov    %esp,%ebp
 804a773:	83 ec 58             	sub    $0x58,%esp
 804a776:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 804a779:	89 d3                	mov    %edx,%ebx
 804a77b:	89 75 f8             	mov    %esi,-0x8(%ebp)
 804a77e:	89 7d fc             	mov    %edi,-0x4(%ebp)
 804a781:	89 c7                	mov    %eax,%edi
 804a783:	8b 42 2c             	mov    0x2c(%edx),%eax
 804a786:	89 4d cc             	mov    %ecx,-0x34(%ebp)
 804a789:	8b 77 14             	mov    0x14(%edi),%esi
 804a78c:	89 45 d0             	mov    %eax,-0x30(%ebp)
 804a78f:	8b 42 40             	mov    0x40(%edx),%eax
 804a792:	85 c0                	test   %eax,%eax
 804a794:	0f 84 96 00 00 00    	je     804a830 <main+0xc10>
 804a79a:	8b 4a 48             	mov    0x48(%edx),%ecx
 804a79d:	8b 42 44             	mov    0x44(%edx),%eax
 804a7a0:	8b 55 d0             	mov    -0x30(%ebp),%edx
 804a7a3:	39 f2                	cmp    %esi,%edx
 804a7a5:	77 79                	ja     804a820 <main+0xc00>
 804a7a7:	39 ca                	cmp    %ecx,%edx
 804a7a9:	76 58                	jbe    804a803 <main+0xbe3>
 804a7ab:	8b 75 08             	mov    0x8(%ebp),%esi
 804a7ae:	01 ce                	add    %ecx,%esi
 804a7b0:	39 f2                	cmp    %esi,%edx
 804a7b2:	73 07                	jae    804a7bb <main+0xb9b>
 804a7b4:	89 d6                	mov    %edx,%esi
 804a7b6:	29 ce                	sub    %ecx,%esi
 804a7b8:	89 75 08             	mov    %esi,0x8(%ebp)
 804a7bb:	8b 75 cc             	mov    -0x34(%ebp),%esi
 804a7be:	8b 4d 08             	mov    0x8(%ebp),%ecx
 804a7c1:	89 55 c8             	mov    %edx,-0x38(%ebp)
 804a7c4:	89 04 24             	mov    %eax,(%esp)
 804a7c7:	89 74 24 04          	mov    %esi,0x4(%esp)
 804a7cb:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 804a7cf:	e8 a0 ee ff ff       	call   8049674 <write@plt>
 804a7d4:	8b 75 08             	mov    0x8(%ebp),%esi
 804a7d7:	8b 55 c8             	mov    -0x38(%ebp),%edx
 804a7da:	03 73 48             	add    0x48(%ebx),%esi
 804a7dd:	39 f2                	cmp    %esi,%edx
 804a7df:	89 73 48             	mov    %esi,0x48(%ebx)
 804a7e2:	76 1c                	jbe    804a800 <main+0xbe0>
 804a7e4:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 804a7e7:	8b 75 f8             	mov    -0x8(%ebp),%esi
 804a7ea:	8b 7d fc             	mov    -0x4(%ebp),%edi
 804a7ed:	89 ec                	mov    %ebp,%esp
 804a7ef:	5d                   	pop    %ebp
 804a7f0:	c3                   	ret    
 804a7f1:	eb 0d                	jmp    804a800 <main+0xbe0>
 804a7f3:	90                   	nop
 804a7f4:	90                   	nop
 804a7f5:	90                   	nop
 804a7f6:	90                   	nop
 804a7f7:	90                   	nop
 804a7f8:	90                   	nop
 804a7f9:	90                   	nop
 804a7fa:	90                   	nop
 804a7fb:	90                   	nop
 804a7fc:	90                   	nop
 804a7fd:	90                   	nop
 804a7fe:	90                   	nop
 804a7ff:	90                   	nop
 804a800:	8b 43 44             	mov    0x44(%ebx),%eax
 804a803:	89 04 24             	mov    %eax,(%esp)
 804a806:	e8 39 f2 ff ff       	call   8049a44 <close@plt>
 804a80b:	89 da                	mov    %ebx,%edx
 804a80d:	89 f8                	mov    %edi,%eax
 804a80f:	c7 43 44 ff ff ff ff 	movl   $0xffffffff,0x44(%ebx)
 804a816:	e8 95 fe ff ff       	call   804a6b0 <main+0xa90>
 804a81b:	eb c7                	jmp    804a7e4 <main+0xbc4>
 804a81d:	8d 76 00             	lea    0x0(%esi),%esi
 804a820:	89 f2                	mov    %esi,%edx
 804a822:	eb 83                	jmp    804a7a7 <main+0xb87>
 804a824:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804a82a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 804a830:	8b 47 1c             	mov    0x1c(%edi),%eax
 804a833:	89 04 24             	mov    %eax,(%esp)
 804a836:	e8 89 f1 ff ff       	call   80499c4 <strlen@plt>
 804a83b:	83 c0 20             	add    $0x20,%eax
 804a83e:	89 04 24             	mov    %eax,(%esp)
 804a841:	e8 6e ed ff ff       	call   80495b4 <malloc@plt>
 804a846:	85 c0                	test   %eax,%eax
 804a848:	89 c1                	mov    %eax,%ecx
 804a84a:	0f 84 e0 00 00 00    	je     804a930 <main+0xd10>
 804a850:	8d 45 e0             	lea    -0x20(%ebp),%eax
 804a853:	89 4d c8             	mov    %ecx,-0x38(%ebp)
 804a856:	89 44 24 04          	mov    %eax,0x4(%esp)
 804a85a:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 804a861:	e8 1e ec ff ff       	call   8049484 <clock_gettime@plt>
 804a866:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 804a869:	ba 83 de 1b 43       	mov    $0x431bde83,%edx
 804a86e:	c7 44 24 08 e8 03 00 	movl   $0x3e8,0x8(%esp)
 804a875:	00 
 804a876:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 804a87d:	00 
 804a87e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 804a885:	00 
 804a886:	f7 ea                	imul   %edx
 804a888:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 804a88b:	c1 fa 12             	sar    $0x12,%edx
 804a88e:	c1 f8 1f             	sar    $0x1f,%eax
 804a891:	29 c2                	sub    %eax,%edx
 804a893:	69 45 e0 e8 03 00 00 	imul   $0x3e8,-0x20(%ebp),%eax
 804a89a:	01 c2                	add    %eax,%edx
 804a89c:	89 14 24             	mov    %edx,(%esp)
 804a89f:	e8 6c 9f 00 00       	call   8054810 <__udivdi3>
 804a8a4:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 804a8a7:	c7 44 24 04 e8 4b 05 	movl   $0x8054be8,0x4(%esp)
 804a8ae:	08 
 804a8af:	89 0c 24             	mov    %ecx,(%esp)
 804a8b2:	89 44 24 10          	mov    %eax,0x10(%esp)
 804a8b6:	8b 43 1c             	mov    0x1c(%ebx),%eax
 804a8b9:	89 54 24 14          	mov    %edx,0x14(%esp)
 804a8bd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 804a8c1:	8b 47 1c             	mov    0x1c(%edi),%eax
 804a8c4:	89 44 24 08          	mov    %eax,0x8(%esp)
 804a8c8:	e8 37 f0 ff ff       	call   8049904 <sprintf@plt>
 804a8cd:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 804a8d0:	c7 44 24 04 e9 01 00 	movl   $0x1e9,0x4(%esp)
 804a8d7:	00 
 804a8d8:	89 0c 24             	mov    %ecx,(%esp)
 804a8db:	e8 44 f1 ff ff       	call   8049a24 <mkdir@plt>
 804a8e0:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 804a8e3:	c7 44 24 04 f5 4b 05 	movl   $0x8054bf5,0x4(%esp)
 804a8ea:	08 
 804a8eb:	89 4b 3c             	mov    %ecx,0x3c(%ebx)
 804a8ee:	89 0c 24             	mov    %ecx,(%esp)
 804a8f1:	e8 3a 9e 00 00       	call   8054730 <tempnam>
 804a8f6:	85 c0                	test   %eax,%eax
 804a8f8:	89 43 40             	mov    %eax,0x40(%ebx)
 804a8fb:	74 33                	je     804a930 <main+0xd10>
 804a8fd:	c7 44 24 08 a4 01 00 	movl   $0x1a4,0x8(%esp)
 804a904:	00 
 804a905:	c7 44 24 04 01 05 00 	movl   $0x501,0x4(%esp)
 804a90c:	00 
 804a90d:	89 04 24             	mov    %eax,(%esp)
 804a910:	e8 bf f0 ff ff       	call   80499d4 <open@plt>
 804a915:	83 f8 ff             	cmp    $0xffffffff,%eax
 804a918:	89 43 44             	mov    %eax,0x44(%ebx)
 804a91b:	74 13                	je     804a930 <main+0xd10>
 804a91d:	c7 43 48 00 00 00 00 	movl   $0x0,0x48(%ebx)
 804a924:	31 c9                	xor    %ecx,%ecx
 804a926:	e9 75 fe ff ff       	jmp    804a7a0 <main+0xb80>
 804a92b:	90                   	nop
 804a92c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804a930:	89 da                	mov    %ebx,%edx
 804a932:	89 f8                	mov    %edi,%eax
 804a934:	e8 17 fa ff ff       	call   804a350 <main+0x730>
 804a939:	e9 a6 fe ff ff       	jmp    804a7e4 <main+0xbc4>
 804a93e:	66 90                	xchg   %ax,%ax
 804a940:	55                   	push   %ebp
 804a941:	89 e5                	mov    %esp,%ebp
 804a943:	57                   	push   %edi
 804a944:	56                   	push   %esi
 804a945:	89 ce                	mov    %ecx,%esi
 804a947:	53                   	push   %ebx
 804a948:	83 ec 2c             	sub    $0x2c,%esp
 804a94b:	85 c9                	test   %ecx,%ecx
 804a94d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 804a950:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 804a953:	0f 84 cf 00 00 00    	je     804aa28 <main+0xe08>
 804a959:	8b 42 34             	mov    0x34(%edx),%eax
 804a95c:	83 c2 2c             	add    $0x2c,%edx
 804a95f:	31 db                	xor    %ebx,%ebx
 804a961:	89 55 dc             	mov    %edx,-0x24(%ebp)
 804a964:	eb 15                	jmp    804a97b <main+0xd5b>
 804a966:	8d 76 00             	lea    0x0(%esi),%esi
 804a969:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804a970:	83 c3 01             	add    $0x1,%ebx
 804a973:	39 de                	cmp    %ebx,%esi
 804a975:	0f 86 a5 00 00 00    	jbe    804aa20 <main+0xe00>
 804a97b:	89 da                	mov    %ebx,%edx
 804a97d:	01 c2                	add    %eax,%edx
 804a97f:	74 ef                	je     804a970 <main+0xd50>
 804a981:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 804a984:	8b 4f 30             	mov    0x30(%edi),%ecx
 804a987:	8d 7c 11 ff          	lea    -0x1(%ecx,%edx,1),%edi
 804a98b:	80 3f 0d             	cmpb   $0xd,(%edi)
 804a98e:	75 e0                	jne    804a970 <main+0xd50>
 804a990:	80 3c 11 0a          	cmpb   $0xa,(%ecx,%edx,1)
 804a994:	75 da                	jne    804a970 <main+0xd50>
 804a996:	c6 07 00             	movb   $0x0,(%edi)
 804a999:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 804a99c:	8b 42 34             	mov    0x34(%edx),%eax
 804a99f:	89 d1                	mov    %edx,%ecx
 804a9a1:	8b 52 30             	mov    0x30(%edx),%edx
 804a9a4:	01 da                	add    %ebx,%edx
 804a9a6:	c6 04 02 00          	movb   $0x0,(%edx,%eax,1)
 804a9aa:	8b 41 34             	mov    0x34(%ecx),%eax
 804a9ad:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 804a9b0:	83 fa 02             	cmp    $0x2,%edx
 804a9b3:	0f 86 c7 00 00 00    	jbe    804aa80 <main+0xe60>
 804a9b9:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 804a9bc:	8b 4f 30             	mov    0x30(%edi),%ecx
 804a9bf:	80 7c 11 fd 00       	cmpb   $0x0,-0x3(%ecx,%edx,1)
 804a9c4:	74 6a                	je     804aa30 <main+0xe10>
 804a9c6:	83 ea 02             	sub    $0x2,%edx
 804a9c9:	89 54 24 08          	mov    %edx,0x8(%esp)
 804a9cd:	89 0c 24             	mov    %ecx,(%esp)
 804a9d0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 804a9d7:	00 
 804a9d8:	e8 23 44 00 00       	call   804ee00 <main+0x51e0>
 804a9dd:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 804a9e4:	00 
 804a9e5:	c7 44 24 04 fa 4b 05 	movl   $0x8054bfa,0x4(%esp)
 804a9ec:	08 
 804a9ed:	89 c7                	mov    %eax,%edi
 804a9ef:	8d 40 01             	lea    0x1(%eax),%eax
 804a9f2:	89 04 24             	mov    %eax,(%esp)
 804a9f5:	e8 1a ec ff ff       	call   8049614 <strncasecmp@plt>
 804a9fa:	85 c0                	test   %eax,%eax
 804a9fc:	0f 84 8e 00 00 00    	je     804aa90 <main+0xe70>
 804aa02:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 804aa05:	83 c3 01             	add    $0x1,%ebx
 804aa08:	39 de                	cmp    %ebx,%esi
 804aa0a:	8b 42 34             	mov    0x34(%edx),%eax
 804aa0d:	0f 87 68 ff ff ff    	ja     804a97b <main+0xd5b>
 804aa13:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804aa19:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804aa20:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 804aa23:	01 f0                	add    %esi,%eax
 804aa25:	89 42 34             	mov    %eax,0x34(%edx)
 804aa28:	83 c4 2c             	add    $0x2c,%esp
 804aa2b:	5b                   	pop    %ebx
 804aa2c:	5e                   	pop    %esi
 804aa2d:	5f                   	pop    %edi
 804aa2e:	5d                   	pop    %ebp
 804aa2f:	c3                   	ret    
 804aa30:	80 7c 11 fe 00       	cmpb   $0x0,-0x2(%ecx,%edx,1)
 804aa35:	75 8f                	jne    804a9c6 <main+0xda6>
 804aa37:	39 de                	cmp    %ebx,%esi
 804aa39:	76 e5                	jbe    804aa20 <main+0xe00>
 804aa3b:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 804aa3e:	83 c2 01             	add    $0x1,%edx
 804aa41:	8b 79 2c             	mov    0x2c(%ecx),%edi
 804aa44:	89 51 34             	mov    %edx,0x34(%ecx)
 804aa47:	85 ff                	test   %edi,%edi
 804aa49:	7e 76                	jle    804aac1 <main+0xea1>
 804aa4b:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 804aa4e:	f7 d3                	not    %ebx
 804aa50:	8d 34 33             	lea    (%ebx,%esi,1),%esi
 804aa53:	c7 41 28 03 00 00 00 	movl   $0x3,0x28(%ecx)
 804aa5a:	89 d1                	mov    %edx,%ecx
 804aa5c:	03 4f 30             	add    0x30(%edi),%ecx
 804aa5f:	89 fa                	mov    %edi,%edx
 804aa61:	89 34 24             	mov    %esi,(%esp)
 804aa64:	8b 45 e0             	mov    -0x20(%ebp),%eax
 804aa67:	e8 04 fd ff ff       	call   804a770 <main+0xb50>
 804aa6c:	83 c4 2c             	add    $0x2c,%esp
 804aa6f:	5b                   	pop    %ebx
 804aa70:	5e                   	pop    %esi
 804aa71:	5f                   	pop    %edi
 804aa72:	5d                   	pop    %ebp
 804aa73:	c3                   	ret    
 804aa74:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804aa7a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 804aa80:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 804aa83:	8b 4f 30             	mov    0x30(%edi),%ecx
 804aa86:	e9 3b ff ff ff       	jmp    804a9c6 <main+0xda6>
 804aa8b:	90                   	nop
 804aa8c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804aa90:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 804aa93:	83 c7 11             	add    $0x11,%edi
 804aa96:	c7 44 24 04 0b 4c 05 	movl   $0x8054c0b,0x4(%esp)
 804aa9d:	08 
 804aa9e:	89 3c 24             	mov    %edi,(%esp)
 804aaa1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 804aaa5:	e8 2a ed ff ff       	call   80497d4 <sscanf@plt>
 804aaaa:	83 f8 01             	cmp    $0x1,%eax
 804aaad:	74 24                	je     804aad3 <main+0xeb3>
 804aaaf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 804aab2:	c7 40 2c ff ff ff ff 	movl   $0xffffffff,0x2c(%eax)
 804aab9:	8b 40 34             	mov    0x34(%eax),%eax
 804aabc:	e9 af fe ff ff       	jmp    804a970 <main+0xd50>
 804aac1:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 804aac4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 804aac7:	83 c4 2c             	add    $0x2c,%esp
 804aaca:	5b                   	pop    %ebx
 804aacb:	5e                   	pop    %esi
 804aacc:	5f                   	pop    %edi
 804aacd:	5d                   	pop    %ebp
 804aace:	e9 dd fb ff ff       	jmp    804a6b0 <main+0xa90>
 804aad3:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 804aad6:	8b 47 34             	mov    0x34(%edi),%eax
 804aad9:	e9 92 fe ff ff       	jmp    804a970 <main+0xd50>
 804aade:	66 90                	xchg   %ax,%ax
 804aae0:	55                   	push   %ebp
 804aae1:	89 e5                	mov    %esp,%ebp
 804aae3:	57                   	push   %edi
 804aae4:	56                   	push   %esi
 804aae5:	89 c6                	mov    %eax,%esi
 804aae7:	53                   	push   %ebx
 804aae8:	89 d3                	mov    %edx,%ebx
 804aaea:	83 ec 4c             	sub    $0x4c,%esp
 804aaed:	8b 52 28             	mov    0x28(%edx),%edx
 804aaf0:	85 d2                	test   %edx,%edx
 804aaf2:	0f 84 f8 00 00 00    	je     804abf0 <main+0xfd0>
 804aaf8:	c7 45 d0 04 00 00 00 	movl   $0x4,-0x30(%ebp)
 804aaff:	8b 40 04             	mov    0x4(%eax),%eax
 804ab02:	8d 7d d0             	lea    -0x30(%ebp),%edi
 804ab05:	66 c7 45 de ff ff    	movw   $0xffff,-0x22(%ebp)
 804ab0b:	89 5d d8             	mov    %ebx,-0x28(%ebp)
 804ab0e:	66 c7 45 dc 01 00    	movw   $0x1,-0x24(%ebp)
 804ab14:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 804ab17:	eb 1b                	jmp    804ab34 <main+0xf14>
 804ab19:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804ab20:	89 f0                	mov    %esi,%eax
 804ab22:	89 da                	mov    %ebx,%edx
 804ab24:	e8 27 f8 ff ff       	call   804a350 <main+0x730>
 804ab29:	8b 43 28             	mov    0x28(%ebx),%eax
 804ab2c:	85 c0                	test   %eax,%eax
 804ab2e:	0f 84 bc 00 00 00    	je     804abf0 <main+0xfd0>
 804ab34:	8b 43 24             	mov    0x24(%ebx),%eax
 804ab37:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 804ab3b:	c7 44 24 08 00 00 00 	movl   $0x50000000,0x8(%esp)
 804ab42:	50 
 804ab43:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 804ab4a:	00 
 804ab4b:	89 04 24             	mov    %eax,(%esp)
 804ab4e:	e8 11 ed ff ff       	call   8049864 <ionotify@plt>
 804ab53:	85 c0                	test   %eax,%eax
 804ab55:	0f 84 95 00 00 00    	je     804abf0 <main+0xfd0>
 804ab5b:	3d 00 00 00 10       	cmp    $0x10000000,%eax
 804ab60:	75 be                	jne    804ab20 <main+0xf00>
 804ab62:	8b 43 28             	mov    0x28(%ebx),%eax
 804ab65:	83 f8 02             	cmp    $0x2,%eax
 804ab68:	0f 84 e2 00 00 00    	je     804ac50 <main+0x1030>
 804ab6e:	83 f8 03             	cmp    $0x3,%eax
 804ab71:	0f 84 89 00 00 00    	je     804ac00 <main+0xfe0>
 804ab77:	83 f8 01             	cmp    $0x1,%eax
 804ab7a:	0f 84 20 01 00 00    	je     804aca0 <main+0x1080>
 804ab80:	8b 43 24             	mov    0x24(%ebx),%eax
 804ab83:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 804ab8a:	00 
 804ab8b:	c7 44 24 08 00 10 00 	movl   $0x1000,0x8(%esp)
 804ab92:	00 
 804ab93:	c7 44 24 04 00 7a 05 	movl   $0x8057a00,0x4(%esp)
 804ab9a:	08 
 804ab9b:	89 04 24             	mov    %eax,(%esp)
 804ab9e:	e8 71 ec ff ff       	call   8049814 <recv@plt>
 804aba3:	85 c0                	test   %eax,%eax
 804aba5:	0f 8e 75 ff ff ff    	jle    804ab20 <main+0xf00>
 804abab:	8d 45 e0             	lea    -0x20(%ebp),%eax
 804abae:	89 44 24 04          	mov    %eax,0x4(%esp)
 804abb2:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 804abb9:	e8 c6 e8 ff ff       	call   8049484 <clock_gettime@plt>
 804abbe:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 804abc1:	b8 83 de 1b 43       	mov    $0x431bde83,%eax
 804abc6:	c7 43 6c 00 00 00 00 	movl   $0x0,0x6c(%ebx)
 804abcd:	f7 e9                	imul   %ecx
 804abcf:	69 45 e0 e8 03 00 00 	imul   $0x3e8,-0x20(%ebp),%eax
 804abd6:	c1 f9 1f             	sar    $0x1f,%ecx
 804abd9:	c1 fa 12             	sar    $0x12,%edx
 804abdc:	29 ca                	sub    %ecx,%edx
 804abde:	01 c2                	add    %eax,%edx
 804abe0:	8b 43 28             	mov    0x28(%ebx),%eax
 804abe3:	89 53 68             	mov    %edx,0x68(%ebx)
 804abe6:	85 c0                	test   %eax,%eax
 804abe8:	0f 85 46 ff ff ff    	jne    804ab34 <main+0xf14>
 804abee:	66 90                	xchg   %ax,%ax
 804abf0:	83 c4 4c             	add    $0x4c,%esp
 804abf3:	5b                   	pop    %ebx
 804abf4:	5e                   	pop    %esi
 804abf5:	5f                   	pop    %edi
 804abf6:	5d                   	pop    %ebp
 804abf7:	c3                   	ret    
 804abf8:	90                   	nop
 804abf9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804ac00:	8b 43 24             	mov    0x24(%ebx),%eax
 804ac03:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 804ac0a:	00 
 804ac0b:	c7 44 24 08 00 10 00 	movl   $0x1000,0x8(%esp)
 804ac12:	00 
 804ac13:	c7 44 24 04 00 7a 05 	movl   $0x8057a00,0x4(%esp)
 804ac1a:	08 
 804ac1b:	89 04 24             	mov    %eax,(%esp)
 804ac1e:	e8 f1 eb ff ff       	call   8049814 <recv@plt>
 804ac23:	85 c0                	test   %eax,%eax
 804ac25:	0f 8e f5 fe ff ff    	jle    804ab20 <main+0xf00>
 804ac2b:	89 04 24             	mov    %eax,(%esp)
 804ac2e:	b9 00 7a 05 08       	mov    $0x8057a00,%ecx
 804ac33:	89 da                	mov    %ebx,%edx
 804ac35:	89 f0                	mov    %esi,%eax
 804ac37:	e8 34 fb ff ff       	call   804a770 <main+0xb50>
 804ac3c:	e9 6a ff ff ff       	jmp    804abab <main+0xf8b>
 804ac41:	eb 0d                	jmp    804ac50 <main+0x1030>
 804ac43:	90                   	nop
 804ac44:	90                   	nop
 804ac45:	90                   	nop
 804ac46:	90                   	nop
 804ac47:	90                   	nop
 804ac48:	90                   	nop
 804ac49:	90                   	nop
 804ac4a:	90                   	nop
 804ac4b:	90                   	nop
 804ac4c:	90                   	nop
 804ac4d:	90                   	nop
 804ac4e:	90                   	nop
 804ac4f:	90                   	nop
 804ac50:	89 da                	mov    %ebx,%edx
 804ac52:	89 f0                	mov    %esi,%eax
 804ac54:	e8 77 f7 ff ff       	call   804a3d0 <main+0x7b0>
 804ac59:	85 c0                	test   %eax,%eax
 804ac5b:	0f 84 1f ff ff ff    	je     804ab80 <main+0xf60>
 804ac61:	8b 53 34             	mov    0x34(%ebx),%edx
 804ac64:	8b 43 38             	mov    0x38(%ebx),%eax
 804ac67:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 804ac6e:	00 
 804ac6f:	29 d0                	sub    %edx,%eax
 804ac71:	89 44 24 08          	mov    %eax,0x8(%esp)
 804ac75:	8b 43 24             	mov    0x24(%ebx),%eax
 804ac78:	03 53 30             	add    0x30(%ebx),%edx
 804ac7b:	89 04 24             	mov    %eax,(%esp)
 804ac7e:	89 54 24 04          	mov    %edx,0x4(%esp)
 804ac82:	e8 8d eb ff ff       	call   8049814 <recv@plt>
 804ac87:	85 c0                	test   %eax,%eax
 804ac89:	0f 8e 91 fe ff ff    	jle    804ab20 <main+0xf00>
 804ac8f:	89 c1                	mov    %eax,%ecx
 804ac91:	89 da                	mov    %ebx,%edx
 804ac93:	89 f0                	mov    %esi,%eax
 804ac95:	e8 a6 fc ff ff       	call   804a940 <main+0xd20>
 804ac9a:	e9 0c ff ff ff       	jmp    804abab <main+0xf8b>
 804ac9f:	90                   	nop
 804aca0:	89 da                	mov    %ebx,%edx
 804aca2:	89 f0                	mov    %esi,%eax
 804aca4:	e8 27 f7 ff ff       	call   804a3d0 <main+0x7b0>
 804aca9:	85 c0                	test   %eax,%eax
 804acab:	0f 84 cf fe ff ff    	je     804ab80 <main+0xf60>
 804acb1:	8b 53 34             	mov    0x34(%ebx),%edx
 804acb4:	8b 43 38             	mov    0x38(%ebx),%eax
 804acb7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 804acbe:	00 
 804acbf:	29 d0                	sub    %edx,%eax
 804acc1:	89 44 24 08          	mov    %eax,0x8(%esp)
 804acc5:	8b 43 24             	mov    0x24(%ebx),%eax
 804acc8:	03 53 30             	add    0x30(%ebx),%edx
 804accb:	89 04 24             	mov    %eax,(%esp)
 804acce:	89 54 24 04          	mov    %edx,0x4(%esp)
 804acd2:	e8 3d eb ff ff       	call   8049814 <recv@plt>
 804acd7:	85 c0                	test   %eax,%eax
 804acd9:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 804acdc:	0f 8e 3e fe ff ff    	jle    804ab20 <main+0xf00>
 804ace2:	8b 43 34             	mov    0x34(%ebx),%eax
 804ace5:	31 d2                	xor    %edx,%edx
 804ace7:	89 75 bc             	mov    %esi,-0x44(%ebp)
 804acea:	89 45 c0             	mov    %eax,-0x40(%ebp)
 804aced:	eb 0c                	jmp    804acfb <main+0x10db>
 804acef:	90                   	nop
 804acf0:	83 c2 01             	add    $0x1,%edx
 804acf3:	83 c0 01             	add    $0x1,%eax
 804acf6:	39 55 c4             	cmp    %edx,-0x3c(%ebp)
 804acf9:	76 54                	jbe    804ad4f <main+0x112f>
 804acfb:	85 c0                	test   %eax,%eax
 804acfd:	74 f1                	je     804acf0 <main+0x10d0>
 804acff:	8b 73 30             	mov    0x30(%ebx),%esi
 804ad02:	8d 4c 06 ff          	lea    -0x1(%esi,%eax,1),%ecx
 804ad06:	80 39 0d             	cmpb   $0xd,(%ecx)
 804ad09:	75 e5                	jne    804acf0 <main+0x10d0>
 804ad0b:	80 3c 06 0a          	cmpb   $0xa,(%esi,%eax,1)
 804ad0f:	75 df                	jne    804acf0 <main+0x10d0>
 804ad11:	8b 75 bc             	mov    -0x44(%ebp),%esi
 804ad14:	c6 01 00             	movb   $0x0,(%ecx)
 804ad17:	8b 43 30             	mov    0x30(%ebx),%eax
 804ad1a:	8b 4b 34             	mov    0x34(%ebx),%ecx
 804ad1d:	01 d0                	add    %edx,%eax
 804ad1f:	c6 04 08 00          	movb   $0x0,(%eax,%ecx,1)
 804ad23:	39 55 c4             	cmp    %edx,-0x3c(%ebp)
 804ad26:	76 38                	jbe    804ad60 <main+0x1140>
 804ad28:	8b 43 34             	mov    0x34(%ebx),%eax
 804ad2b:	c7 43 28 02 00 00 00 	movl   $0x2,0x28(%ebx)
 804ad32:	8d 44 02 01          	lea    0x1(%edx,%eax,1),%eax
 804ad36:	f7 d2                	not    %edx
 804ad38:	89 43 34             	mov    %eax,0x34(%ebx)
 804ad3b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 804ad3e:	8d 0c 02             	lea    (%edx,%eax,1),%ecx
 804ad41:	89 da                	mov    %ebx,%edx
 804ad43:	89 f0                	mov    %esi,%eax
 804ad45:	e8 f6 fb ff ff       	call   804a940 <main+0xd20>
 804ad4a:	e9 5c fe ff ff       	jmp    804abab <main+0xf8b>
 804ad4f:	8b 75 bc             	mov    -0x44(%ebp),%esi
 804ad52:	8b 45 c0             	mov    -0x40(%ebp),%eax
 804ad55:	03 45 c4             	add    -0x3c(%ebp),%eax
 804ad58:	89 43 34             	mov    %eax,0x34(%ebx)
 804ad5b:	e9 4b fe ff ff       	jmp    804abab <main+0xf8b>
 804ad60:	8b 43 34             	mov    0x34(%ebx),%eax
 804ad63:	89 45 c0             	mov    %eax,-0x40(%ebp)
 804ad66:	eb ea                	jmp    804ad52 <main+0x1132>
 804ad68:	90                   	nop
 804ad69:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804ad70:	55                   	push   %ebp
 804ad71:	89 e5                	mov    %esp,%ebp
 804ad73:	57                   	push   %edi
 804ad74:	56                   	push   %esi
 804ad75:	89 c6                	mov    %eax,%esi
 804ad77:	53                   	push   %ebx
 804ad78:	83 ec 6c             	sub    $0x6c,%esp
 804ad7b:	c7 45 cc 04 00 00 00 	movl   $0x4,-0x34(%ebp)
 804ad82:	8b 40 04             	mov    0x4(%eax),%eax
 804ad85:	8d 7d cc             	lea    -0x34(%ebp),%edi
 804ad88:	66 c7 45 da ff ff    	movw   $0xffff,-0x26(%ebp)
 804ad8e:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 804ad95:	66 c7 45 d8 00 00    	movw   $0x0,-0x28(%ebp)
 804ad9b:	89 45 d0             	mov    %eax,-0x30(%ebp)
 804ad9e:	66 90                	xchg   %ax,%ax
 804ada0:	8b 46 08             	mov    0x8(%esi),%eax
 804ada3:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 804ada7:	c7 44 24 08 00 00 00 	movl   $0x10000000,0x8(%esp)
 804adae:	10 
 804adaf:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 804adb6:	00 
 804adb7:	89 04 24             	mov    %eax,(%esp)
 804adba:	e8 a5 ea ff ff       	call   8049864 <ionotify@plt>
 804adbf:	3d 00 00 00 10       	cmp    $0x10000000,%eax
 804adc4:	0f 85 06 01 00 00    	jne    804aed0 <main+0x12b0>
 804adca:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 804adcd:	89 44 24 08          	mov    %eax,0x8(%esp)
 804add1:	8d 45 b0             	lea    -0x50(%ebp),%eax
 804add4:	89 44 24 04          	mov    %eax,0x4(%esp)
 804add8:	8b 46 08             	mov    0x8(%esi),%eax
 804addb:	c7 45 e4 1c 00 00 00 	movl   $0x1c,-0x1c(%ebp)
 804ade2:	89 04 24             	mov    %eax,(%esp)
 804ade5:	e8 8a e9 ff ff       	call   8049774 <accept@plt>
 804adea:	89 c2                	mov    %eax,%edx
 804adec:	8b 46 10             	mov    0x10(%esi),%eax
 804adef:	3b 46 0c             	cmp    0xc(%esi),%eax
 804adf2:	0f 83 c8 00 00 00    	jae    804aec0 <main+0x12a0>
 804adf8:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 804adfb:	c7 44 24 04 80 00 00 	movl   $0x80,0x4(%esp)
 804ae02:	00 
 804ae03:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 804ae0a:	e8 55 e8 ff ff       	call   8049664 <calloc@plt>
 804ae0f:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 804ae12:	85 c0                	test   %eax,%eax
 804ae14:	89 c3                	mov    %eax,%ebx
 804ae16:	0f 84 a4 00 00 00    	je     804aec0 <main+0x12a0>
 804ae1c:	8b 45 b0             	mov    -0x50(%ebp),%eax
 804ae1f:	83 46 10 01          	addl   $0x1,0x10(%esi)
 804ae23:	89 53 24             	mov    %edx,0x24(%ebx)
 804ae26:	89 43 08             	mov    %eax,0x8(%ebx)
 804ae29:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 804ae2c:	c7 43 28 01 00 00 00 	movl   $0x1,0x28(%ebx)
 804ae33:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 804ae3a:	89 43 0c             	mov    %eax,0xc(%ebx)
 804ae3d:	8b 45 b8             	mov    -0x48(%ebp),%eax
 804ae40:	89 43 10             	mov    %eax,0x10(%ebx)
 804ae43:	8b 45 bc             	mov    -0x44(%ebp),%eax
 804ae46:	89 43 14             	mov    %eax,0x14(%ebx)
 804ae49:	8b 45 c0             	mov    -0x40(%ebp),%eax
 804ae4c:	89 43 18             	mov    %eax,0x18(%ebx)
 804ae4f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 804ae52:	89 43 1c             	mov    %eax,0x1c(%ebx)
 804ae55:	8b 45 c8             	mov    -0x38(%ebp),%eax
 804ae58:	89 43 20             	mov    %eax,0x20(%ebx)
 804ae5b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 804ae5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 804ae62:	e8 1d e6 ff ff       	call   8049484 <clock_gettime@plt>
 804ae67:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 804ae6a:	b8 83 de 1b 43       	mov    $0x431bde83,%eax
 804ae6f:	c7 03 00 00 00 00    	movl   $0x0,(%ebx)
 804ae75:	c7 43 64 00 00 00 00 	movl   $0x0,0x64(%ebx)
 804ae7c:	c7 43 2c ff ff ff ff 	movl   $0xffffffff,0x2c(%ebx)
 804ae83:	f7 e9                	imul   %ecx
 804ae85:	69 45 dc e8 03 00 00 	imul   $0x3e8,-0x24(%ebp),%eax
 804ae8c:	c1 f9 1f             	sar    $0x1f,%ecx
 804ae8f:	c7 43 44 ff ff ff ff 	movl   $0xffffffff,0x44(%ebx)
 804ae96:	c1 fa 12             	sar    $0x12,%edx
 804ae99:	29 ca                	sub    %ecx,%edx
 804ae9b:	01 c2                	add    %eax,%edx
 804ae9d:	8b 46 5c             	mov    0x5c(%esi),%eax
 804aea0:	89 53 60             	mov    %edx,0x60(%ebx)
 804aea3:	89 da                	mov    %ebx,%edx
 804aea5:	89 5e 5c             	mov    %ebx,0x5c(%esi)
 804aea8:	89 43 04             	mov    %eax,0x4(%ebx)
 804aeab:	89 18                	mov    %ebx,(%eax)
 804aead:	89 f0                	mov    %esi,%eax
 804aeaf:	e8 2c fc ff ff       	call   804aae0 <main+0xec0>
 804aeb4:	e9 e7 fe ff ff       	jmp    804ada0 <main+0x1180>
 804aeb9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804aec0:	89 14 24             	mov    %edx,(%esp)
 804aec3:	e8 7c eb ff ff       	call   8049a44 <close@plt>
 804aec8:	e9 d3 fe ff ff       	jmp    804ada0 <main+0x1180>
 804aecd:	8d 76 00             	lea    0x0(%esi),%esi
 804aed0:	83 c4 6c             	add    $0x6c,%esp
 804aed3:	5b                   	pop    %ebx
 804aed4:	5e                   	pop    %esi
 804aed5:	5f                   	pop    %edi
 804aed6:	5d                   	pop    %ebp
 804aed7:	c3                   	ret    
 804aed8:	90                   	nop
 804aed9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804aee0:	55                   	push   %ebp
 804aee1:	89 e5                	mov    %esp,%ebp
 804aee3:	57                   	push   %edi
 804aee4:	56                   	push   %esi
 804aee5:	53                   	push   %ebx
 804aee6:	81 ec 7c 02 00 00    	sub    $0x27c,%esp
 804aeec:	c7 04 24 a8 00 00 00 	movl   $0xa8,(%esp)
 804aef3:	8d b5 dc fd ff ff    	lea    -0x224(%ebp),%esi
 804aef9:	e8 b6 e6 ff ff       	call   80495b4 <malloc@plt>
 804aefe:	89 f7                	mov    %esi,%edi
 804af00:	b9 5e 00 00 00       	mov    $0x5e,%ecx
 804af05:	89 c3                	mov    %eax,%ebx
 804af07:	31 c0                	xor    %eax,%eax
 804af09:	f3 ab                	rep stos %eax,%es:(%edi)
 804af0b:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 804af12:	e8 7d e9 ff ff       	call   8049894 <ChannelCreate@plt>
 804af17:	83 f8 ff             	cmp    $0xffffffff,%eax
 804af1a:	89 c7                	mov    %eax,%edi
 804af1c:	0f 84 0e 07 00 00    	je     804b630 <main+0x1a10>
 804af22:	89 85 dc fd ff ff    	mov    %eax,-0x224(%ebp)
 804af28:	e8 17 e6 ff ff       	call   8049544 <getpid@plt>
 804af2d:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 804af34:	00 
 804af35:	c7 44 24 0c 00 00 00 	movl   $0x40000000,0xc(%esp)
 804af3c:	40 
 804af3d:	89 7c 24 08          	mov    %edi,0x8(%esp)
 804af41:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 804af48:	89 44 24 04          	mov    %eax,0x4(%esp)
 804af4c:	e8 63 e8 ff ff       	call   80497b4 <ConnectAttach@plt>
 804af51:	83 f8 ff             	cmp    $0xffffffff,%eax
 804af54:	0f 84 d6 06 00 00    	je     804b630 <main+0x1a10>
 804af5a:	89 85 e0 fd ff ff    	mov    %eax,-0x220(%ebp)
 804af60:	8b 45 0c             	mov    0xc(%ebp),%eax
 804af63:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 804af6a:	00 
 804af6b:	c7 44 24 0c 00 00 00 	movl   $0x40000000,0xc(%esp)
 804af72:	40 
 804af73:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 804af7a:	89 44 24 08          	mov    %eax,0x8(%esp)
 804af7e:	8b 45 08             	mov    0x8(%ebp),%eax
 804af81:	89 44 24 04          	mov    %eax,0x4(%esp)
 804af85:	e8 2a e8 ff ff       	call   80497b4 <ConnectAttach@plt>
 804af8a:	83 f8 ff             	cmp    $0xffffffff,%eax
 804af8d:	89 c7                	mov    %eax,%edi
 804af8f:	0f 84 9b 06 00 00    	je     804b630 <main+0x1a10>
 804af95:	8b 95 dc fd ff ff    	mov    -0x224(%ebp),%edx
 804af9b:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 804afa2:	89 95 ac fd ff ff    	mov    %edx,-0x254(%ebp)
 804afa8:	e8 e7 e7 ff ff       	call   8049794 <getprio@plt>
 804afad:	8b 95 ac fd ff ff    	mov    -0x254(%ebp),%edx
 804afb3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 804afba:	00 
 804afbb:	89 3c 24             	mov    %edi,(%esp)
 804afbe:	89 54 24 0c          	mov    %edx,0xc(%esp)
 804afc2:	89 44 24 04          	mov    %eax,0x4(%esp)
 804afc6:	e8 79 e6 ff ff       	call   8049644 <MsgSendPulse@plt>
 804afcb:	83 f8 ff             	cmp    $0xffffffff,%eax
 804afce:	0f 84 5c 06 00 00    	je     804b630 <main+0x1a10>
 804afd4:	89 3c 24             	mov    %edi,(%esp)
 804afd7:	e8 d8 e6 ff ff       	call   80496b4 <ConnectDetach@plt>
 804afdc:	a1 3c 8e 05 08       	mov    0x8058e3c,%eax
 804afe1:	89 44 24 08          	mov    %eax,0x8(%esp)
 804afe5:	a1 44 8e 05 08       	mov    0x8058e44,%eax
 804afea:	89 44 24 04          	mov    %eax,0x4(%esp)
 804afee:	8d 85 10 fe ff ff    	lea    -0x1f0(%ebp),%eax
 804aff4:	89 04 24             	mov    %eax,(%esp)
 804aff7:	e8 04 2f 00 00       	call   804df00 <main+0x42e0>
 804affc:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 804b002:	89 85 38 fe ff ff    	mov    %eax,-0x1c8(%ebp)
 804b008:	8d 85 44 fe ff ff    	lea    -0x1bc(%ebp),%eax
 804b00e:	89 85 48 fe ff ff    	mov    %eax,-0x1b8(%ebp)
 804b014:	8d 85 4c fe ff ff    	lea    -0x1b4(%ebp),%eax
 804b01a:	89 85 50 fe ff ff    	mov    %eax,-0x1b0(%ebp)
 804b020:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804b025:	8d 95 3c fe ff ff    	lea    -0x1c4(%ebp),%edx
 804b02b:	89 95 40 fe ff ff    	mov    %edx,-0x1c0(%ebp)
 804b031:	c7 85 30 fe ff ff 00 	movl   $0x0,-0x1d0(%ebp)
 804b038:	00 00 00 
 804b03b:	c7 85 34 fe ff ff 00 	movl   $0x0,-0x1cc(%ebp)
 804b042:	00 00 00 
 804b045:	c7 85 3c fe ff ff 00 	movl   $0x0,-0x1c4(%ebp)
 804b04c:	00 00 00 
 804b04f:	c7 85 44 fe ff ff 00 	movl   $0x0,-0x1bc(%ebp)
 804b056:	00 00 00 
 804b059:	c7 85 4c fe ff ff 00 	movl   $0x0,-0x1b4(%ebp)
 804b060:	00 00 00 
 804b063:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 804b06a:	00 
 804b06b:	c7 44 24 04 0e 4c 05 	movl   $0x8054c0e,0x4(%esp)
 804b072:	08 
 804b073:	89 04 24             	mov    %eax,(%esp)
 804b076:	e8 75 24 00 00       	call   804d4f0 <main+0x38d0>
 804b07b:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 804b082:	00 
 804b083:	c7 44 24 04 1b 4c 05 	movl   $0x8054c1b,0x4(%esp)
 804b08a:	08 
 804b08b:	69 c0 e8 03 00 00    	imul   $0x3e8,%eax,%eax
 804b091:	89 85 00 fe ff ff    	mov    %eax,-0x200(%ebp)
 804b097:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804b09c:	89 04 24             	mov    %eax,(%esp)
 804b09f:	e8 4c 24 00 00       	call   804d4f0 <main+0x38d0>
 804b0a4:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 804b0ab:	00 
 804b0ac:	c7 44 24 04 28 4c 05 	movl   $0x8054c28,0x4(%esp)
 804b0b3:	08 
 804b0b4:	69 c0 e8 03 00 00    	imul   $0x3e8,%eax,%eax
 804b0ba:	89 85 04 fe ff ff    	mov    %eax,-0x1fc(%ebp)
 804b0c0:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804b0c5:	89 04 24             	mov    %eax,(%esp)
 804b0c8:	e8 23 24 00 00       	call   804d4f0 <main+0x38d0>
 804b0cd:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 804b0d4:	00 
 804b0d5:	c7 44 24 04 38 4c 05 	movl   $0x8054c38,0x4(%esp)
 804b0dc:	08 
 804b0dd:	69 c0 e8 03 00 00    	imul   $0x3e8,%eax,%eax
 804b0e3:	89 85 08 fe ff ff    	mov    %eax,-0x1f8(%ebp)
 804b0e9:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804b0ee:	89 04 24             	mov    %eax,(%esp)
 804b0f1:	e8 fa 23 00 00       	call   804d4f0 <main+0x38d0>
 804b0f6:	c7 44 24 08 e8 03 00 	movl   $0x3e8,0x8(%esp)
 804b0fd:	00 
 804b0fe:	c7 44 24 04 49 4c 05 	movl   $0x8054c49,0x4(%esp)
 804b105:	08 
 804b106:	69 c0 e8 03 00 00    	imul   $0x3e8,%eax,%eax
 804b10c:	89 85 0c fe ff ff    	mov    %eax,-0x1f4(%ebp)
 804b112:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804b117:	89 04 24             	mov    %eax,(%esp)
 804b11a:	e8 d1 23 00 00       	call   804d4f0 <main+0x38d0>
 804b11f:	c7 44 24 08 00 00 10 	movl   $0x100000,0x8(%esp)
 804b126:	00 
 804b127:	c7 44 24 04 52 4c 05 	movl   $0x8054c52,0x4(%esp)
 804b12e:	08 
 804b12f:	89 85 e8 fd ff ff    	mov    %eax,-0x218(%ebp)
 804b135:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804b13a:	89 04 24             	mov    %eax,(%esp)
 804b13d:	e8 ae 23 00 00       	call   804d4f0 <main+0x38d0>
 804b142:	c7 44 24 08 89 4d 05 	movl   $0x8054d89,0x8(%esp)
 804b149:	08 
 804b14a:	c7 44 24 04 6e 4b 05 	movl   $0x8054b6e,0x4(%esp)
 804b151:	08 
 804b152:	89 85 f0 fd ff ff    	mov    %eax,-0x210(%ebp)
 804b158:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804b15d:	89 04 24             	mov    %eax,(%esp)
 804b160:	e8 5b 23 00 00       	call   804d4c0 <main+0x38a0>
 804b165:	89 04 24             	mov    %eax,(%esp)
 804b168:	89 85 f4 fd ff ff    	mov    %eax,-0x20c(%ebp)
 804b16e:	e8 51 e8 ff ff       	call   80499c4 <strlen@plt>
 804b173:	c7 44 24 08 89 4d 05 	movl   $0x8054d89,0x8(%esp)
 804b17a:	08 
 804b17b:	c7 44 24 04 62 4c 05 	movl   $0x8054c62,0x4(%esp)
 804b182:	08 
 804b183:	89 c7                	mov    %eax,%edi
 804b185:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804b18a:	89 04 24             	mov    %eax,(%esp)
 804b18d:	e8 2e 23 00 00       	call   804d4c0 <main+0x38a0>
 804b192:	89 04 24             	mov    %eax,(%esp)
 804b195:	e8 2a e8 ff ff       	call   80499c4 <strlen@plt>
 804b19a:	8d 44 07 01          	lea    0x1(%edi,%eax,1),%eax
 804b19e:	89 04 24             	mov    %eax,(%esp)
 804b1a1:	e8 0e e4 ff ff       	call   80495b4 <malloc@plt>
 804b1a6:	85 c0                	test   %eax,%eax
 804b1a8:	0f 84 82 04 00 00    	je     804b630 <main+0x1a10>
 804b1ae:	89 85 f8 fd ff ff    	mov    %eax,-0x208(%ebp)
 804b1b4:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804b1b9:	c7 44 24 08 89 4d 05 	movl   $0x8054d89,0x8(%esp)
 804b1c0:	08 
 804b1c1:	c7 44 24 04 62 4c 05 	movl   $0x8054c62,0x4(%esp)
 804b1c8:	08 
 804b1c9:	89 04 24             	mov    %eax,(%esp)
 804b1cc:	e8 ef 22 00 00       	call   804d4c0 <main+0x38a0>
 804b1d1:	c7 44 24 04 6d 4c 05 	movl   $0x8054c6d,0x4(%esp)
 804b1d8:	08 
 804b1d9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 804b1dd:	8b 85 f4 fd ff ff    	mov    -0x20c(%ebp),%eax
 804b1e3:	89 44 24 08          	mov    %eax,0x8(%esp)
 804b1e7:	8b 85 f8 fd ff ff    	mov    -0x208(%ebp),%eax
 804b1ed:	89 04 24             	mov    %eax,(%esp)
 804b1f0:	e8 0f e7 ff ff       	call   8049904 <sprintf@plt>
 804b1f5:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
 804b1fb:	c7 45 bc 04 00 00 00 	movl   $0x4,-0x44(%ebp)
 804b202:	66 c7 45 ca ff ff    	movw   $0xffff,-0x36(%ebp)
 804b208:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 804b20f:	89 45 c0             	mov    %eax,-0x40(%ebp)
 804b212:	8d 85 fc fd ff ff    	lea    -0x204(%ebp),%eax
 804b218:	89 44 24 08          	mov    %eax,0x8(%esp)
 804b21c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 804b21f:	66 c7 45 c8 03 00    	movw   $0x3,-0x38(%ebp)
 804b225:	89 44 24 04          	mov    %eax,0x4(%esp)
 804b229:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 804b230:	e8 ef e2 ff ff       	call   8049524 <timer_create@plt>
 804b235:	83 f8 ff             	cmp    $0xffffffff,%eax
 804b238:	0f 84 f2 03 00 00    	je     804b630 <main+0x1a10>
 804b23e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 804b241:	89 44 24 08          	mov    %eax,0x8(%esp)
 804b245:	8b 85 fc fd ff ff    	mov    -0x204(%ebp),%eax
 804b24b:	c7 45 cc 01 00 00 00 	movl   $0x1,-0x34(%ebp)
 804b252:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 804b259:	c7 45 d4 01 00 00 00 	movl   $0x1,-0x2c(%ebp)
 804b260:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 804b267:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 804b26e:	00 
 804b26f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 804b276:	00 
 804b277:	89 04 24             	mov    %eax,(%esp)
 804b27a:	e8 95 e7 ff ff       	call   8049a14 <timer_settime@plt>
 804b27f:	83 f8 ff             	cmp    $0xffffffff,%eax
 804b282:	0f 84 a8 03 00 00    	je     804b630 <main+0x1a10>
 804b288:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804b28d:	c7 44 24 08 89 4d 05 	movl   $0x8054d89,0x8(%esp)
 804b294:	08 
 804b295:	c7 44 24 04 73 4c 05 	movl   $0x8054c73,0x4(%esp)
 804b29c:	08 
 804b29d:	89 04 24             	mov    %eax,(%esp)
 804b2a0:	e8 1b 22 00 00       	call   804d4c0 <main+0x38a0>
 804b2a5:	85 c0                	test   %eax,%eax
 804b2a7:	74 38                	je     804b2e1 <main+0x16c1>
 804b2a9:	c7 44 24 04 11 4e 05 	movl   $0x8054e11,0x4(%esp)
 804b2b0:	08 
 804b2b1:	89 04 24             	mov    %eax,(%esp)
 804b2b4:	e8 7b e5 ff ff       	call   8049834 <fopen@plt>
 804b2b9:	85 c0                	test   %eax,%eax
 804b2bb:	89 c7                	mov    %eax,%edi
 804b2bd:	74 22                	je     804b2e1 <main+0x16c1>
 804b2bf:	89 44 24 08          	mov    %eax,0x8(%esp)
 804b2c3:	8d 85 54 fe ff ff    	lea    -0x1ac(%ebp),%eax
 804b2c9:	c7 44 24 04 80 00 00 	movl   $0x80,0x4(%esp)
 804b2d0:	00 
 804b2d1:	89 04 24             	mov    %eax,(%esp)
 804b2d4:	e8 8b e2 ff ff       	call   8049564 <fgets@plt>
 804b2d9:	89 3c 24             	mov    %edi,(%esp)
 804b2dc:	e8 a3 e5 ff ff       	call   8049884 <fclose@plt>
 804b2e1:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804b2e6:	c7 44 24 08 89 4d 05 	movl   $0x8054d89,0x8(%esp)
 804b2ed:	08 
 804b2ee:	c7 44 24 04 7e 4c 05 	movl   $0x8054c7e,0x4(%esp)
 804b2f5:	08 
 804b2f6:	89 04 24             	mov    %eax,(%esp)
 804b2f9:	e8 c2 21 00 00       	call   804d4c0 <main+0x38a0>
 804b2fe:	85 c0                	test   %eax,%eax
 804b300:	74 38                	je     804b33a <main+0x171a>
 804b302:	c7 44 24 04 11 4e 05 	movl   $0x8054e11,0x4(%esp)
 804b309:	08 
 804b30a:	89 04 24             	mov    %eax,(%esp)
 804b30d:	e8 22 e5 ff ff       	call   8049834 <fopen@plt>
 804b312:	85 c0                	test   %eax,%eax
 804b314:	89 c7                	mov    %eax,%edi
 804b316:	74 22                	je     804b33a <main+0x171a>
 804b318:	89 44 24 08          	mov    %eax,0x8(%esp)
 804b31c:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 804b322:	c7 44 24 04 80 00 00 	movl   $0x80,0x4(%esp)
 804b329:	00 
 804b32a:	89 04 24             	mov    %eax,(%esp)
 804b32d:	e8 32 e2 ff ff       	call   8049564 <fgets@plt>
 804b332:	89 3c 24             	mov    %edi,(%esp)
 804b335:	e8 4a e5 ff ff       	call   8049884 <fclose@plt>
 804b33a:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804b33f:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 804b346:	00 
 804b347:	c7 44 24 04 be 4c 05 	movl   $0x8054cbe,0x4(%esp)
 804b34e:	08 
 804b34f:	89 04 24             	mov    %eax,(%esp)
 804b352:	e8 99 21 00 00       	call   804d4f0 <main+0x38d0>
 804b357:	31 d2                	xor    %edx,%edx
 804b359:	c7 44 15 a0 00 00 00 	movl   $0x0,-0x60(%ebp,%edx,1)
 804b360:	00 
 804b361:	83 c2 04             	add    $0x4,%edx
 804b364:	83 fa 1c             	cmp    $0x1c,%edx
 804b367:	72 f0                	jb     804b359 <main+0x1739>
 804b369:	8b 15 80 78 05 08    	mov    0x8057880,%edx
 804b36f:	c6 45 a1 18          	movb   $0x18,-0x5f(%ebp)
 804b373:	89 55 a8             	mov    %edx,-0x58(%ebp)
 804b376:	8b 15 84 78 05 08    	mov    0x8057884,%edx
 804b37c:	89 55 ac             	mov    %edx,-0x54(%ebp)
 804b37f:	8b 15 88 78 05 08    	mov    0x8057888,%edx
 804b385:	89 55 b0             	mov    %edx,-0x50(%ebp)
 804b388:	8b 15 8c 78 05 08    	mov    0x805788c,%edx
 804b38e:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 804b391:	86 c4                	xchg   %al,%ah
 804b393:	66 89 45 a2          	mov    %ax,-0x5e(%ebp)
 804b397:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 804b39e:	00 
 804b39f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 804b3a6:	00 
 804b3a7:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 804b3ae:	e8 81 e5 ff ff       	call   8049934 <socket@plt>
 804b3b3:	83 f8 ff             	cmp    $0xffffffff,%eax
 804b3b6:	89 c7                	mov    %eax,%edi
 804b3b8:	0f 84 72 02 00 00    	je     804b630 <main+0x1a10>
 804b3be:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 804b3c1:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 804b3c8:	c7 44 24 10 04 00 00 	movl   $0x4,0x10(%esp)
 804b3cf:	00 
 804b3d0:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 804b3d4:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 804b3db:	00 
 804b3dc:	c7 44 24 04 ff ff 00 	movl   $0xffff,0x4(%esp)
 804b3e3:	00 
 804b3e4:	89 3c 24             	mov    %edi,(%esp)
 804b3e7:	e8 48 e1 ff ff       	call   8049534 <setsockopt@plt>
 804b3ec:	83 f8 ff             	cmp    $0xffffffff,%eax
 804b3ef:	0f 84 2b 02 00 00    	je     804b620 <main+0x1a00>
 804b3f5:	8d 45 a0             	lea    -0x60(%ebp),%eax
 804b3f8:	c7 44 24 08 1c 00 00 	movl   $0x1c,0x8(%esp)
 804b3ff:	00 
 804b400:	89 44 24 04          	mov    %eax,0x4(%esp)
 804b404:	89 3c 24             	mov    %edi,(%esp)
 804b407:	e8 e8 e0 ff ff       	call   80494f4 <bind@plt>
 804b40c:	83 f8 ff             	cmp    $0xffffffff,%eax
 804b40f:	0f 84 0b 02 00 00    	je     804b620 <main+0x1a00>
 804b415:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804b41a:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 804b421:	00 
 804b422:	c7 44 24 04 89 4c 05 	movl   $0x8054c89,0x4(%esp)
 804b429:	08 
 804b42a:	89 04 24             	mov    %eax,(%esp)
 804b42d:	e8 be 20 00 00       	call   804d4f0 <main+0x38d0>
 804b432:	89 3c 24             	mov    %edi,(%esp)
 804b435:	89 44 24 04          	mov    %eax,0x4(%esp)
 804b439:	e8 76 e5 ff ff       	call   80499b4 <listen@plt>
 804b43e:	83 f8 ff             	cmp    $0xffffffff,%eax
 804b441:	0f 84 d9 01 00 00    	je     804b620 <main+0x1a00>
 804b447:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804b44c:	89 bd e4 fd ff ff    	mov    %edi,-0x21c(%ebp)
 804b452:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 804b459:	00 
 804b45a:	c7 44 24 04 91 4c 05 	movl   $0x8054c91,0x4(%esp)
 804b461:	08 
 804b462:	89 04 24             	mov    %eax,(%esp)
 804b465:	e8 86 20 00 00       	call   804d4f0 <main+0x38d0>
 804b46a:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 804b46d:	89 54 24 04          	mov    %edx,0x4(%esp)
 804b471:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 804b478:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 804b47b:	e8 64 e1 ff ff       	call   80495e4 <setgroups@plt>
 804b480:	83 f8 ff             	cmp    $0xffffffff,%eax
 804b483:	0f 84 a7 01 00 00    	je     804b630 <main+0x1a10>
 804b489:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 804b48c:	89 04 24             	mov    %eax,(%esp)
 804b48f:	e8 90 e2 ff ff       	call   8049724 <setgid@plt>
 804b494:	83 f8 ff             	cmp    $0xffffffff,%eax
 804b497:	0f 84 93 01 00 00    	je     804b630 <main+0x1a10>
 804b49d:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804b4a2:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 804b4a9:	00 
 804b4aa:	c7 44 24 04 9c 4c 05 	movl   $0x8054c9c,0x4(%esp)
 804b4b1:	08 
 804b4b2:	89 04 24             	mov    %eax,(%esp)
 804b4b5:	e8 36 20 00 00       	call   804d4f0 <main+0x38d0>
 804b4ba:	89 04 24             	mov    %eax,(%esp)
 804b4bd:	e8 42 e5 ff ff       	call   8049a04 <setuid@plt>
 804b4c2:	83 f8 ff             	cmp    $0xffffffff,%eax
 804b4c5:	0f 84 65 01 00 00    	je     804b630 <main+0x1a10>
 804b4cb:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804b4d0:	c7 44 24 08 a7 4c 05 	movl   $0x8054ca7,0x8(%esp)
 804b4d7:	08 
 804b4d8:	c7 44 24 04 b3 4c 05 	movl   $0x8054cb3,0x4(%esp)
 804b4df:	08 
 804b4e0:	89 04 24             	mov    %eax,(%esp)
 804b4e3:	e8 d8 1f 00 00       	call   804d4c0 <main+0x38a0>
 804b4e8:	89 04 24             	mov    %eax,(%esp)
 804b4eb:	e8 e4 e1 ff ff       	call   80496d4 <chdir@plt>
 804b4f0:	83 f8 ff             	cmp    $0xffffffff,%eax
 804b4f3:	0f 84 37 01 00 00    	je     804b630 <main+0x1a10>
 804b4f9:	89 f0                	mov    %esi,%eax
 804b4fb:	e8 70 f8 ff ff       	call   804ad70 <main+0x1150>
 804b500:	89 d8                	mov    %ebx,%eax
 804b502:	83 e0 01             	and    $0x1,%eax
 804b505:	8d 95 d4 fe ff ff    	lea    -0x12c(%ebp),%edx
 804b50b:	8d 8d 54 fe ff ff    	lea    -0x1ac(%ebp),%ecx
 804b511:	89 85 c4 fd ff ff    	mov    %eax,-0x23c(%ebp)
 804b517:	89 95 a0 fd ff ff    	mov    %edx,-0x260(%ebp)
 804b51d:	89 8d a4 fd ff ff    	mov    %ecx,-0x25c(%ebp)
 804b523:	89 9d d4 fd ff ff    	mov    %ebx,-0x22c(%ebp)
 804b529:	eb 53                	jmp    804b57e <main+0x195e>
 804b52b:	90                   	nop
 804b52c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804b530:	8b 9d d4 fd ff ff    	mov    -0x22c(%ebp),%ebx
 804b536:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 804b53c:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 804b543:	00 
 804b544:	89 44 24 04          	mov    %eax,0x4(%esp)
 804b548:	8b 43 0c             	mov    0xc(%ebx),%eax
 804b54b:	89 04 24             	mov    %eax,(%esp)
 804b54e:	e8 b1 df ff ff       	call   8049504 <ConnectClientInfo@plt>
 804b553:	83 f8 ff             	cmp    $0xffffffff,%eax
 804b556:	74 18                	je     804b570 <main+0x1950>
 804b558:	8b 9d 68 ff ff ff    	mov    -0x98(%ebp),%ebx
 804b55e:	e8 71 df ff ff       	call   80494d4 <geteuid@plt>
 804b563:	39 c3                	cmp    %eax,%ebx
 804b565:	0f 8e 15 04 00 00    	jle    804b980 <main+0x1d60>
 804b56b:	90                   	nop
 804b56c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804b570:	8b 9d 4c fe ff ff    	mov    -0x1b4(%ebp),%ebx
 804b576:	85 db                	test   %ebx,%ebx
 804b578:	0f 85 22 03 00 00    	jne    804b8a0 <main+0x1c80>
 804b57e:	8b 8d c4 fd ff ff    	mov    -0x23c(%ebp),%ecx
 804b584:	ba a8 00 00 00       	mov    $0xa8,%edx
 804b589:	8b bd d4 fd ff ff    	mov    -0x22c(%ebp),%edi
 804b58f:	85 c9                	test   %ecx,%ecx
 804b591:	0f 85 c9 03 00 00    	jne    804b960 <main+0x1d40>
 804b597:	f7 c7 02 00 00 00    	test   $0x2,%edi
 804b59d:	0f 85 ad 03 00 00    	jne    804b950 <main+0x1d30>
 804b5a3:	89 d1                	mov    %edx,%ecx
 804b5a5:	31 c0                	xor    %eax,%eax
 804b5a7:	c1 e9 02             	shr    $0x2,%ecx
 804b5aa:	f6 c2 02             	test   $0x2,%dl
 804b5ad:	f3 ab                	rep stos %eax,%es:(%edi)
 804b5af:	74 08                	je     804b5b9 <main+0x1999>
 804b5b1:	66 c7 07 00 00       	movw   $0x0,(%edi)
 804b5b6:	83 c7 02             	add    $0x2,%edi
 804b5b9:	83 e2 01             	and    $0x1,%edx
 804b5bc:	74 03                	je     804b5c1 <main+0x19a1>
 804b5be:	c6 07 00             	movb   $0x0,(%edi)
 804b5c1:	8b 8d d4 fd ff ff    	mov    -0x22c(%ebp),%ecx
 804b5c7:	8b 85 dc fd ff ff    	mov    -0x224(%ebp),%eax
 804b5cd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 804b5d4:	00 
 804b5d5:	c7 44 24 08 a8 00 00 	movl   $0xa8,0x8(%esp)
 804b5dc:	00 
 804b5dd:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 804b5e1:	89 04 24             	mov    %eax,(%esp)
 804b5e4:	e8 3b e3 ff ff       	call   8049924 <MsgReceive@plt>
 804b5e9:	83 f8 00             	cmp    $0x0,%eax
 804b5ec:	89 c3                	mov    %eax,%ebx
 804b5ee:	7c 40                	jl     804b630 <main+0x1a10>
 804b5f0:	0f 84 3a ff ff ff    	je     804b530 <main+0x1910>
 804b5f6:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
 804b5fc:	83 38 05             	cmpl   $0x5,(%eax)
 804b5ff:	76 3f                	jbe    804b640 <main+0x1a20>
 804b601:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 804b608:	00 
 804b609:	89 1c 24             	mov    %ebx,(%esp)
 804b60c:	e8 73 e0 ff ff       	call   8049684 <MsgError@plt>
 804b611:	e9 5a ff ff ff       	jmp    804b570 <main+0x1950>
 804b616:	8d 76 00             	lea    0x0(%esi),%esi
 804b619:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804b620:	89 3c 24             	mov    %edi,(%esp)
 804b623:	e8 1c e4 ff ff       	call   8049a44 <close@plt>
 804b628:	90                   	nop
 804b629:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804b630:	81 c4 7c 02 00 00    	add    $0x27c,%esp
 804b636:	5b                   	pop    %ebx
 804b637:	5e                   	pop    %esi
 804b638:	5f                   	pop    %edi
 804b639:	5d                   	pop    %ebp
 804b63a:	c3                   	ret    
 804b63b:	90                   	nop
 804b63c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804b640:	8b 00                	mov    (%eax),%eax
 804b642:	ff 24 85 c4 4c 05 08 	jmp    *0x8054cc4(,%eax,4)
 804b649:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804b650:	8d 95 d4 fe ff ff    	lea    -0x12c(%ebp),%edx
 804b656:	8b 0a                	mov    (%edx),%ecx
 804b658:	83 c2 04             	add    $0x4,%edx
 804b65b:	8d 81 ff fe fe fe    	lea    -0x1010101(%ecx),%eax
 804b661:	f7 d1                	not    %ecx
 804b663:	21 c8                	and    %ecx,%eax
 804b665:	25 80 80 80 80       	and    $0x80808080,%eax
 804b66a:	74 ea                	je     804b656 <main+0x1a36>
 804b66c:	a9 80 80 00 00       	test   $0x8080,%eax
 804b671:	75 06                	jne    804b679 <main+0x1a59>
 804b673:	c1 e8 10             	shr    $0x10,%eax
 804b676:	83 c2 02             	add    $0x2,%edx
 804b679:	00 c0                	add    %al,%al
 804b67b:	83 da 03             	sbb    $0x3,%edx
 804b67e:	2b 95 a0 fd ff ff    	sub    -0x260(%ebp),%edx
 804b684:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 804b68b:	00 
 804b68c:	89 1c 24             	mov    %ebx,(%esp)
 804b68f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 804b693:	8d 95 d4 fe ff ff    	lea    -0x12c(%ebp),%edx
 804b699:	89 54 24 08          	mov    %edx,0x8(%esp)
 804b69d:	e8 52 e3 ff ff       	call   80499f4 <MsgReply@plt>
 804b6a2:	e9 c9 fe ff ff       	jmp    804b570 <main+0x1950>
 804b6a7:	89 f6                	mov    %esi,%esi
 804b6a9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804b6b0:	8d 95 54 fe ff ff    	lea    -0x1ac(%ebp),%edx
 804b6b6:	8b 0a                	mov    (%edx),%ecx
 804b6b8:	83 c2 04             	add    $0x4,%edx
 804b6bb:	8d 81 ff fe fe fe    	lea    -0x1010101(%ecx),%eax
 804b6c1:	f7 d1                	not    %ecx
 804b6c3:	21 c8                	and    %ecx,%eax
 804b6c5:	25 80 80 80 80       	and    $0x80808080,%eax
 804b6ca:	74 ea                	je     804b6b6 <main+0x1a96>
 804b6cc:	a9 80 80 00 00       	test   $0x8080,%eax
 804b6d1:	75 06                	jne    804b6d9 <main+0x1ab9>
 804b6d3:	c1 e8 10             	shr    $0x10,%eax
 804b6d6:	83 c2 02             	add    $0x2,%edx
 804b6d9:	00 c0                	add    %al,%al
 804b6db:	83 da 03             	sbb    $0x3,%edx
 804b6de:	2b 95 a4 fd ff ff    	sub    -0x25c(%ebp),%edx
 804b6e4:	8d 85 54 fe ff ff    	lea    -0x1ac(%ebp),%eax
 804b6ea:	89 44 24 08          	mov    %eax,0x8(%esp)
 804b6ee:	89 54 24 0c          	mov    %edx,0xc(%esp)
 804b6f2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 804b6f9:	00 
 804b6fa:	89 1c 24             	mov    %ebx,(%esp)
 804b6fd:	e8 f2 e2 ff ff       	call   80499f4 <MsgReply@plt>
 804b702:	e9 69 fe ff ff       	jmp    804b570 <main+0x1950>
 804b707:	89 f6                	mov    %esi,%esi
 804b709:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804b710:	8b 85 44 fe ff ff    	mov    -0x1bc(%ebp),%eax
 804b716:	8b 8d d4 fd ff ff    	mov    -0x22c(%ebp),%ecx
 804b71c:	85 c0                	test   %eax,%eax
 804b71e:	8b 51 04             	mov    0x4(%ecx),%edx
 804b721:	75 17                	jne    804b73a <main+0x1b1a>
 804b723:	e9 d9 fe ff ff       	jmp    804b601 <main+0x19e1>
 804b728:	90                   	nop
 804b729:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804b730:	8b 00                	mov    (%eax),%eax
 804b732:	85 c0                	test   %eax,%eax
 804b734:	0f 84 c7 fe ff ff    	je     804b601 <main+0x19e1>
 804b73a:	39 c2                	cmp    %eax,%edx
 804b73c:	75 f2                	jne    804b730 <main+0x1b10>
 804b73e:	89 f0                	mov    %esi,%eax
 804b740:	e8 0b ec ff ff       	call   804a350 <main+0x730>
 804b745:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 804b74c:	00 
 804b74d:	89 1c 24             	mov    %ebx,(%esp)
 804b750:	e8 2f df ff ff       	call   8049684 <MsgError@plt>
 804b755:	e9 16 fe ff ff       	jmp    804b570 <main+0x1950>
 804b75a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804b760:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
 804b766:	8b 78 04             	mov    0x4(%eax),%edi
 804b769:	8b 85 44 fe ff ff    	mov    -0x1bc(%ebp),%eax
 804b76f:	85 c0                	test   %eax,%eax
 804b771:	75 17                	jne    804b78a <main+0x1b6a>
 804b773:	e9 89 fe ff ff       	jmp    804b601 <main+0x19e1>
 804b778:	90                   	nop
 804b779:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804b780:	8b 00                	mov    (%eax),%eax
 804b782:	85 c0                	test   %eax,%eax
 804b784:	0f 84 77 fe ff ff    	je     804b601 <main+0x19e1>
 804b78a:	39 c7                	cmp    %eax,%edi
 804b78c:	75 f2                	jne    804b780 <main+0x1b60>
 804b78e:	8b 47 4c             	mov    0x4c(%edi),%eax
 804b791:	85 c0                	test   %eax,%eax
 804b793:	0f 85 68 fe ff ff    	jne    804b601 <main+0x19e1>
 804b799:	8b 95 d4 fd ff ff    	mov    -0x22c(%ebp),%edx
 804b79f:	8b 42 08             	mov    0x8(%edx),%eax
 804b7a2:	3d 00 10 00 00       	cmp    $0x1000,%eax
 804b7a7:	0f 87 54 fe ff ff    	ja     804b601 <main+0x19e1>
 804b7ad:	89 04 24             	mov    %eax,(%esp)
 804b7b0:	e8 ff dd ff ff       	call   80495b4 <malloc@plt>
 804b7b5:	85 c0                	test   %eax,%eax
 804b7b7:	89 c2                	mov    %eax,%edx
 804b7b9:	0f 84 13 04 00 00    	je     804bbd2 <main+0x1fb2>
 804b7bf:	8b 8d d4 fd ff ff    	mov    -0x22c(%ebp),%ecx
 804b7c5:	c7 44 24 0c a8 00 00 	movl   $0xa8,0xc(%esp)
 804b7cc:	00 
 804b7cd:	8b 41 08             	mov    0x8(%ecx),%eax
 804b7d0:	89 54 24 04          	mov    %edx,0x4(%esp)
 804b7d4:	89 95 ac fd ff ff    	mov    %edx,-0x254(%ebp)
 804b7da:	89 1c 24             	mov    %ebx,(%esp)
 804b7dd:	89 44 24 08          	mov    %eax,0x8(%esp)
 804b7e1:	e8 ae e1 ff ff       	call   8049994 <MsgRead@plt>
 804b7e6:	8b 8d d4 fd ff ff    	mov    -0x22c(%ebp),%ecx
 804b7ec:	8b 95 ac fd ff ff    	mov    -0x254(%ebp),%edx
 804b7f2:	3b 41 08             	cmp    0x8(%ecx),%eax
 804b7f5:	0f 85 06 fe ff ff    	jne    804b601 <main+0x19e1>
 804b7fb:	89 57 4c             	mov    %edx,0x4c(%edi)
 804b7fe:	8b 95 d4 fd ff ff    	mov    -0x22c(%ebp),%edx
 804b804:	c7 47 50 00 00 00 00 	movl   $0x0,0x50(%edi)
 804b80b:	8b 42 08             	mov    0x8(%edx),%eax
 804b80e:	89 fa                	mov    %edi,%edx
 804b810:	89 5f 58             	mov    %ebx,0x58(%edi)
 804b813:	89 47 54             	mov    %eax,0x54(%edi)
 804b816:	89 f0                	mov    %esi,%eax
 804b818:	e8 33 ec ff ff       	call   804a450 <main+0x830>
 804b81d:	e9 4e fd ff ff       	jmp    804b570 <main+0x1950>
 804b822:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804b829:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804b830:	8b bd 3c fe ff ff    	mov    -0x1c4(%ebp),%edi
 804b836:	85 ff                	test   %edi,%edi
 804b838:	0f 84 67 03 00 00    	je     804bba5 <main+0x1f85>
 804b83e:	89 fa                	mov    %edi,%edx
 804b840:	89 f0                	mov    %esi,%eax
 804b842:	e8 99 ea ff ff       	call   804a2e0 <main+0x6c0>
 804b847:	89 f9                	mov    %edi,%ecx
 804b849:	89 da                	mov    %ebx,%edx
 804b84b:	89 f0                	mov    %esi,%eax
 804b84d:	e8 0e ed ff ff       	call   804a560 <main+0x940>
 804b852:	85 c0                	test   %eax,%eax
 804b854:	0f 85 16 fd ff ff    	jne    804b570 <main+0x1950>
 804b85a:	8b 85 3c fe ff ff    	mov    -0x1c4(%ebp),%eax
 804b860:	85 c0                	test   %eax,%eax
 804b862:	89 07                	mov    %eax,(%edi)
 804b864:	0f 84 5d 03 00 00    	je     804bbc7 <main+0x1fa7>
 804b86a:	89 78 04             	mov    %edi,0x4(%eax)
 804b86d:	8d 8d 3c fe ff ff    	lea    -0x1c4(%ebp),%ecx
 804b873:	89 4f 04             	mov    %ecx,0x4(%edi)
 804b876:	89 bd 3c fe ff ff    	mov    %edi,-0x1c4(%ebp)
 804b87c:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 804b883:	00 
 804b884:	89 1c 24             	mov    %ebx,(%esp)
 804b887:	e8 f8 dd ff ff       	call   8049684 <MsgError@plt>
 804b88c:	e9 df fc ff ff       	jmp    804b570 <main+0x1950>
 804b891:	eb 0d                	jmp    804b8a0 <main+0x1c80>
 804b893:	90                   	nop
 804b894:	90                   	nop
 804b895:	90                   	nop
 804b896:	90                   	nop
 804b897:	90                   	nop
 804b898:	90                   	nop
 804b899:	90                   	nop
 804b89a:	90                   	nop
 804b89b:	90                   	nop
 804b89c:	90                   	nop
 804b89d:	90                   	nop
 804b89e:	90                   	nop
 804b89f:	90                   	nop
 804b8a0:	89 f0                	mov    %esi,%eax
 804b8a2:	89 da                	mov    %ebx,%edx
 804b8a4:	e8 37 ea ff ff       	call   804a2e0 <main+0x6c0>
 804b8a9:	8b 43 24             	mov    0x24(%ebx),%eax
 804b8ac:	85 c0                	test   %eax,%eax
 804b8ae:	7e 08                	jle    804b8b8 <main+0x1c98>
 804b8b0:	89 04 24             	mov    %eax,(%esp)
 804b8b3:	e8 8c e1 ff ff       	call   8049a44 <close@plt>
 804b8b8:	8b 43 30             	mov    0x30(%ebx),%eax
 804b8bb:	8d 8d 10 fe ff ff    	lea    -0x1f0(%ebp),%ecx
 804b8c1:	89 0c 24             	mov    %ecx,(%esp)
 804b8c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 804b8c8:	e8 c3 23 00 00       	call   804dc90 <main+0x4070>
 804b8cd:	8b 43 40             	mov    0x40(%ebx),%eax
 804b8d0:	85 c0                	test   %eax,%eax
 804b8d2:	74 3c                	je     804b910 <main+0x1cf0>
 804b8d4:	8b 53 44             	mov    0x44(%ebx),%edx
 804b8d7:	83 fa ff             	cmp    $0xffffffff,%edx
 804b8da:	74 0b                	je     804b8e7 <main+0x1cc7>
 804b8dc:	89 14 24             	mov    %edx,(%esp)
 804b8df:	e8 60 e1 ff ff       	call   8049a44 <close@plt>
 804b8e4:	8b 43 40             	mov    0x40(%ebx),%eax
 804b8e7:	89 04 24             	mov    %eax,(%esp)
 804b8ea:	e8 75 de ff ff       	call   8049764 <unlink@plt>
 804b8ef:	8b 43 40             	mov    0x40(%ebx),%eax
 804b8f2:	89 04 24             	mov    %eax,(%esp)
 804b8f5:	e8 5a e1 ff ff       	call   8049a54 <free@plt>
 804b8fa:	8b 43 3c             	mov    0x3c(%ebx),%eax
 804b8fd:	89 04 24             	mov    %eax,(%esp)
 804b900:	e8 cf dc ff ff       	call   80495d4 <rmdir@plt>
 804b905:	8b 43 3c             	mov    0x3c(%ebx),%eax
 804b908:	89 04 24             	mov    %eax,(%esp)
 804b90b:	e8 44 e1 ff ff       	call   8049a54 <free@plt>
 804b910:	8b 4b 4c             	mov    0x4c(%ebx),%ecx
 804b913:	85 c9                	test   %ecx,%ecx
 804b915:	74 1e                	je     804b935 <main+0x1d15>
 804b917:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 804b91e:	00 
 804b91f:	8b 43 58             	mov    0x58(%ebx),%eax
 804b922:	89 04 24             	mov    %eax,(%esp)
 804b925:	e8 5a dd ff ff       	call   8049684 <MsgError@plt>
 804b92a:	8b 43 4c             	mov    0x4c(%ebx),%eax
 804b92d:	89 04 24             	mov    %eax,(%esp)
 804b930:	e8 1f e1 ff ff       	call   8049a54 <free@plt>
 804b935:	89 1c 24             	mov    %ebx,(%esp)
 804b938:	e8 17 e1 ff ff       	call   8049a54 <free@plt>
 804b93d:	83 ad ec fd ff ff 01 	subl   $0x1,-0x214(%ebp)
 804b944:	e9 27 fc ff ff       	jmp    804b570 <main+0x1950>
 804b949:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804b950:	66 c7 07 00 00       	movw   $0x0,(%edi)
 804b955:	83 ea 02             	sub    $0x2,%edx
 804b958:	83 c7 02             	add    $0x2,%edi
 804b95b:	e9 43 fc ff ff       	jmp    804b5a3 <main+0x1983>
 804b960:	c6 07 00             	movb   $0x0,(%edi)
 804b963:	8b bd d4 fd ff ff    	mov    -0x22c(%ebp),%edi
 804b969:	b2 a7                	mov    $0xa7,%dl
 804b96b:	83 c7 01             	add    $0x1,%edi
 804b96e:	e9 24 fc ff ff       	jmp    804b597 <main+0x1977>
 804b973:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804b979:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804b980:	8b 95 d4 fd ff ff    	mov    -0x22c(%ebp),%edx
 804b986:	0f b6 42 04          	movzbl 0x4(%edx),%eax
 804b98a:	3c 01                	cmp    $0x1,%al
 804b98c:	0f 84 ea 01 00 00    	je     804bb7c <main+0x1f5c>
 804b992:	0f 8e f9 01 00 00    	jle    804bb91 <main+0x1f71>
 804b998:	3c 02                	cmp    $0x2,%al
 804b99a:	0f 84 c7 01 00 00    	je     804bb67 <main+0x1f47>
 804b9a0:	3c 03                	cmp    $0x3,%al
 804b9a2:	0f 85 c8 fb ff ff    	jne    804b570 <main+0x1950>
 804b9a8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 804b9ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 804b9af:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 804b9b6:	e8 c9 da ff ff       	call   8049484 <clock_gettime@plt>
 804b9bb:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 804b9be:	ba 83 de 1b 43       	mov    $0x431bde83,%edx
 804b9c3:	c7 85 b4 fd ff ff 00 	movl   $0x0,-0x24c(%ebp)
 804b9ca:	00 00 00 
 804b9cd:	89 c8                	mov    %ecx,%eax
 804b9cf:	f7 ea                	imul   %edx
 804b9d1:	69 45 dc e8 03 00 00 	imul   $0x3e8,-0x24(%ebp),%eax
 804b9d8:	c1 f9 1f             	sar    $0x1f,%ecx
 804b9db:	c1 fa 12             	sar    $0x12,%edx
 804b9de:	29 ca                	sub    %ecx,%edx
 804b9e0:	01 c2                	add    %eax,%edx
 804b9e2:	89 95 b0 fd ff ff    	mov    %edx,-0x250(%ebp)
 804b9e8:	8b 95 34 fe ff ff    	mov    -0x1cc(%ebp),%edx
 804b9ee:	85 d2                	test   %edx,%edx
 804b9f0:	75 64                	jne    804ba56 <main+0x1e36>
 804b9f2:	e9 9d 00 00 00       	jmp    804ba94 <main+0x1e74>
 804b9f7:	89 f6                	mov    %esi,%esi
 804b9f9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804ba00:	8b 8d b0 fd ff ff    	mov    -0x250(%ebp),%ecx
 804ba06:	2b 8d c8 fd ff ff    	sub    -0x238(%ebp),%ecx
 804ba0c:	8b 9d b4 fd ff ff    	mov    -0x24c(%ebp),%ebx
 804ba12:	1b 9d cc fd ff ff    	sbb    -0x234(%ebp),%ebx
 804ba18:	89 8d c8 fd ff ff    	mov    %ecx,-0x238(%ebp)
 804ba1e:	8b 8d 04 fe ff ff    	mov    -0x1fc(%ebp),%ecx
 804ba24:	89 9d cc fd ff ff    	mov    %ebx,-0x234(%ebp)
 804ba2a:	31 db                	xor    %ebx,%ebx
 804ba2c:	83 bd cc fd ff ff 00 	cmpl   $0x0,-0x234(%ebp)
 804ba33:	89 8d b8 fd ff ff    	mov    %ecx,-0x248(%ebp)
 804ba39:	89 9d bc fd ff ff    	mov    %ebx,-0x244(%ebp)
 804ba3f:	77 08                	ja     804ba49 <main+0x1e29>
 804ba41:	39 8d c8 fd ff ff    	cmp    %ecx,-0x238(%ebp)
 804ba47:	76 07                	jbe    804ba50 <main+0x1e30>
 804ba49:	89 f0                	mov    %esi,%eax
 804ba4b:	e8 00 e9 ff ff       	call   804a350 <main+0x730>
 804ba50:	85 ff                	test   %edi,%edi
 804ba52:	74 40                	je     804ba94 <main+0x1e74>
 804ba54:	89 fa                	mov    %edi,%edx
 804ba56:	8b 4a 68             	mov    0x68(%edx),%ecx
 804ba59:	8b 5a 6c             	mov    0x6c(%edx),%ebx
 804ba5c:	8b 3a                	mov    (%edx),%edi
 804ba5e:	89 8d c8 fd ff ff    	mov    %ecx,-0x238(%ebp)
 804ba64:	89 9d cc fd ff ff    	mov    %ebx,-0x234(%ebp)
 804ba6a:	09 cb                	or     %ecx,%ebx
 804ba6c:	75 92                	jne    804ba00 <main+0x1de0>
 804ba6e:	8b 8d b0 fd ff ff    	mov    -0x250(%ebp),%ecx
 804ba74:	8b 9d b4 fd ff ff    	mov    -0x24c(%ebp),%ebx
 804ba7a:	2b 4a 60             	sub    0x60(%edx),%ecx
 804ba7d:	1b 5a 64             	sbb    0x64(%edx),%ebx
 804ba80:	89 8d c8 fd ff ff    	mov    %ecx,-0x238(%ebp)
 804ba86:	8b 8d 00 fe ff ff    	mov    -0x200(%ebp),%ecx
 804ba8c:	89 9d cc fd ff ff    	mov    %ebx,-0x234(%ebp)
 804ba92:	eb 96                	jmp    804ba2a <main+0x1e0a>
 804ba94:	8b 95 3c fe ff ff    	mov    -0x1c4(%ebp),%edx
 804ba9a:	85 d2                	test   %edx,%edx
 804ba9c:	75 04                	jne    804baa2 <main+0x1e82>
 804ba9e:	eb 52                	jmp    804baf2 <main+0x1ed2>
 804baa0:	89 fa                	mov    %edi,%edx
 804baa2:	8b 8d b0 fd ff ff    	mov    -0x250(%ebp),%ecx
 804baa8:	2b 4a 70             	sub    0x70(%edx),%ecx
 804baab:	8b 9d b4 fd ff ff    	mov    -0x24c(%ebp),%ebx
 804bab1:	1b 5a 74             	sbb    0x74(%edx),%ebx
 804bab4:	89 8d c8 fd ff ff    	mov    %ecx,-0x238(%ebp)
 804baba:	8b 8d 08 fe ff ff    	mov    -0x1f8(%ebp),%ecx
 804bac0:	8b 3a                	mov    (%edx),%edi
 804bac2:	89 9d cc fd ff ff    	mov    %ebx,-0x234(%ebp)
 804bac8:	31 db                	xor    %ebx,%ebx
 804baca:	83 bd cc fd ff ff 00 	cmpl   $0x0,-0x234(%ebp)
 804bad1:	89 8d b8 fd ff ff    	mov    %ecx,-0x248(%ebp)
 804bad7:	89 9d bc fd ff ff    	mov    %ebx,-0x244(%ebp)
 804badd:	77 08                	ja     804bae7 <main+0x1ec7>
 804badf:	39 8d c8 fd ff ff    	cmp    %ecx,-0x238(%ebp)
 804bae5:	76 07                	jbe    804baee <main+0x1ece>
 804bae7:	89 f0                	mov    %esi,%eax
 804bae9:	e8 62 e8 ff ff       	call   804a350 <main+0x730>
 804baee:	85 ff                	test   %edi,%edi
 804baf0:	75 ae                	jne    804baa0 <main+0x1e80>
 804baf2:	8b 95 44 fe ff ff    	mov    -0x1bc(%ebp),%edx
 804baf8:	85 d2                	test   %edx,%edx
 804bafa:	75 16                	jne    804bb12 <main+0x1ef2>
 804bafc:	e9 6f fa ff ff       	jmp    804b570 <main+0x1950>
 804bb01:	eb 0d                	jmp    804bb10 <main+0x1ef0>
 804bb03:	90                   	nop
 804bb04:	90                   	nop
 804bb05:	90                   	nop
 804bb06:	90                   	nop
 804bb07:	90                   	nop
 804bb08:	90                   	nop
 804bb09:	90                   	nop
 804bb0a:	90                   	nop
 804bb0b:	90                   	nop
 804bb0c:	90                   	nop
 804bb0d:	90                   	nop
 804bb0e:	90                   	nop
 804bb0f:	90                   	nop
 804bb10:	89 fa                	mov    %edi,%edx
 804bb12:	8b 8d b0 fd ff ff    	mov    -0x250(%ebp),%ecx
 804bb18:	2b 4a 78             	sub    0x78(%edx),%ecx
 804bb1b:	8b 9d b4 fd ff ff    	mov    -0x24c(%ebp),%ebx
 804bb21:	1b 5a 7c             	sbb    0x7c(%edx),%ebx
 804bb24:	89 8d c8 fd ff ff    	mov    %ecx,-0x238(%ebp)
 804bb2a:	8b 8d 0c fe ff ff    	mov    -0x1f4(%ebp),%ecx
 804bb30:	8b 3a                	mov    (%edx),%edi
 804bb32:	89 9d cc fd ff ff    	mov    %ebx,-0x234(%ebp)
 804bb38:	31 db                	xor    %ebx,%ebx
 804bb3a:	83 bd cc fd ff ff 00 	cmpl   $0x0,-0x234(%ebp)
 804bb41:	89 8d b8 fd ff ff    	mov    %ecx,-0x248(%ebp)
 804bb47:	89 9d bc fd ff ff    	mov    %ebx,-0x244(%ebp)
 804bb4d:	77 08                	ja     804bb57 <main+0x1f37>
 804bb4f:	39 8d c8 fd ff ff    	cmp    %ecx,-0x238(%ebp)
 804bb55:	76 07                	jbe    804bb5e <main+0x1f3e>
 804bb57:	89 f0                	mov    %esi,%eax
 804bb59:	e8 f2 e7 ff ff       	call   804a350 <main+0x730>
 804bb5e:	85 ff                	test   %edi,%edi
 804bb60:	75 ae                	jne    804bb10 <main+0x1ef0>
 804bb62:	e9 09 fa ff ff       	jmp    804b570 <main+0x1950>
 804bb67:	8b 9d d4 fd ff ff    	mov    -0x22c(%ebp),%ebx
 804bb6d:	89 f0                	mov    %esi,%eax
 804bb6f:	8b 53 08             	mov    0x8(%ebx),%edx
 804bb72:	e8 d9 e8 ff ff       	call   804a450 <main+0x830>
 804bb77:	e9 f4 f9 ff ff       	jmp    804b570 <main+0x1950>
 804bb7c:	8b 8d d4 fd ff ff    	mov    -0x22c(%ebp),%ecx
 804bb82:	89 f0                	mov    %esi,%eax
 804bb84:	8b 51 08             	mov    0x8(%ecx),%edx
 804bb87:	e8 54 ef ff ff       	call   804aae0 <main+0xec0>
 804bb8c:	e9 df f9 ff ff       	jmp    804b570 <main+0x1950>
 804bb91:	84 c0                	test   %al,%al
 804bb93:	0f 85 d7 f9 ff ff    	jne    804b570 <main+0x1950>
 804bb99:	89 f0                	mov    %esi,%eax
 804bb9b:	e8 d0 f1 ff ff       	call   804ad70 <main+0x1150>
 804bba0:	e9 cb f9 ff ff       	jmp    804b570 <main+0x1950>
 804bba5:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 804bbac:	e8 03 da ff ff       	call   80495b4 <malloc@plt>
 804bbb1:	8b 95 30 fe ff ff    	mov    -0x1d0(%ebp),%edx
 804bbb7:	89 58 04             	mov    %ebx,0x4(%eax)
 804bbba:	89 10                	mov    %edx,(%eax)
 804bbbc:	89 85 30 fe ff ff    	mov    %eax,-0x1d0(%ebp)
 804bbc2:	e9 a9 f9 ff ff       	jmp    804b570 <main+0x1950>
 804bbc7:	89 bd 40 fe ff ff    	mov    %edi,-0x1c0(%ebp)
 804bbcd:	e9 9b fc ff ff       	jmp    804b86d <main+0x1c4d>
 804bbd2:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 804bbd9:	00 
 804bbda:	89 1c 24             	mov    %ebx,(%esp)
 804bbdd:	e8 a2 da ff ff       	call   8049684 <MsgError@plt>
 804bbe2:	e9 89 f9 ff ff       	jmp    804b570 <main+0x1950>
 804bbe7:	90                   	nop
 804bbe8:	90                   	nop
 804bbe9:	90                   	nop
 804bbea:	90                   	nop
 804bbeb:	90                   	nop
 804bbec:	90                   	nop
 804bbed:	90                   	nop
 804bbee:	90                   	nop
 804bbef:	90                   	nop
 804bbf0:	55                   	push   %ebp
 804bbf1:	89 e5                	mov    %esp,%ebp
 804bbf3:	57                   	push   %edi
 804bbf4:	56                   	push   %esi
 804bbf5:	53                   	push   %ebx
 804bbf6:	89 c3                	mov    %eax,%ebx
 804bbf8:	83 ec 2c             	sub    $0x2c,%esp
 804bbfb:	89 04 24             	mov    %eax,(%esp)
 804bbfe:	e8 c1 dd ff ff       	call   80499c4 <strlen@plt>
 804bc03:	89 c2                	mov    %eax,%edx
 804bc05:	31 c0                	xor    %eax,%eax
 804bc07:	81 fa ff 03 00 00    	cmp    $0x3ff,%edx
 804bc0d:	76 08                	jbe    804bc17 <main+0x1ff7>
 804bc0f:	83 c4 2c             	add    $0x2c,%esp
 804bc12:	5b                   	pop    %ebx
 804bc13:	5e                   	pop    %esi
 804bc14:	5f                   	pop    %edi
 804bc15:	5d                   	pop    %ebp
 804bc16:	c3                   	ret    
 804bc17:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 804bc1b:	bb 01 8a 05 08       	mov    $0x8058a01,%ebx
 804bc20:	c6 05 00 8a 05 08 2f 	movb   $0x2f,0x8058a00
 804bc27:	c7 04 24 01 8a 05 08 	movl   $0x8058a01,(%esp)
 804bc2e:	e8 71 d8 ff ff       	call   80494a4 <strcpy@plt>
 804bc33:	b9 2f 00 00 00       	mov    $0x2f,%ecx
 804bc38:	b8 00 8a 05 08       	mov    $0x8058a00,%eax
 804bc3d:	c6 05 00 8a 05 08 2f 	movb   $0x2f,0x8058a00
 804bc44:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804bc4a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 804bc50:	80 f9 2f             	cmp    $0x2f,%cl
 804bc53:	75 1e                	jne    804bc73 <main+0x2053>
 804bc55:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804bc59:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804bc60:	83 c0 01             	add    $0x1,%eax
 804bc63:	0f b6 08             	movzbl (%eax),%ecx
 804bc66:	80 f9 2f             	cmp    $0x2f,%cl
 804bc69:	74 f5                	je     804bc60 <main+0x2040>
 804bc6b:	84 c9                	test   %cl,%cl
 804bc6d:	0f 84 98 00 00 00    	je     804bd0b <main+0x20eb>
 804bc73:	89 c6                	mov    %eax,%esi
 804bc75:	bf dc 4c 05 08       	mov    $0x8054cdc,%edi
 804bc7a:	b9 02 00 00 00       	mov    $0x2,%ecx
 804bc7f:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 804bc81:	75 52                	jne    804bcd5 <main+0x20b5>
 804bc83:	0f b6 48 02          	movzbl 0x2(%eax),%ecx
 804bc87:	8d 70 02             	lea    0x2(%eax),%esi
 804bc8a:	84 c9                	test   %cl,%cl
 804bc8c:	75 42                	jne    804bcd0 <main+0x20b0>
 804bc8e:	8d 43 ff             	lea    -0x1(%ebx),%eax
 804bc91:	2d 00 8a 05 08       	sub    $0x8058a00,%eax
 804bc96:	89 44 24 08          	mov    %eax,0x8(%esp)
 804bc9a:	c7 44 24 04 2f 00 00 	movl   $0x2f,0x4(%esp)
 804bca1:	00 
 804bca2:	c7 04 24 00 8a 05 08 	movl   $0x8058a00,(%esp)
 804bca9:	e8 52 31 00 00       	call   804ee00 <main+0x51e0>
 804bcae:	85 c0                	test   %eax,%eax
 804bcb0:	74 03                	je     804bcb5 <main+0x2095>
 804bcb2:	8d 58 01             	lea    0x1(%eax),%ebx
 804bcb5:	0f b6 0e             	movzbl (%esi),%ecx
 804bcb8:	90                   	nop
 804bcb9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804bcc0:	84 c9                	test   %cl,%cl
 804bcc2:	74 47                	je     804bd0b <main+0x20eb>
 804bcc4:	89 f0                	mov    %esi,%eax
 804bcc6:	eb 88                	jmp    804bc50 <main+0x2030>
 804bcc8:	90                   	nop
 804bcc9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804bcd0:	80 f9 2f             	cmp    $0x2f,%cl
 804bcd3:	74 b9                	je     804bc8e <main+0x206e>
 804bcd5:	80 38 2e             	cmpb   $0x2e,(%eax)
 804bcd8:	74 26                	je     804bd00 <main+0x20e0>
 804bcda:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804bce0:	0f b6 08             	movzbl (%eax),%ecx
 804bce3:	84 c9                	test   %cl,%cl
 804bce5:	75 09                	jne    804bcf0 <main+0x20d0>
 804bce7:	80 f9 2f             	cmp    $0x2f,%cl
 804bcea:	74 44                	je     804bd30 <main+0x2110>
 804bcec:	89 c6                	mov    %eax,%esi
 804bcee:	eb d0                	jmp    804bcc0 <main+0x20a0>
 804bcf0:	80 f9 2f             	cmp    $0x2f,%cl
 804bcf3:	74 3b                	je     804bd30 <main+0x2110>
 804bcf5:	88 0b                	mov    %cl,(%ebx)
 804bcf7:	83 c0 01             	add    $0x1,%eax
 804bcfa:	83 c3 01             	add    $0x1,%ebx
 804bcfd:	eb e1                	jmp    804bce0 <main+0x20c0>
 804bcff:	90                   	nop
 804bd00:	0f b6 48 01          	movzbl 0x1(%eax),%ecx
 804bd04:	8d 70 01             	lea    0x1(%eax),%esi
 804bd07:	84 c9                	test   %cl,%cl
 804bd09:	75 35                	jne    804bd40 <main+0x2120>
 804bd0b:	c6 03 00             	movb   $0x0,(%ebx)
 804bd0e:	c7 04 24 00 8a 05 08 	movl   $0x8058a00,(%esp)
 804bd15:	e8 ea da ff ff       	call   8049804 <strdup@plt>
 804bd1a:	83 c4 2c             	add    $0x2c,%esp
 804bd1d:	5b                   	pop    %ebx
 804bd1e:	5e                   	pop    %esi
 804bd1f:	5f                   	pop    %edi
 804bd20:	5d                   	pop    %ebp
 804bd21:	c3                   	ret    
 804bd22:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804bd29:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804bd30:	c6 03 2f             	movb   $0x2f,(%ebx)
 804bd33:	89 c6                	mov    %eax,%esi
 804bd35:	83 c3 01             	add    $0x1,%ebx
 804bd38:	0f b6 08             	movzbl (%eax),%ecx
 804bd3b:	eb 83                	jmp    804bcc0 <main+0x20a0>
 804bd3d:	8d 76 00             	lea    0x0(%esi),%esi
 804bd40:	80 f9 2f             	cmp    $0x2f,%cl
 804bd43:	75 9b                	jne    804bce0 <main+0x20c0>
 804bd45:	e9 76 ff ff ff       	jmp    804bcc0 <main+0x20a0>
 804bd4a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804bd50:	55                   	push   %ebp
 804bd51:	31 c0                	xor    %eax,%eax
 804bd53:	89 e5                	mov    %esp,%ebp
 804bd55:	53                   	push   %ebx
 804bd56:	83 ec 14             	sub    $0x14,%esp
 804bd59:	8b 55 14             	mov    0x14(%ebp),%edx
 804bd5c:	8b 5d 18             	mov    0x18(%ebp),%ebx
 804bd5f:	85 d2                	test   %edx,%edx
 804bd61:	74 0d                	je     804bd70 <main+0x2150>
 804bd63:	83 c4 14             	add    $0x14,%esp
 804bd66:	5b                   	pop    %ebx
 804bd67:	5d                   	pop    %ebp
 804bd68:	c3                   	ret    
 804bd69:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804bd70:	8b 45 08             	mov    0x8(%ebp),%eax
 804bd73:	83 c0 38             	add    $0x38,%eax
 804bd76:	89 04 24             	mov    %eax,(%esp)
 804bd79:	e8 86 da ff ff       	call   8049804 <strdup@plt>
 804bd7e:	85 c0                	test   %eax,%eax
 804bd80:	89 43 04             	mov    %eax,0x4(%ebx)
 804bd83:	74 1b                	je     804bda0 <main+0x2180>
 804bd85:	c7 03 02 00 00 00    	movl   $0x2,(%ebx)
 804bd8b:	b8 01 00 00 00       	mov    $0x1,%eax
 804bd90:	83 c4 14             	add    $0x14,%esp
 804bd93:	5b                   	pop    %ebx
 804bd94:	5d                   	pop    %ebp
 804bd95:	c3                   	ret    
 804bd96:	8d 76 00             	lea    0x0(%esi),%esi
 804bd99:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804bda0:	c7 03 00 00 00 00    	movl   $0x0,(%ebx)
 804bda6:	b8 01 00 00 00       	mov    $0x1,%eax
 804bdab:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 804bdb2:	eb af                	jmp    804bd63 <main+0x2143>
 804bdb4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804bdba:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 804bdc0:	55                   	push   %ebp
 804bdc1:	89 e5                	mov    %esp,%ebp
 804bdc3:	83 ec 18             	sub    $0x18,%esp
 804bdc6:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 804bdca:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 804bdcd:	8b 5d 08             	mov    0x8(%ebp),%ebx
 804bdd0:	89 75 fc             	mov    %esi,-0x4(%ebp)
 804bdd3:	8b 75 10             	mov    0x10(%ebp),%esi
 804bdd6:	74 18                	je     804bdf0 <main+0x21d0>
 804bdd8:	31 c0                	xor    %eax,%eax
 804bdda:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 804bddd:	8b 75 fc             	mov    -0x4(%ebp),%esi
 804bde0:	89 ec                	mov    %ebp,%esp
 804bde2:	5d                   	pop    %ebp
 804bde3:	c3                   	ret    
 804bde4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804bdea:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 804bdf0:	83 3e 02             	cmpl   $0x2,(%esi)
 804bdf3:	75 e3                	jne    804bdd8 <main+0x21b8>
 804bdf5:	8b 83 04 01 00 00    	mov    0x104(%ebx),%eax
 804bdfb:	89 04 24             	mov    %eax,(%esp)
 804bdfe:	e8 51 dc ff ff       	call   8049a54 <free@plt>
 804be03:	8b 46 04             	mov    0x4(%esi),%eax
 804be06:	89 04 24             	mov    %eax,(%esp)
 804be09:	e8 f6 d9 ff ff       	call   8049804 <strdup@plt>
 804be0e:	85 c0                	test   %eax,%eax
 804be10:	89 83 04 01 00 00    	mov    %eax,0x104(%ebx)
 804be16:	0f 95 c0             	setne  %al
 804be19:	0f b6 c0             	movzbl %al,%eax
 804be1c:	eb bc                	jmp    804bdda <main+0x21ba>
 804be1e:	66 90                	xchg   %ax,%ax
 804be20:	55                   	push   %ebp
 804be21:	89 e5                	mov    %esp,%ebp
 804be23:	53                   	push   %ebx
 804be24:	83 ec 14             	sub    $0x14,%esp
 804be27:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 804be2a:	8b 45 08             	mov    0x8(%ebp),%eax
 804be2d:	89 04 24             	mov    %eax,(%esp)
 804be30:	e8 1f dc ff ff       	call   8049a54 <free@plt>
 804be35:	89 5d 08             	mov    %ebx,0x8(%ebp)
 804be38:	83 c4 14             	add    $0x14,%esp
 804be3b:	5b                   	pop    %ebx
 804be3c:	5d                   	pop    %ebp
 804be3d:	e9 12 dc ff ff       	jmp    8049a54 <free@plt>
 804be42:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804be49:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804be50:	55                   	push   %ebp
 804be51:	89 e5                	mov    %esp,%ebp
 804be53:	53                   	push   %ebx
 804be54:	81 ec e4 00 00 00    	sub    $0xe4,%esp
 804be5a:	8b 98 b8 00 00 00    	mov    0xb8(%eax),%ebx
 804be60:	89 55 e8             	mov    %edx,-0x18(%ebp)
 804be63:	8d 55 f0             	lea    -0x10(%ebp),%edx
 804be66:	89 54 24 0c          	mov    %edx,0xc(%esp)
 804be6a:	8d 55 e0             	lea    -0x20(%ebp),%edx
 804be6d:	c7 85 38 ff ff ff 02 	movl   $0x2,-0xc8(%ebp)
 804be74:	00 00 00 
 804be77:	89 8d 40 ff ff ff    	mov    %ecx,-0xc0(%ebp)
 804be7d:	c7 45 e4 a8 00 00 00 	movl   $0xa8,-0x1c(%ebp)
 804be84:	89 4d ec             	mov    %ecx,-0x14(%ebp)
 804be87:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 804be8e:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 804be95:	00 
 804be96:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 804be9d:	00 
 804be9e:	89 54 24 04          	mov    %edx,0x4(%esp)
 804bea2:	8b 00                	mov    (%eax),%eax
 804bea4:	89 9d 3c ff ff ff    	mov    %ebx,-0xc4(%ebp)
 804beaa:	8d 9d 38 ff ff ff    	lea    -0xc8(%ebp),%ebx
 804beb0:	89 5d e0             	mov    %ebx,-0x20(%ebp)
 804beb3:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 804beba:	89 04 24             	mov    %eax,(%esp)
 804bebd:	e8 e2 d9 ff ff       	call   80498a4 <MsgSendv@plt>
 804bec2:	81 c4 e4 00 00 00    	add    $0xe4,%esp
 804bec8:	5b                   	pop    %ebx
 804bec9:	5d                   	pop    %ebp
 804beca:	c3                   	ret    
 804becb:	90                   	nop
 804becc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804bed0:	55                   	push   %ebp
 804bed1:	89 e5                	mov    %esp,%ebp
 804bed3:	83 ec 38             	sub    $0x38,%esp
 804bed6:	8b 45 08             	mov    0x8(%ebp),%eax
 804bed9:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 804bedc:	89 75 f8             	mov    %esi,-0x8(%ebp)
 804bedf:	8b 75 10             	mov    0x10(%ebp),%esi
 804bee2:	89 7d fc             	mov    %edi,-0x4(%ebp)
 804bee5:	8b 7d 0c             	mov    0xc(%ebp),%edi
 804bee8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 804beeb:	89 04 24             	mov    %eax,(%esp)
 804beee:	e8 d1 da ff ff       	call   80499c4 <strlen@plt>
 804bef3:	83 3f 02             	cmpl   $0x2,(%edi)
 804bef6:	8d 58 0e             	lea    0xe(%eax),%ebx
 804bef9:	74 65                	je     804bf60 <main+0x2340>
 804befb:	83 c0 22             	add    $0x22,%eax
 804befe:	89 04 24             	mov    %eax,(%esp)
 804bf01:	e8 ae d6 ff ff       	call   80495b4 <malloc@plt>
 804bf06:	85 c0                	test   %eax,%eax
 804bf08:	89 c3                	mov    %eax,%ebx
 804bf0a:	74 6f                	je     804bf7b <main+0x235b>
 804bf0c:	83 3f 02             	cmpl   $0x2,(%edi)
 804bf0f:	74 7f                	je     804bf90 <main+0x2370>
 804bf11:	8b 47 04             	mov    0x4(%edi),%eax
 804bf14:	89 44 24 0c          	mov    %eax,0xc(%esp)
 804bf18:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 804bf1b:	c7 44 24 04 f1 4c 05 	movl   $0x8054cf1,0x4(%esp)
 804bf22:	08 
 804bf23:	89 1c 24             	mov    %ebx,(%esp)
 804bf26:	89 44 24 08          	mov    %eax,0x8(%esp)
 804bf2a:	e8 d5 d9 ff ff       	call   8049904 <sprintf@plt>
 804bf2f:	89 1c 24             	mov    %ebx,(%esp)
 804bf32:	e8 8d da ff ff       	call   80499c4 <strlen@plt>
 804bf37:	89 da                	mov    %ebx,%edx
 804bf39:	89 c1                	mov    %eax,%ecx
 804bf3b:	89 f0                	mov    %esi,%eax
 804bf3d:	e8 0e ff ff ff       	call   804be50 <main+0x2230>
 804bf42:	8b 75 f8             	mov    -0x8(%ebp),%esi
 804bf45:	89 5d 08             	mov    %ebx,0x8(%ebp)
 804bf48:	8b 7d fc             	mov    -0x4(%ebp),%edi
 804bf4b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 804bf4e:	89 ec                	mov    %ebp,%esp
 804bf50:	5d                   	pop    %ebp
 804bf51:	e9 fe da ff ff       	jmp    8049a54 <free@plt>
 804bf56:	8d 76 00             	lea    0x0(%esi),%esi
 804bf59:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804bf60:	8b 47 04             	mov    0x4(%edi),%eax
 804bf63:	89 04 24             	mov    %eax,(%esp)
 804bf66:	e8 59 da ff ff       	call   80499c4 <strlen@plt>
 804bf6b:	01 d8                	add    %ebx,%eax
 804bf6d:	89 04 24             	mov    %eax,(%esp)
 804bf70:	e8 3f d6 ff ff       	call   80495b4 <malloc@plt>
 804bf75:	85 c0                	test   %eax,%eax
 804bf77:	89 c3                	mov    %eax,%ebx
 804bf79:	75 91                	jne    804bf0c <main+0x22ec>
 804bf7b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 804bf7e:	8b 75 f8             	mov    -0x8(%ebp),%esi
 804bf81:	8b 7d fc             	mov    -0x4(%ebp),%edi
 804bf84:	89 ec                	mov    %ebp,%esp
 804bf86:	5d                   	pop    %ebp
 804bf87:	c3                   	ret    
 804bf88:	90                   	nop
 804bf89:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804bf90:	8b 47 04             	mov    0x4(%edi),%eax
 804bf93:	89 44 24 0c          	mov    %eax,0xc(%esp)
 804bf97:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 804bf9a:	c7 44 24 04 df 4c 05 	movl   $0x8054cdf,0x4(%esp)
 804bfa1:	08 
 804bfa2:	89 1c 24             	mov    %ebx,(%esp)
 804bfa5:	89 44 24 08          	mov    %eax,0x8(%esp)
 804bfa9:	e8 56 d9 ff ff       	call   8049904 <sprintf@plt>
 804bfae:	e9 7c ff ff ff       	jmp    804bf2f <main+0x230f>
 804bfb3:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804bfb9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804bfc0:	55                   	push   %ebp
 804bfc1:	31 c0                	xor    %eax,%eax
 804bfc3:	89 e5                	mov    %esp,%ebp
 804bfc5:	83 ec 18             	sub    $0x18,%esp
 804bfc8:	8b 4d 14             	mov    0x14(%ebp),%ecx
 804bfcb:	85 c9                	test   %ecx,%ecx
 804bfcd:	74 11                	je     804bfe0 <main+0x23c0>
 804bfcf:	c9                   	leave  
 804bfd0:	c3                   	ret    
 804bfd1:	eb 0d                	jmp    804bfe0 <main+0x23c0>
 804bfd3:	90                   	nop
 804bfd4:	90                   	nop
 804bfd5:	90                   	nop
 804bfd6:	90                   	nop
 804bfd7:	90                   	nop
 804bfd8:	90                   	nop
 804bfd9:	90                   	nop
 804bfda:	90                   	nop
 804bfdb:	90                   	nop
 804bfdc:	90                   	nop
 804bfdd:	90                   	nop
 804bfde:	90                   	nop
 804bfdf:	90                   	nop
 804bfe0:	8b 45 08             	mov    0x8(%ebp),%eax
 804bfe3:	c7 44 24 04 d0 be 04 	movl   $0x804bed0,0x4(%esp)
 804bfea:	08 
 804bfeb:	89 44 24 08          	mov    %eax,0x8(%esp)
 804bfef:	8b 45 0c             	mov    0xc(%ebp),%eax
 804bff2:	8b 40 08             	mov    0x8(%eax),%eax
 804bff5:	89 04 24             	mov    %eax,(%esp)
 804bff8:	e8 b3 17 00 00       	call   804d7b0 <main+0x3b90>
 804bffd:	b8 01 00 00 00       	mov    $0x1,%eax
 804c002:	c9                   	leave  
 804c003:	c3                   	ret    
 804c004:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804c00a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 804c010:	55                   	push   %ebp
 804c011:	89 e5                	mov    %esp,%ebp
 804c013:	83 ec 48             	sub    $0x48,%esp
 804c016:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 804c01a:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 804c01d:	8b 45 10             	mov    0x10(%ebp),%eax
 804c020:	89 75 f8             	mov    %esi,-0x8(%ebp)
 804c023:	89 7d fc             	mov    %edi,-0x4(%ebp)
 804c026:	74 18                	je     804c040 <main+0x2420>
 804c028:	31 c0                	xor    %eax,%eax
 804c02a:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 804c02d:	8b 75 f8             	mov    -0x8(%ebp),%esi
 804c030:	8b 7d fc             	mov    -0x4(%ebp),%edi
 804c033:	89 ec                	mov    %ebp,%esp
 804c035:	5d                   	pop    %ebp
 804c036:	c3                   	ret    
 804c037:	89 f6                	mov    %esi,%esi
 804c039:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804c040:	83 38 02             	cmpl   $0x2,(%eax)
 804c043:	75 e3                	jne    804c028 <main+0x2408>
 804c045:	8b 40 04             	mov    0x4(%eax),%eax
 804c048:	89 04 24             	mov    %eax,(%esp)
 804c04b:	e8 b4 d7 ff ff       	call   8049804 <strdup@plt>
 804c050:	85 c0                	test   %eax,%eax
 804c052:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 804c055:	74 d1                	je     804c028 <main+0x2408>
 804c057:	89 c3                	mov    %eax,%ebx
 804c059:	31 c9                	xor    %ecx,%ecx
 804c05b:	83 c3 01             	add    $0x1,%ebx
 804c05e:	89 c7                	mov    %eax,%edi
 804c060:	89 c2                	mov    %eax,%edx
 804c062:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 804c065:	eb 1c                	jmp    804c083 <main+0x2463>
 804c067:	89 f6                	mov    %esi,%esi
 804c069:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804c070:	3c 26                	cmp    $0x26,%al
 804c072:	74 3c                	je     804c0b0 <main+0x2490>
 804c074:	3c 25                	cmp    $0x25,%al
 804c076:	8d 72 01             	lea    0x1(%edx),%esi
 804c079:	74 75                	je     804c0f0 <main+0x24d0>
 804c07b:	88 43 ff             	mov    %al,-0x1(%ebx)
 804c07e:	83 c3 01             	add    $0x1,%ebx
 804c081:	89 f2                	mov    %esi,%edx
 804c083:	0f b6 02             	movzbl (%edx),%eax
 804c086:	8d 73 ff             	lea    -0x1(%ebx),%esi
 804c089:	84 c0                	test   %al,%al
 804c08b:	0f 84 bf 00 00 00    	je     804c150 <main+0x2530>
 804c091:	3c 3d                	cmp    $0x3d,%al
 804c093:	75 db                	jne    804c070 <main+0x2450>
 804c095:	c6 43 ff 00          	movb   $0x0,-0x1(%ebx)
 804c099:	8d 72 01             	lea    0x1(%edx),%esi
 804c09c:	89 5d d4             	mov    %ebx,-0x2c(%ebp)
 804c09f:	eb dd                	jmp    804c07e <main+0x245e>
 804c0a1:	eb 0d                	jmp    804c0b0 <main+0x2490>
 804c0a3:	90                   	nop
 804c0a4:	90                   	nop
 804c0a5:	90                   	nop
 804c0a6:	90                   	nop
 804c0a7:	90                   	nop
 804c0a8:	90                   	nop
 804c0a9:	90                   	nop
 804c0aa:	90                   	nop
 804c0ab:	90                   	nop
 804c0ac:	90                   	nop
 804c0ad:	90                   	nop
 804c0ae:	90                   	nop
 804c0af:	90                   	nop
 804c0b0:	c6 43 ff 00          	movb   $0x0,-0x1(%ebx)
 804c0b4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 804c0b7:	8d 72 01             	lea    0x1(%edx),%esi
 804c0ba:	85 c0                	test   %eax,%eax
 804c0bc:	74 1a                	je     804c0d8 <main+0x24b8>
 804c0be:	85 ff                	test   %edi,%edi
 804c0c0:	74 16                	je     804c0d8 <main+0x24b8>
 804c0c2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 804c0c5:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 804c0c8:	89 7c 24 04          	mov    %edi,0x4(%esp)
 804c0cc:	89 44 24 08          	mov    %eax,0x8(%esp)
 804c0d0:	89 0c 24             	mov    %ecx,(%esp)
 804c0d3:	e8 98 58 00 00       	call   8051970 <main+0x7d50>
 804c0d8:	89 df                	mov    %ebx,%edi
 804c0da:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 804c0e1:	eb 9b                	jmp    804c07e <main+0x245e>
 804c0e3:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804c0e9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804c0f0:	0f b6 4a 01          	movzbl 0x1(%edx),%ecx
 804c0f4:	8d 72 01             	lea    0x1(%edx),%esi
 804c0f7:	84 c9                	test   %cl,%cl
 804c0f9:	88 4d e3             	mov    %cl,-0x1d(%ebp)
 804c0fc:	0f 84 79 ff ff ff    	je     804c07b <main+0x245b>
 804c102:	0f b6 4a 02          	movzbl 0x2(%edx),%ecx
 804c106:	84 c9                	test   %cl,%cl
 804c108:	88 4d e2             	mov    %cl,-0x1e(%ebp)
 804c10b:	0f 84 6a ff ff ff    	je     804c07b <main+0x245b>
 804c111:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 804c115:	83 e8 30             	sub    $0x30,%eax
 804c118:	3c 09                	cmp    $0x9,%al
 804c11a:	0f 87 90 00 00 00    	ja     804c1b0 <main+0x2590>
 804c120:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 804c124:	c1 e0 04             	shl    $0x4,%eax
 804c127:	88 45 e3             	mov    %al,-0x1d(%ebp)
 804c12a:	0f b6 45 e2          	movzbl -0x1e(%ebp),%eax
 804c12e:	83 e8 30             	sub    $0x30,%eax
 804c131:	3c 09                	cmp    $0x9,%al
 804c133:	77 5b                	ja     804c190 <main+0x2570>
 804c135:	0f b6 45 e2          	movzbl -0x1e(%ebp),%eax
 804c139:	83 e8 30             	sub    $0x30,%eax
 804c13c:	0a 45 e3             	or     -0x1d(%ebp),%al
 804c13f:	8d 72 03             	lea    0x3(%edx),%esi
 804c142:	88 43 ff             	mov    %al,-0x1(%ebx)
 804c145:	e9 34 ff ff ff       	jmp    804c07e <main+0x245e>
 804c14a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804c150:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 804c153:	85 c9                	test   %ecx,%ecx
 804c155:	74 1a                	je     804c171 <main+0x2551>
 804c157:	85 ff                	test   %edi,%edi
 804c159:	74 16                	je     804c171 <main+0x2551>
 804c15b:	c6 06 00             	movb   $0x0,(%esi)
 804c15e:	8b 75 0c             	mov    0xc(%ebp),%esi
 804c161:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 804c165:	89 7c 24 04          	mov    %edi,0x4(%esp)
 804c169:	89 34 24             	mov    %esi,(%esp)
 804c16c:	e8 ff 57 00 00       	call   8051970 <main+0x7d50>
 804c171:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 804c174:	89 04 24             	mov    %eax,(%esp)
 804c177:	e8 d8 d8 ff ff       	call   8049a54 <free@plt>
 804c17c:	b8 01 00 00 00       	mov    $0x1,%eax
 804c181:	e9 a4 fe ff ff       	jmp    804c02a <main+0x240a>
 804c186:	8d 76 00             	lea    0x0(%esi),%esi
 804c189:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804c190:	0f be 75 e2          	movsbl -0x1e(%ebp),%esi
 804c194:	a1 00 79 05 08       	mov    0x8057900,%eax
 804c199:	0f b6 04 70          	movzbl (%eax,%esi,2),%eax
 804c19d:	8d 70 bf             	lea    -0x41(%eax),%esi
 804c1a0:	89 f1                	mov    %esi,%ecx
 804c1a2:	89 f0                	mov    %esi,%eax
 804c1a4:	80 f9 06             	cmp    $0x6,%cl
 804c1a7:	19 f6                	sbb    %esi,%esi
 804c1a9:	21 f0                	and    %esi,%eax
 804c1ab:	eb 8f                	jmp    804c13c <main+0x251c>
 804c1ad:	8d 76 00             	lea    0x0(%esi),%esi
 804c1b0:	0f be 75 e3          	movsbl -0x1d(%ebp),%esi
 804c1b4:	a1 00 79 05 08       	mov    0x8057900,%eax
 804c1b9:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 804c1bd:	0f b6 04 70          	movzbl (%eax,%esi,2),%eax
 804c1c1:	8d 70 bf             	lea    -0x41(%eax),%esi
 804c1c4:	89 f1                	mov    %esi,%ecx
 804c1c6:	80 f9 05             	cmp    $0x5,%cl
 804c1c9:	0f 87 5b ff ff ff    	ja     804c12a <main+0x250a>
 804c1cf:	c1 e0 04             	shl    $0x4,%eax
 804c1d2:	8d 70 f0             	lea    -0x10(%eax),%esi
 804c1d5:	89 f1                	mov    %esi,%ecx
 804c1d7:	88 4d e3             	mov    %cl,-0x1d(%ebp)
 804c1da:	e9 4b ff ff ff       	jmp    804c12a <main+0x250a>
 804c1df:	90                   	nop
 804c1e0:	55                   	push   %ebp
 804c1e1:	31 c0                	xor    %eax,%eax
 804c1e3:	89 e5                	mov    %esp,%ebp
 804c1e5:	83 ec 18             	sub    $0x18,%esp
 804c1e8:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 804c1ec:	8b 4d 08             	mov    0x8(%ebp),%ecx
 804c1ef:	8b 55 10             	mov    0x10(%ebp),%edx
 804c1f2:	74 0c                	je     804c200 <main+0x25e0>
 804c1f4:	c9                   	leave  
 804c1f5:	c3                   	ret    
 804c1f6:	8d 76 00             	lea    0x0(%esi),%esi
 804c1f9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804c200:	83 3a 02             	cmpl   $0x2,(%edx)
 804c203:	74 2b                	je     804c230 <main+0x2610>
 804c205:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 804c20c:	00 
 804c20d:	89 54 24 08          	mov    %edx,0x8(%esp)
 804c211:	c7 44 24 04 08 4d 05 	movl   $0x8054d08,0x4(%esp)
 804c218:	08 
 804c219:	89 0c 24             	mov    %ecx,(%esp)
 804c21c:	e8 4f 6e 00 00       	call   8053070 <main+0x9450>
 804c221:	c9                   	leave  
 804c222:	f7 d0                	not    %eax
 804c224:	c1 e8 1f             	shr    $0x1f,%eax
 804c227:	c3                   	ret    
 804c228:	90                   	nop
 804c229:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804c230:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 804c237:	00 
 804c238:	89 54 24 08          	mov    %edx,0x8(%esp)
 804c23c:	c7 44 24 04 04 4d 05 	movl   $0x8054d04,0x4(%esp)
 804c243:	08 
 804c244:	89 0c 24             	mov    %ecx,(%esp)
 804c247:	e8 24 6e 00 00       	call   8053070 <main+0x9450>
 804c24c:	c9                   	leave  
 804c24d:	f7 d0                	not    %eax
 804c24f:	c1 e8 1f             	shr    $0x1f,%eax
 804c252:	c3                   	ret    
 804c253:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804c259:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804c260:	55                   	push   %ebp
 804c261:	89 e5                	mov    %esp,%ebp
 804c263:	83 ec 18             	sub    $0x18,%esp
 804c266:	8b 45 14             	mov    0x14(%ebp),%eax
 804c269:	8b 55 10             	mov    0x10(%ebp),%edx
 804c26c:	85 c0                	test   %eax,%eax
 804c26e:	74 05                	je     804c275 <main+0x2655>
 804c270:	83 3a 02             	cmpl   $0x2,(%edx)
 804c273:	74 0b                	je     804c280 <main+0x2660>
 804c275:	31 c0                	xor    %eax,%eax
 804c277:	c9                   	leave  
 804c278:	c3                   	ret    
 804c279:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804c280:	83 e8 01             	sub    $0x1,%eax
 804c283:	89 44 24 0c          	mov    %eax,0xc(%esp)
 804c287:	8d 42 08             	lea    0x8(%edx),%eax
 804c28a:	89 44 24 08          	mov    %eax,0x8(%esp)
 804c28e:	8b 42 04             	mov    0x4(%edx),%eax
 804c291:	89 44 24 04          	mov    %eax,0x4(%esp)
 804c295:	8b 45 08             	mov    0x8(%ebp),%eax
 804c298:	89 04 24             	mov    %eax,(%esp)
 804c29b:	e8 d0 6d 00 00       	call   8053070 <main+0x9450>
 804c2a0:	c9                   	leave  
 804c2a1:	f7 d0                	not    %eax
 804c2a3:	c1 e8 1f             	shr    $0x1f,%eax
 804c2a6:	c3                   	ret    
 804c2a7:	89 f6                	mov    %esi,%esi
 804c2a9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804c2b0:	55                   	push   %ebp
 804c2b1:	89 e5                	mov    %esp,%ebp
 804c2b3:	57                   	push   %edi
 804c2b4:	89 c7                	mov    %eax,%edi
 804c2b6:	56                   	push   %esi
 804c2b7:	53                   	push   %ebx
 804c2b8:	81 ec 8c 10 00 00    	sub    $0x108c,%esp
 804c2be:	89 95 94 ef ff ff    	mov    %edx,-0x106c(%ebp)
 804c2c4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 804c2cb:	00 
 804c2cc:	89 0c 24             	mov    %ecx,(%esp)
 804c2cf:	e8 00 d7 ff ff       	call   80499d4 <open@plt>
 804c2d4:	83 f8 ff             	cmp    $0xffffffff,%eax
 804c2d7:	89 c6                	mov    %eax,%esi
 804c2d9:	74 55                	je     804c330 <main+0x2710>
 804c2db:	8b 55 08             	mov    0x8(%ebp),%edx
 804c2de:	8d 9d a0 ef ff ff    	lea    -0x1060(%ebp),%ebx
 804c2e4:	85 d2                	test   %edx,%edx
 804c2e6:	74 13                	je     804c2fb <main+0x26db>
 804c2e8:	eb 5b                	jmp    804c345 <main+0x2725>
 804c2ea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804c2f0:	89 c1                	mov    %eax,%ecx
 804c2f2:	89 da                	mov    %ebx,%edx
 804c2f4:	89 f8                	mov    %edi,%eax
 804c2f6:	e8 55 fb ff ff       	call   804be50 <main+0x2230>
 804c2fb:	c7 44 24 08 00 10 00 	movl   $0x1000,0x8(%esp)
 804c302:	00 
 804c303:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 804c307:	89 34 24             	mov    %esi,(%esp)
 804c30a:	e8 25 d4 ff ff       	call   8049734 <read@plt>
 804c30f:	85 c0                	test   %eax,%eax
 804c311:	7f dd                	jg     804c2f0 <main+0x26d0>
 804c313:	89 34 24             	mov    %esi,(%esp)
 804c316:	e8 29 d7 ff ff       	call   8049a44 <close@plt>
 804c31b:	81 c4 8c 10 00 00    	add    $0x108c,%esp
 804c321:	5b                   	pop    %ebx
 804c322:	5e                   	pop    %esi
 804c323:	5f                   	pop    %edi
 804c324:	5d                   	pop    %ebp
 804c325:	c3                   	ret    
 804c326:	8d 76 00             	lea    0x0(%esi),%esi
 804c329:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804c330:	c7 87 e4 00 00 00 94 	movl   $0x194,0xe4(%edi)
 804c337:	01 00 00 
 804c33a:	81 c4 8c 10 00 00    	add    $0x108c,%esp
 804c340:	5b                   	pop    %ebx
 804c341:	5e                   	pop    %esi
 804c342:	5f                   	pop    %edi
 804c343:	5d                   	pop    %ebp
 804c344:	c3                   	ret    
 804c345:	8d 45 a0             	lea    -0x60(%ebp),%eax
 804c348:	89 44 24 04          	mov    %eax,0x4(%esp)
 804c34c:	89 34 24             	mov    %esi,(%esp)
 804c34f:	e8 40 d3 ff ff       	call   8049694 <fstat@plt>
 804c354:	ba 1b 4d 05 08       	mov    $0x8054d1b,%edx
 804c359:	83 f8 01             	cmp    $0x1,%eax
 804c35c:	19 c0                	sbb    %eax,%eax
 804c35e:	23 45 a8             	and    -0x58(%ebp),%eax
 804c361:	81 bd 94 ef ff ff 93 	cmpl   $0x193,-0x106c(%ebp)
 804c368:	01 00 00 
 804c36b:	74 33                	je     804c3a0 <main+0x2780>
 804c36d:	0f 8f 8f 00 00 00    	jg     804c402 <main+0x27e2>
 804c373:	81 bd 94 ef ff ff c8 	cmpl   $0xc8,-0x106c(%ebp)
 804c37a:	00 00 00 
 804c37d:	ba 18 4d 05 08       	mov    $0x8054d18,%edx
 804c382:	74 1c                	je     804c3a0 <main+0x2780>
 804c384:	81 bd 94 ef ff ff 90 	cmpl   $0x190,-0x106c(%ebp)
 804c38b:	01 00 00 
 804c38e:	ba 0c 4d 05 08       	mov    $0x8054d0c,%edx
 804c393:	0f 85 a4 00 00 00    	jne    804c43d <main+0x281d>
 804c399:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804c3a0:	89 44 24 10          	mov    %eax,0x10(%esp)
 804c3a4:	8d 9d a0 ef ff ff    	lea    -0x1060(%ebp),%ebx
 804c3aa:	89 54 24 0c          	mov    %edx,0xc(%esp)
 804c3ae:	8b 85 94 ef ff ff    	mov    -0x106c(%ebp),%eax
 804c3b4:	c7 44 24 04 9c 4e 05 	movl   $0x8054e9c,0x4(%esp)
 804c3bb:	08 
 804c3bc:	89 1c 24             	mov    %ebx,(%esp)
 804c3bf:	89 44 24 08          	mov    %eax,0x8(%esp)
 804c3c3:	e8 3c d5 ff ff       	call   8049904 <sprintf@plt>
 804c3c8:	89 d9                	mov    %ebx,%ecx
 804c3ca:	8b 11                	mov    (%ecx),%edx
 804c3cc:	83 c1 04             	add    $0x4,%ecx
 804c3cf:	8d 82 ff fe fe fe    	lea    -0x1010101(%edx),%eax
 804c3d5:	f7 d2                	not    %edx
 804c3d7:	21 d0                	and    %edx,%eax
 804c3d9:	25 80 80 80 80       	and    $0x80808080,%eax
 804c3de:	74 ea                	je     804c3ca <main+0x27aa>
 804c3e0:	a9 80 80 00 00       	test   $0x8080,%eax
 804c3e5:	75 06                	jne    804c3ed <main+0x27cd>
 804c3e7:	c1 e8 10             	shr    $0x10,%eax
 804c3ea:	83 c1 02             	add    $0x2,%ecx
 804c3ed:	00 c0                	add    %al,%al
 804c3ef:	89 da                	mov    %ebx,%edx
 804c3f1:	83 d9 03             	sbb    $0x3,%ecx
 804c3f4:	89 f8                	mov    %edi,%eax
 804c3f6:	29 d9                	sub    %ebx,%ecx
 804c3f8:	e8 53 fa ff ff       	call   804be50 <main+0x2230>
 804c3fd:	e9 f9 fe ff ff       	jmp    804c2fb <main+0x26db>
 804c402:	81 bd 94 ef ff ff 9e 	cmpl   $0x19e,-0x106c(%ebp)
 804c409:	01 00 00 
 804c40c:	ba 2f 4d 05 08       	mov    $0x8054d2f,%edx
 804c411:	74 8d                	je     804c3a0 <main+0x2780>
 804c413:	81 bd 94 ef ff ff f5 	cmpl   $0x1f5,-0x106c(%ebp)
 804c41a:	01 00 00 
 804c41d:	ba 44 4d 05 08       	mov    $0x8054d44,%edx
 804c422:	0f 84 78 ff ff ff    	je     804c3a0 <main+0x2780>
 804c428:	81 bd 94 ef ff ff 94 	cmpl   $0x194,-0x106c(%ebp)
 804c42f:	01 00 00 
 804c432:	ba 25 4d 05 08       	mov    $0x8054d25,%edx
 804c437:	0f 84 63 ff ff ff    	je     804c3a0 <main+0x2780>
 804c43d:	ba 54 4d 05 08       	mov    $0x8054d54,%edx
 804c442:	e9 59 ff ff ff       	jmp    804c3a0 <main+0x2780>
 804c447:	89 f6                	mov    %esi,%esi
 804c449:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804c450:	55                   	push   %ebp
 804c451:	89 e5                	mov    %esp,%ebp
 804c453:	83 ec 38             	sub    $0x38,%esp
 804c456:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 804c45a:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 804c45d:	8b 5d 18             	mov    0x18(%ebp),%ebx
 804c460:	89 75 f8             	mov    %esi,-0x8(%ebp)
 804c463:	8b 75 10             	mov    0x10(%ebp),%esi
 804c466:	89 7d fc             	mov    %edi,-0x4(%ebp)
 804c469:	8b 7d 0c             	mov    0xc(%ebp),%edi
 804c46c:	74 12                	je     804c480 <main+0x2860>
 804c46e:	31 c0                	xor    %eax,%eax
 804c470:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 804c473:	8b 75 f8             	mov    -0x8(%ebp),%esi
 804c476:	8b 7d fc             	mov    -0x4(%ebp),%edi
 804c479:	89 ec                	mov    %ebp,%esp
 804c47b:	5d                   	pop    %ebp
 804c47c:	c3                   	ret    
 804c47d:	8d 76 00             	lea    0x0(%esi),%esi
 804c480:	83 3e 02             	cmpl   $0x2,(%esi)
 804c483:	75 e9                	jne    804c46e <main+0x284e>
 804c485:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 804c48c:	8b 46 04             	mov    0x4(%esi),%eax
 804c48f:	c7 03 01 00 00 00    	movl   $0x1,(%ebx)
 804c495:	89 04 24             	mov    %eax,(%esp)
 804c498:	e8 27 d5 ff ff       	call   80499c4 <strlen@plt>
 804c49d:	89 c2                	mov    %eax,%edx
 804c49f:	8b 07                	mov    (%edi),%eax
 804c4a1:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 804c4a4:	89 04 24             	mov    %eax,(%esp)
 804c4a7:	e8 18 d5 ff ff       	call   80499c4 <strlen@plt>
 804c4ac:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 804c4af:	8d 44 02 01          	lea    0x1(%edx,%eax,1),%eax
 804c4b3:	89 04 24             	mov    %eax,(%esp)
 804c4b6:	e8 f9 d0 ff ff       	call   80495b4 <malloc@plt>
 804c4bb:	85 c0                	test   %eax,%eax
 804c4bd:	89 c1                	mov    %eax,%ecx
 804c4bf:	74 ad                	je     804c46e <main+0x284e>
 804c4c1:	8b 46 04             	mov    0x4(%esi),%eax
 804c4c4:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 804c4c7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 804c4cb:	8b 07                	mov    (%edi),%eax
 804c4cd:	89 0c 24             	mov    %ecx,(%esp)
 804c4d0:	c7 44 24 04 d8 4d 05 	movl   $0x8054dd8,0x4(%esp)
 804c4d7:	08 
 804c4d8:	89 44 24 08          	mov    %eax,0x8(%esp)
 804c4dc:	e8 23 d4 ff ff       	call   8049904 <sprintf@plt>
 804c4e1:	8b 45 08             	mov    0x8(%ebp),%eax
 804c4e4:	31 d2                	xor    %edx,%edx
 804c4e6:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 804c4e9:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 804c4f0:	e8 bb fd ff ff       	call   804c2b0 <main+0x2690>
 804c4f5:	b8 01 00 00 00       	mov    $0x1,%eax
 804c4fa:	c7 03 01 00 00 00    	movl   $0x1,(%ebx)
 804c500:	c7 43 04 01 00 00 00 	movl   $0x1,0x4(%ebx)
 804c507:	e9 64 ff ff ff       	jmp    804c470 <main+0x2850>
 804c50c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804c510:	55                   	push   %ebp
 804c511:	89 e5                	mov    %esp,%ebp
 804c513:	56                   	push   %esi
 804c514:	53                   	push   %ebx
 804c515:	89 c3                	mov    %eax,%ebx
 804c517:	81 ec 10 02 00 00    	sub    $0x210,%esp
 804c51d:	8d b5 f8 fd ff ff    	lea    -0x208(%ebp),%esi
 804c523:	c7 44 24 08 c4 4e 05 	movl   $0x8054ec4,0x8(%esp)
 804c52a:	08 
 804c52b:	c7 44 24 04 6a 4d 05 	movl   $0x8054d6a,0x4(%esp)
 804c532:	08 
 804c533:	89 34 24             	mov    %esi,(%esp)
 804c536:	e8 c9 d3 ff ff       	call   8049904 <sprintf@plt>
 804c53b:	89 f1                	mov    %esi,%ecx
 804c53d:	8b 11                	mov    (%ecx),%edx
 804c53f:	83 c1 04             	add    $0x4,%ecx
 804c542:	8d 82 ff fe fe fe    	lea    -0x1010101(%edx),%eax
 804c548:	f7 d2                	not    %edx
 804c54a:	21 d0                	and    %edx,%eax
 804c54c:	25 80 80 80 80       	and    $0x80808080,%eax
 804c551:	74 ea                	je     804c53d <main+0x291d>
 804c553:	a9 80 80 00 00       	test   $0x8080,%eax
 804c558:	74 1a                	je     804c574 <main+0x2954>
 804c55a:	00 c0                	add    %al,%al
 804c55c:	89 f2                	mov    %esi,%edx
 804c55e:	83 d9 03             	sbb    $0x3,%ecx
 804c561:	89 d8                	mov    %ebx,%eax
 804c563:	29 f1                	sub    %esi,%ecx
 804c565:	e8 e6 f8 ff ff       	call   804be50 <main+0x2230>
 804c56a:	81 c4 10 02 00 00    	add    $0x210,%esp
 804c570:	5b                   	pop    %ebx
 804c571:	5e                   	pop    %esi
 804c572:	5d                   	pop    %ebp
 804c573:	c3                   	ret    
 804c574:	c1 e8 10             	shr    $0x10,%eax
 804c577:	83 c1 02             	add    $0x2,%ecx
 804c57a:	eb de                	jmp    804c55a <main+0x293a>
 804c57c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804c580:	55                   	push   %ebp
 804c581:	89 e5                	mov    %esp,%ebp
 804c583:	56                   	push   %esi
 804c584:	53                   	push   %ebx
 804c585:	89 c3                	mov    %eax,%ebx
 804c587:	81 ec 40 01 00 00    	sub    $0x140,%esp
 804c58d:	8d b5 cc fe ff ff    	lea    -0x134(%ebp),%esi
 804c593:	c7 44 24 0c 18 4d 05 	movl   $0x8054d18,0xc(%esp)
 804c59a:	08 
 804c59b:	c7 44 24 08 c8 00 00 	movl   $0xc8,0x8(%esp)
 804c5a2:	00 
 804c5a3:	c7 44 24 04 77 4d 05 	movl   $0x8054d77,0x4(%esp)
 804c5aa:	08 
 804c5ab:	89 34 24             	mov    %esi,(%esp)
 804c5ae:	e8 51 d3 ff ff       	call   8049904 <sprintf@plt>
 804c5b3:	89 f1                	mov    %esi,%ecx
 804c5b5:	8b 11                	mov    (%ecx),%edx
 804c5b7:	83 c1 04             	add    $0x4,%ecx
 804c5ba:	8d 82 ff fe fe fe    	lea    -0x1010101(%edx),%eax
 804c5c0:	f7 d2                	not    %edx
 804c5c2:	21 d0                	and    %edx,%eax
 804c5c4:	25 80 80 80 80       	and    $0x80808080,%eax
 804c5c9:	74 ea                	je     804c5b5 <main+0x2995>
 804c5cb:	a9 80 80 00 00       	test   $0x8080,%eax
 804c5d0:	74 1a                	je     804c5ec <main+0x29cc>
 804c5d2:	00 c0                	add    %al,%al
 804c5d4:	89 f2                	mov    %esi,%edx
 804c5d6:	83 d9 03             	sbb    $0x3,%ecx
 804c5d9:	89 d8                	mov    %ebx,%eax
 804c5db:	29 f1                	sub    %esi,%ecx
 804c5dd:	e8 6e f8 ff ff       	call   804be50 <main+0x2230>
 804c5e2:	81 c4 40 01 00 00    	add    $0x140,%esp
 804c5e8:	5b                   	pop    %ebx
 804c5e9:	5e                   	pop    %esi
 804c5ea:	5d                   	pop    %ebp
 804c5eb:	c3                   	ret    
 804c5ec:	c1 e8 10             	shr    $0x10,%eax
 804c5ef:	83 c1 02             	add    $0x2,%ecx
 804c5f2:	eb de                	jmp    804c5d2 <main+0x29b2>
 804c5f4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804c5fa:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 804c600:	55                   	push   %ebp
 804c601:	b9 42 00 00 00       	mov    $0x42,%ecx
 804c606:	89 e5                	mov    %esp,%ebp
 804c608:	57                   	push   %edi
 804c609:	56                   	push   %esi
 804c60a:	53                   	push   %ebx
 804c60b:	8d 85 58 fc ff ff    	lea    -0x3a8(%ebp),%eax
 804c611:	81 ec 1c 05 00 00    	sub    $0x51c,%esp
 804c617:	89 85 04 fb ff ff    	mov    %eax,-0x4fc(%ebp)
 804c61d:	8b bd 04 fb ff ff    	mov    -0x4fc(%ebp),%edi
 804c623:	31 c0                	xor    %eax,%eax
 804c625:	8d 95 60 fc ff ff    	lea    -0x3a0(%ebp),%edx
 804c62b:	c7 05 50 8e 05 08 00 	movl   $0x0,0x8058e50
 804c632:	00 00 00 
 804c635:	f3 ab                	rep stos %eax,%es:(%edi)
 804c637:	c7 44 24 04 ec 4e 05 	movl   $0x8054eec,0x4(%esp)
 804c63e:	08 
 804c63f:	89 14 24             	mov    %edx,(%esp)
 804c642:	e8 29 20 00 00       	call   804e670 <main+0x4a50>
 804c647:	85 c0                	test   %eax,%eax
 804c649:	75 15                	jne    804c660 <main+0x2a40>
 804c64b:	81 c4 1c 05 00 00    	add    $0x51c,%esp
 804c651:	5b                   	pop    %ebx
 804c652:	5e                   	pop    %esi
 804c653:	5f                   	pop    %edi
 804c654:	5d                   	pop    %ebp
 804c655:	c3                   	ret    
 804c656:	8d 76 00             	lea    0x0(%esi),%esi
 804c659:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804c660:	8d bd 78 fc ff ff    	lea    -0x388(%ebp),%edi
 804c666:	c7 44 24 04 8a 4d 05 	movl   $0x8054d8a,0x4(%esp)
 804c66d:	08 
 804c66e:	89 3c 24             	mov    %edi,(%esp)
 804c671:	e8 fa 1f 00 00       	call   804e670 <main+0x4a50>
 804c676:	85 c0                	test   %eax,%eax
 804c678:	74 d1                	je     804c64b <main+0x2a2b>
 804c67a:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804c67f:	c7 44 24 08 99 4d 05 	movl   $0x8054d99,0x8(%esp)
 804c686:	08 
 804c687:	c7 44 24 04 9d 4d 05 	movl   $0x8054d9d,0x4(%esp)
 804c68e:	08 
 804c68f:	89 04 24             	mov    %eax,(%esp)
 804c692:	e8 29 0e 00 00       	call   804d4c0 <main+0x38a0>
 804c697:	e8 54 f5 ff ff       	call   804bbf0 <main+0x1fd0>
 804c69c:	85 c0                	test   %eax,%eax
 804c69e:	74 ab                	je     804c64b <main+0x2a2b>
 804c6a0:	89 85 5c fc ff ff    	mov    %eax,-0x3a4(%ebp)
 804c6a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 804c6a9:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 804c6b0:	00 
 804c6b1:	c7 44 24 0c 00 00 00 	movl   $0x40000000,0xc(%esp)
 804c6b8:	40 
 804c6b9:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 804c6c0:	89 44 24 08          	mov    %eax,0x8(%esp)
 804c6c4:	8b 45 08             	mov    0x8(%ebp),%eax
 804c6c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 804c6cb:	e8 e4 d0 ff ff       	call   80497b4 <ConnectAttach@plt>
 804c6d0:	83 f8 ff             	cmp    $0xffffffff,%eax
 804c6d3:	0f 84 72 ff ff ff    	je     804c64b <main+0x2a2b>
 804c6d9:	8d 95 90 fc ff ff    	lea    -0x370(%ebp),%edx
 804c6df:	89 54 24 0c          	mov    %edx,0xc(%esp)
 804c6e3:	8d bd 1c fd ff ff    	lea    -0x2e4(%ebp),%edi
 804c6e9:	8d 95 b0 fe ff ff    	lea    -0x150(%ebp),%edx
 804c6ef:	c7 85 b0 fe ff ff 04 	movl   $0x4,-0x150(%ebp)
 804c6f6:	00 00 00 
 804c6f9:	89 85 58 fc ff ff    	mov    %eax,-0x3a8(%ebp)
 804c6ff:	c7 44 24 10 80 00 00 	movl   $0x80,0x10(%esp)
 804c706:	00 
 804c707:	c7 44 24 08 a8 00 00 	movl   $0xa8,0x8(%esp)
 804c70e:	00 
 804c70f:	89 54 24 04          	mov    %edx,0x4(%esp)
 804c713:	89 04 24             	mov    %eax,(%esp)
 804c716:	e8 99 cd ff ff       	call   80494b4 <MsgSend@plt>
 804c71b:	89 bd 00 fb ff ff    	mov    %edi,-0x500(%ebp)
 804c721:	eb 0d                	jmp    804c730 <main+0x2b10>
 804c723:	90                   	nop
 804c724:	90                   	nop
 804c725:	90                   	nop
 804c726:	90                   	nop
 804c727:	90                   	nop
 804c728:	90                   	nop
 804c729:	90                   	nop
 804c72a:	90                   	nop
 804c72b:	90                   	nop
 804c72c:	90                   	nop
 804c72d:	90                   	nop
 804c72e:	90                   	nop
 804c72f:	90                   	nop
 804c730:	8d 85 b0 fe ff ff    	lea    -0x150(%ebp),%eax
 804c736:	89 44 24 0c          	mov    %eax,0xc(%esp)
 804c73a:	8b 85 58 fc ff ff    	mov    -0x3a8(%ebp),%eax
 804c740:	8d 95 08 fe ff ff    	lea    -0x1f8(%ebp),%edx
 804c746:	c7 85 08 fe ff ff 00 	movl   $0x0,-0x1f8(%ebp)
 804c74d:	00 00 00 
 804c750:	c7 44 24 10 a8 00 00 	movl   $0xa8,0x10(%esp)
 804c757:	00 
 804c758:	c7 44 24 08 a8 00 00 	movl   $0xa8,0x8(%esp)
 804c75f:	00 
 804c760:	89 54 24 04          	mov    %edx,0x4(%esp)
 804c764:	89 04 24             	mov    %eax,(%esp)
 804c767:	e8 48 cd ff ff       	call   80494b4 <MsgSend@plt>
 804c76c:	85 c0                	test   %eax,%eax
 804c76e:	0f 85 d7 fe ff ff    	jne    804c64b <main+0x2a2b>
 804c774:	83 bd b0 fe ff ff 01 	cmpl   $0x1,-0x150(%ebp)
 804c77b:	0f 85 ca fe ff ff    	jne    804c64b <main+0x2a2b>
 804c781:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 804c787:	80 bd d8 fe ff ff 00 	cmpb   $0x0,-0x128(%ebp)
 804c78e:	c7 85 3c fd ff ff c8 	movl   $0xc8,-0x2c4(%ebp)
 804c795:	00 00 00 
 804c798:	89 85 10 fd ff ff    	mov    %eax,-0x2f0(%ebp)
 804c79e:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 804c7a4:	89 85 14 fd ff ff    	mov    %eax,-0x2ec(%ebp)
 804c7aa:	8b 85 bc fe ff ff    	mov    -0x144(%ebp),%eax
 804c7b0:	89 85 18 fd ff ff    	mov    %eax,-0x2e8(%ebp)
 804c7b6:	8b 85 c0 fe ff ff    	mov    -0x140(%ebp),%eax
 804c7bc:	89 85 1c fd ff ff    	mov    %eax,-0x2e4(%ebp)
 804c7c2:	8b 85 c4 fe ff ff    	mov    -0x13c(%ebp),%eax
 804c7c8:	89 85 20 fd ff ff    	mov    %eax,-0x2e0(%ebp)
 804c7ce:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 804c7d4:	89 85 24 fd ff ff    	mov    %eax,-0x2dc(%ebp)
 804c7da:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 804c7e0:	89 85 28 fd ff ff    	mov    %eax,-0x2d8(%ebp)
 804c7e6:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 804c7ec:	89 85 2c fd ff ff    	mov    %eax,-0x2d4(%ebp)
 804c7f2:	0f 85 28 03 00 00    	jne    804cb20 <main+0x2f00>
 804c7f8:	c7 85 30 fd ff ff 00 	movl   $0x0,-0x2d0(%ebp)
 804c7ff:	00 00 00 
 804c802:	c7 85 34 fd ff ff ff 	movl   $0xffffffff,-0x2cc(%ebp)
 804c809:	ff ff ff 
 804c80c:	c7 85 38 fd ff ff 00 	movl   $0x0,-0x2c8(%ebp)
 804c813:	00 00 00 
 804c816:	c7 44 24 0c 20 be 04 	movl   $0x804be20,0xc(%esp)
 804c81d:	08 
 804c81e:	bf 60 78 05 08       	mov    $0x8057860,%edi
 804c823:	c7 44 24 08 10 d9 04 	movl   $0x804d910,0x8(%esp)
 804c82a:	08 
 804c82b:	c7 44 24 04 d0 d8 04 	movl   $0x804d8d0,0x4(%esp)
 804c832:	08 
 804c833:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 804c83a:	e8 c1 11 00 00       	call   804da00 <main+0x3de0>
 804c83f:	8b b5 00 fb ff ff    	mov    -0x500(%ebp),%esi
 804c845:	b9 10 00 00 00       	mov    $0x10,%ecx
 804c84a:	89 85 54 fd ff ff    	mov    %eax,-0x2ac(%ebp)
 804c850:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 804c852:	8d 7d e4             	lea    -0x1c(%ebp),%edi
 804c855:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 804c85c:	00 
 804c85d:	c7 44 24 04 b7 4d 05 	movl   $0x8054db7,0x4(%esp)
 804c864:	08 
 804c865:	0f 94 c0             	sete   %al
 804c868:	0f b6 c0             	movzbl %al,%eax
 804c86b:	89 85 40 fd ff ff    	mov    %eax,-0x2c0(%ebp)
 804c871:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804c876:	89 04 24             	mov    %eax,(%esp)
 804c879:	e8 72 0c 00 00       	call   804d4f0 <main+0x38d0>
 804c87e:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 804c885:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 804c88c:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 804c893:	c7 45 c4 01 00 00 00 	movl   $0x1,-0x3c(%ebp)
 804c89a:	c7 45 c8 0f 00 00 00 	movl   $0xf,-0x38(%ebp)
 804c8a1:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 804c8a4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 804c8a7:	89 7c 24 08          	mov    %edi,0x8(%esp)
 804c8ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 804c8af:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 804c8b6:	e8 69 cc ff ff       	call   8049524 <timer_create@plt>
 804c8bb:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 804c8be:	89 44 24 08          	mov    %eax,0x8(%esp)
 804c8c2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 804c8c5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 804c8cc:	00 
 804c8cd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 804c8d4:	00 
 804c8d5:	89 04 24             	mov    %eax,(%esp)
 804c8d8:	e8 37 d1 ff ff       	call   8049a14 <timer_settime@plt>
 804c8dd:	8b b5 d4 fe ff ff    	mov    -0x12c(%ebp),%esi
 804c8e3:	8d 95 60 fc ff ff    	lea    -0x3a0(%ebp),%edx
 804c8e9:	89 14 24             	mov    %edx,(%esp)
 804c8ec:	89 74 24 04          	mov    %esi,0x4(%esp)
 804c8f0:	e8 3b 21 00 00       	call   804ea30 <main+0x4e10>
 804c8f5:	89 34 24             	mov    %esi,(%esp)
 804c8f8:	89 c3                	mov    %eax,%ebx
 804c8fa:	e8 c5 d0 ff ff       	call   80499c4 <strlen@plt>
 804c8ff:	39 c3                	cmp    %eax,%ebx
 804c901:	0f 84 89 02 00 00    	je     804cb90 <main+0x2f70>
 804c907:	c7 85 3c fd ff ff 90 	movl   $0x190,-0x2c4(%ebp)
 804c90e:	01 00 00 
 804c911:	8b 9d 3c fd ff ff    	mov    -0x2c4(%ebp),%ebx
 804c917:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804c91c:	8d b5 2c fb ff ff    	lea    -0x4d4(%ebp),%esi
 804c922:	c7 85 3c fd ff ff c8 	movl   $0xc8,-0x2c4(%ebp)
 804c929:	00 00 00 
 804c92c:	c7 44 24 08 80 4e 05 	movl   $0x8054e80,0x8(%esp)
 804c933:	08 
 804c934:	c7 44 24 04 87 4e 05 	movl   $0x8054e87,0x4(%esp)
 804c93b:	08 
 804c93c:	89 04 24             	mov    %eax,(%esp)
 804c93f:	e8 7c 0b 00 00       	call   804d4c0 <main+0x38a0>
 804c944:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 804c948:	c7 44 24 04 91 4e 05 	movl   $0x8054e91,0x4(%esp)
 804c94f:	08 
 804c950:	89 34 24             	mov    %esi,(%esp)
 804c953:	89 44 24 08          	mov    %eax,0x8(%esp)
 804c957:	e8 a8 cf ff ff       	call   8049904 <sprintf@plt>
 804c95c:	89 f1                	mov    %esi,%ecx
 804c95e:	89 da                	mov    %ebx,%edx
 804c960:	8d 85 58 fc ff ff    	lea    -0x3a8(%ebp),%eax
 804c966:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 804c96d:	e8 3e f9 ff ff       	call   804c2b0 <main+0x2690>
 804c972:	81 bd 3c fd ff ff c8 	cmpl   $0xc8,-0x2c4(%ebp)
 804c979:	00 00 00 
 804c97c:	74 4a                	je     804c9c8 <main+0x2da8>
 804c97e:	81 fb 93 01 00 00    	cmp    $0x193,%ebx
 804c984:	b8 1b 4d 05 08       	mov    $0x8054d1b,%eax
 804c989:	74 25                	je     804c9b0 <main+0x2d90>
 804c98b:	0f 8f cf 03 00 00    	jg     804cd60 <main+0x3140>
 804c991:	81 fb c8 00 00 00    	cmp    $0xc8,%ebx
 804c997:	b8 18 4d 05 08       	mov    $0x8054d18,%eax
 804c99c:	74 12                	je     804c9b0 <main+0x2d90>
 804c99e:	81 fb 90 01 00 00    	cmp    $0x190,%ebx
 804c9a4:	b8 0c 4d 05 08       	mov    $0x8054d0c,%eax
 804c9a9:	74 05                	je     804c9b0 <main+0x2d90>
 804c9ab:	b8 54 4d 05 08       	mov    $0x8054d54,%eax
 804c9b0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 804c9b4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 804c9b8:	c7 44 24 04 77 4d 05 	movl   $0x8054d77,0x4(%esp)
 804c9bf:	08 
 804c9c0:	89 34 24             	mov    %esi,(%esp)
 804c9c3:	e8 3c cf ff ff       	call   8049904 <sprintf@plt>
 804c9c8:	89 f1                	mov    %esi,%ecx
 804c9ca:	8b 11                	mov    (%ecx),%edx
 804c9cc:	83 c1 04             	add    $0x4,%ecx
 804c9cf:	8d 82 ff fe fe fe    	lea    -0x1010101(%edx),%eax
 804c9d5:	f7 d2                	not    %edx
 804c9d7:	21 d0                	and    %edx,%eax
 804c9d9:	25 80 80 80 80       	and    $0x80808080,%eax
 804c9de:	74 ea                	je     804c9ca <main+0x2daa>
 804c9e0:	a9 80 80 00 00       	test   $0x8080,%eax
 804c9e5:	75 06                	jne    804c9ed <main+0x2dcd>
 804c9e7:	c1 e8 10             	shr    $0x10,%eax
 804c9ea:	83 c1 02             	add    $0x2,%ecx
 804c9ed:	00 c0                	add    %al,%al
 804c9ef:	89 f2                	mov    %esi,%edx
 804c9f1:	83 d9 03             	sbb    $0x3,%ecx
 804c9f4:	29 f1                	sub    %esi,%ecx
 804c9f6:	8d 85 58 fc ff ff    	lea    -0x3a8(%ebp),%eax
 804c9fc:	e8 4f f4 ff ff       	call   804be50 <main+0x2230>
 804ca01:	8b 85 10 fd ff ff    	mov    -0x2f0(%ebp),%eax
 804ca07:	c7 85 60 fd ff ff 03 	movl   $0x3,-0x2a0(%ebp)
 804ca0e:	00 00 00 
 804ca11:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 804ca18:	00 
 804ca19:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 804ca20:	00 
 804ca21:	89 85 64 fd ff ff    	mov    %eax,-0x29c(%ebp)
 804ca27:	8d 85 60 fd ff ff    	lea    -0x2a0(%ebp),%eax
 804ca2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 804ca31:	8b 85 58 fc ff ff    	mov    -0x3a8(%ebp),%eax
 804ca37:	c7 44 24 08 a8 00 00 	movl   $0xa8,0x8(%esp)
 804ca3e:	00 
 804ca3f:	89 04 24             	mov    %eax,(%esp)
 804ca42:	e8 6d ca ff ff       	call   80494b4 <MsgSend@plt>
 804ca47:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 804ca4a:	89 04 24             	mov    %eax,(%esp)
 804ca4d:	e8 52 cb ff ff       	call   80495a4 <timer_delete@plt>
 804ca52:	8b 85 58 fd ff ff    	mov    -0x2a8(%ebp),%eax
 804ca58:	89 04 24             	mov    %eax,(%esp)
 804ca5b:	e8 f4 cf ff ff       	call   8049a54 <free@plt>
 804ca60:	8b 85 54 fd ff ff    	mov    -0x2ac(%ebp),%eax
 804ca66:	c7 85 58 fd ff ff 00 	movl   $0x0,-0x2a8(%ebp)
 804ca6d:	00 00 00 
 804ca70:	89 04 24             	mov    %eax,(%esp)
 804ca73:	e8 18 10 00 00       	call   804da90 <main+0x3e70>
 804ca78:	8b 85 34 fd ff ff    	mov    -0x2cc(%ebp),%eax
 804ca7e:	c7 85 54 fd ff ff 00 	movl   $0x0,-0x2ac(%ebp)
 804ca85:	00 00 00 
 804ca88:	83 f8 ff             	cmp    $0xffffffff,%eax
 804ca8b:	74 12                	je     804ca9f <main+0x2e7f>
 804ca8d:	89 04 24             	mov    %eax,(%esp)
 804ca90:	e8 af cf ff ff       	call   8049a44 <close@plt>
 804ca95:	c7 85 34 fd ff ff ff 	movl   $0xffffffff,-0x2cc(%ebp)
 804ca9c:	ff ff ff 
 804ca9f:	8b 85 44 fd ff ff    	mov    -0x2bc(%ebp),%eax
 804caa5:	89 04 24             	mov    %eax,(%esp)
 804caa8:	e8 a7 cf ff ff       	call   8049a54 <free@plt>
 804caad:	8b 85 48 fd ff ff    	mov    -0x2b8(%ebp),%eax
 804cab3:	c7 85 44 fd ff ff 00 	movl   $0x0,-0x2bc(%ebp)
 804caba:	00 00 00 
 804cabd:	89 04 24             	mov    %eax,(%esp)
 804cac0:	e8 8f cf ff ff       	call   8049a54 <free@plt>
 804cac5:	8b 85 4c fd ff ff    	mov    -0x2b4(%ebp),%eax
 804cacb:	c7 85 48 fd ff ff 00 	movl   $0x0,-0x2b8(%ebp)
 804cad2:	00 00 00 
 804cad5:	89 04 24             	mov    %eax,(%esp)
 804cad8:	e8 77 cf ff ff       	call   8049a54 <free@plt>
 804cadd:	8b 85 50 fd ff ff    	mov    -0x2b0(%ebp),%eax
 804cae3:	c7 85 4c fd ff ff 00 	movl   $0x0,-0x2b4(%ebp)
 804caea:	00 00 00 
 804caed:	89 04 24             	mov    %eax,(%esp)
 804caf0:	e8 5f cf ff ff       	call   8049a54 <free@plt>
 804caf5:	8b 85 5c fd ff ff    	mov    -0x2a4(%ebp),%eax
 804cafb:	c7 85 50 fd ff ff 00 	movl   $0x0,-0x2b0(%ebp)
 804cb02:	00 00 00 
 804cb05:	89 04 24             	mov    %eax,(%esp)
 804cb08:	e8 47 cf ff ff       	call   8049a54 <free@plt>
 804cb0d:	c7 85 5c fd ff ff 00 	movl   $0x0,-0x2a4(%ebp)
 804cb14:	00 00 00 
 804cb17:	e9 14 fc ff ff       	jmp    804c730 <main+0x2b10>
 804cb1c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804cb20:	8d bd d8 fe ff ff    	lea    -0x128(%ebp),%edi
 804cb26:	89 bd 30 fd ff ff    	mov    %edi,-0x2d0(%ebp)
 804cb2c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 804cb33:	00 
 804cb34:	89 3c 24             	mov    %edi,(%esp)
 804cb37:	e8 98 ce ff ff       	call   80499d4 <open@plt>
 804cb3c:	8d 95 58 ff ff ff    	lea    -0xa8(%ebp),%edx
 804cb42:	89 54 24 04          	mov    %edx,0x4(%esp)
 804cb46:	89 85 34 fd ff ff    	mov    %eax,-0x2cc(%ebp)
 804cb4c:	89 04 24             	mov    %eax,(%esp)
 804cb4f:	e8 40 cb ff ff       	call   8049694 <fstat@plt>
 804cb54:	c7 44 24 04 a7 4d 05 	movl   $0x8054da7,0x4(%esp)
 804cb5b:	08 
 804cb5c:	c7 04 24 80 79 05 08 	movl   $0x8057980,(%esp)
 804cb63:	83 f8 01             	cmp    $0x1,%eax
 804cb66:	19 c0                	sbb    %eax,%eax
 804cb68:	23 85 60 ff ff ff    	and    -0xa0(%ebp),%eax
 804cb6e:	89 85 38 fd ff ff    	mov    %eax,-0x2c8(%ebp)
 804cb74:	89 44 24 0c          	mov    %eax,0xc(%esp)
 804cb78:	8b 85 30 fd ff ff    	mov    -0x2d0(%ebp),%eax
 804cb7e:	89 44 24 08          	mov    %eax,0x8(%esp)
 804cb82:	e8 1d cb ff ff       	call   80496a4 <fprintf@plt>
 804cb87:	e9 8a fc ff ff       	jmp    804c816 <main+0x2bf6>
 804cb8c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804cb90:	8d bd 60 fc ff ff    	lea    -0x3a0(%ebp),%edi
 804cb96:	89 3c 24             	mov    %edi,(%esp)
 804cb99:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 804cba0:	00 
 804cba1:	e8 5a 1c 00 00       	call   804e800 <main+0x4be0>
 804cba6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 804cbad:	00 
 804cbae:	89 85 44 fd ff ff    	mov    %eax,-0x2bc(%ebp)
 804cbb4:	89 c7                	mov    %eax,%edi
 804cbb6:	8d 85 60 fc ff ff    	lea    -0x3a0(%ebp),%eax
 804cbbc:	89 04 24             	mov    %eax,(%esp)
 804cbbf:	e8 3c 1c 00 00       	call   804e800 <main+0x4be0>
 804cbc4:	8d 95 60 fc ff ff    	lea    -0x3a0(%ebp),%edx
 804cbca:	89 14 24             	mov    %edx,(%esp)
 804cbcd:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 804cbd4:	00 
 804cbd5:	89 c3                	mov    %eax,%ebx
 804cbd7:	89 85 48 fd ff ff    	mov    %eax,-0x2b8(%ebp)
 804cbdd:	e8 1e 1c 00 00       	call   804e800 <main+0x4be0>
 804cbe2:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 804cbe9:	00 
 804cbea:	89 85 4c fd ff ff    	mov    %eax,-0x2b4(%ebp)
 804cbf0:	8d 85 60 fc ff ff    	lea    -0x3a0(%ebp),%eax
 804cbf6:	89 04 24             	mov    %eax,(%esp)
 804cbf9:	e8 02 1c 00 00       	call   804e800 <main+0x4be0>
 804cbfe:	85 db                	test   %ebx,%ebx
 804cc00:	89 85 50 fd ff ff    	mov    %eax,-0x2b0(%ebp)
 804cc06:	0f 84 fb fc ff ff    	je     804c907 <main+0x2ce7>
 804cc0c:	85 ff                	test   %edi,%edi
 804cc0e:	0f 84 f3 fc ff ff    	je     804c907 <main+0x2ce7>
 804cc14:	85 c0                	test   %eax,%eax
 804cc16:	0f 84 eb fc ff ff    	je     804c907 <main+0x2ce7>
 804cc1c:	89 34 24             	mov    %esi,(%esp)
 804cc1f:	31 ff                	xor    %edi,%edi
 804cc21:	e8 9e cd ff ff       	call   80499c4 <strlen@plt>
 804cc26:	8d 5c 06 02          	lea    0x2(%esi,%eax,1),%ebx
 804cc2a:	b8 01 00 00 00       	mov    $0x1,%eax
 804cc2f:	80 3b 00             	cmpb   $0x0,(%ebx)
 804cc32:	74 23                	je     804cc57 <main+0x3037>
 804cc34:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804cc3a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 804cc40:	89 1c 24             	mov    %ebx,(%esp)
 804cc43:	83 c7 01             	add    $0x1,%edi
 804cc46:	e8 79 cd ff ff       	call   80499c4 <strlen@plt>
 804cc4b:	8d 5c 03 02          	lea    0x2(%ebx,%eax,1),%ebx
 804cc4f:	80 3b 00             	cmpb   $0x0,(%ebx)
 804cc52:	75 ec                	jne    804cc40 <main+0x3020>
 804cc54:	8d 47 01             	lea    0x1(%edi),%eax
 804cc57:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 804cc5e:	00 
 804cc5f:	31 ff                	xor    %edi,%edi
 804cc61:	89 04 24             	mov    %eax,(%esp)
 804cc64:	e8 fb c9 ff ff       	call   8049664 <calloc@plt>
 804cc69:	89 34 24             	mov    %esi,(%esp)
 804cc6c:	89 85 58 fd ff ff    	mov    %eax,-0x2a8(%ebp)
 804cc72:	89 85 10 fb ff ff    	mov    %eax,-0x4f0(%ebp)
 804cc78:	e8 47 cd ff ff       	call   80499c4 <strlen@plt>
 804cc7d:	8b 95 10 fb ff ff    	mov    -0x4f0(%ebp),%edx
 804cc83:	8d 5c 06 02          	lea    0x2(%esi,%eax,1),%ebx
 804cc87:	31 c0                	xor    %eax,%eax
 804cc89:	80 3b 00             	cmpb   $0x0,(%ebx)
 804cc8c:	75 1f                	jne    804ccad <main+0x308d>
 804cc8e:	e9 1a 01 00 00       	jmp    804cdad <main+0x318d>
 804cc93:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804cc99:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804cca0:	8d 5c 03 02          	lea    0x2(%ebx,%eax,1),%ebx
 804cca4:	80 3b 00             	cmpb   $0x0,(%ebx)
 804cca7:	0f 84 f3 00 00 00    	je     804cda0 <main+0x3180>
 804ccad:	8d 95 78 fc ff ff    	lea    -0x388(%ebp),%edx
 804ccb3:	89 14 24             	mov    %edx,(%esp)
 804ccb6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 804ccba:	e8 71 1d 00 00       	call   804ea30 <main+0x4e10>
 804ccbf:	89 1c 24             	mov    %ebx,(%esp)
 804ccc2:	89 c6                	mov    %eax,%esi
 804ccc4:	e8 fb cc ff ff       	call   80499c4 <strlen@plt>
 804ccc9:	39 c6                	cmp    %eax,%esi
 804cccb:	75 d3                	jne    804cca0 <main+0x3080>
 804cccd:	8d 85 78 fc ff ff    	lea    -0x388(%ebp),%eax
 804ccd3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 804ccda:	00 
 804ccdb:	89 04 24             	mov    %eax,(%esp)
 804ccde:	e8 1d 1b 00 00       	call   804e800 <main+0x4be0>
 804cce3:	8d 95 78 fc ff ff    	lea    -0x388(%ebp),%edx
 804cce9:	89 14 24             	mov    %edx,(%esp)
 804ccec:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 804ccf3:	00 
 804ccf4:	89 c6                	mov    %eax,%esi
 804ccf6:	e8 05 1b 00 00       	call   804e800 <main+0x4be0>
 804ccfb:	85 c0                	test   %eax,%eax
 804ccfd:	89 c2                	mov    %eax,%edx
 804ccff:	74 36                	je     804cd37 <main+0x3117>
 804cd01:	85 f6                	test   %esi,%esi
 804cd03:	74 32                	je     804cd37 <main+0x3117>
 804cd05:	89 44 24 08          	mov    %eax,0x8(%esp)
 804cd09:	8b 85 54 fd ff ff    	mov    -0x2ac(%ebp),%eax
 804cd0f:	89 95 10 fb ff ff    	mov    %edx,-0x4f0(%ebp)
 804cd15:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 804cd1c:	00 
 804cd1d:	89 74 24 04          	mov    %esi,0x4(%esp)
 804cd21:	89 04 24             	mov    %eax,(%esp)
 804cd24:	e8 07 0c 00 00       	call   804d930 <main+0x3d10>
 804cd29:	8b 95 10 fb ff ff    	mov    -0x4f0(%ebp),%edx
 804cd2f:	85 c0                	test   %eax,%eax
 804cd31:	0f 85 09 01 00 00    	jne    804ce40 <main+0x3220>
 804cd37:	89 95 10 fb ff ff    	mov    %edx,-0x4f0(%ebp)
 804cd3d:	89 34 24             	mov    %esi,(%esp)
 804cd40:	e8 0f cd ff ff       	call   8049a54 <free@plt>
 804cd45:	8b 95 10 fb ff ff    	mov    -0x4f0(%ebp),%edx
 804cd4b:	89 14 24             	mov    %edx,(%esp)
 804cd4e:	e8 01 cd ff ff       	call   8049a54 <free@plt>
 804cd53:	89 1c 24             	mov    %ebx,(%esp)
 804cd56:	e8 69 cc ff ff       	call   80499c4 <strlen@plt>
 804cd5b:	e9 40 ff ff ff       	jmp    804cca0 <main+0x3080>
 804cd60:	81 fb 9e 01 00 00    	cmp    $0x19e,%ebx
 804cd66:	b8 2f 4d 05 08       	mov    $0x8054d2f,%eax
 804cd6b:	0f 84 3f fc ff ff    	je     804c9b0 <main+0x2d90>
 804cd71:	81 fb f5 01 00 00    	cmp    $0x1f5,%ebx
 804cd77:	b8 44 4d 05 08       	mov    $0x8054d44,%eax
 804cd7c:	0f 84 2e fc ff ff    	je     804c9b0 <main+0x2d90>
 804cd82:	81 fb 94 01 00 00    	cmp    $0x194,%ebx
 804cd88:	b8 25 4d 05 08       	mov    $0x8054d25,%eax
 804cd8d:	0f 85 18 fc ff ff    	jne    804c9ab <main+0x2d8b>
 804cd93:	e9 18 fc ff ff       	jmp    804c9b0 <main+0x2d90>
 804cd98:	90                   	nop
 804cd99:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804cda0:	8b 95 58 fd ff ff    	mov    -0x2a8(%ebp),%edx
 804cda6:	8d 04 bd 00 00 00 00 	lea    0x0(,%edi,4),%eax
 804cdad:	8b 9d 3c fd ff ff    	mov    -0x2c4(%ebp),%ebx
 804cdb3:	c7 04 02 00 00 00 00 	movl   $0x0,(%edx,%eax,1)
 804cdba:	81 fb c8 00 00 00    	cmp    $0xc8,%ebx
 804cdc0:	0f 85 51 fb ff ff    	jne    804c917 <main+0x2cf7>
 804cdc6:	8b 85 5c fc ff ff    	mov    -0x3a4(%ebp),%eax
 804cdcc:	89 04 24             	mov    %eax,(%esp)
 804cdcf:	e8 f0 cb ff ff       	call   80499c4 <strlen@plt>
 804cdd4:	8b 9d 48 fd ff ff    	mov    -0x2b8(%ebp),%ebx
 804cdda:	89 1c 24             	mov    %ebx,(%esp)
 804cddd:	89 c6                	mov    %eax,%esi
 804cddf:	e8 e0 cb ff ff       	call   80499c4 <strlen@plt>
 804cde4:	80 3b 00             	cmpb   $0x0,(%ebx)
 804cde7:	8d 74 06 01          	lea    0x1(%esi,%eax,1),%esi
 804cdeb:	74 07                	je     804cdf4 <main+0x31d4>
 804cded:	80 7c 03 ff 2f       	cmpb   $0x2f,-0x1(%ebx,%eax,1)
 804cdf2:	74 65                	je     804ce59 <main+0x3239>
 804cdf4:	31 db                	xor    %ebx,%ebx
 804cdf6:	81 fe 00 04 00 00    	cmp    $0x400,%esi
 804cdfc:	0f 8e 8e 00 00 00    	jle    804ce90 <main+0x3270>
 804ce02:	c7 85 3c fd ff ff 9e 	movl   $0x19e,-0x2c4(%ebp)
 804ce09:	01 00 00 
 804ce0c:	31 f6                	xor    %esi,%esi
 804ce0e:	31 db                	xor    %ebx,%ebx
 804ce10:	89 1c 24             	mov    %ebx,(%esp)
 804ce13:	e8 3c cc ff ff       	call   8049a54 <free@plt>
 804ce18:	89 34 24             	mov    %esi,(%esp)
 804ce1b:	e8 34 cc ff ff       	call   8049a54 <free@plt>
 804ce20:	8b 9d 3c fd ff ff    	mov    -0x2c4(%ebp),%ebx
 804ce26:	81 fb c8 00 00 00    	cmp    $0xc8,%ebx
 804ce2c:	0f 84 cf fb ff ff    	je     804ca01 <main+0x2de1>
 804ce32:	e9 e0 fa ff ff       	jmp    804c917 <main+0x2cf7>
 804ce37:	89 f6                	mov    %esi,%esi
 804ce39:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804ce40:	8b 85 58 fd ff ff    	mov    -0x2a8(%ebp),%eax
 804ce46:	89 34 b8             	mov    %esi,(%eax,%edi,4)
 804ce49:	83 c7 01             	add    $0x1,%edi
 804ce4c:	89 1c 24             	mov    %ebx,(%esp)
 804ce4f:	e8 70 cb ff ff       	call   80499c4 <strlen@plt>
 804ce54:	e9 47 fe ff ff       	jmp    804cca0 <main+0x3080>
 804ce59:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 804ce5e:	c7 44 24 08 c4 4d 05 	movl   $0x8054dc4,0x8(%esp)
 804ce65:	08 
 804ce66:	c7 44 24 04 cf 4d 05 	movl   $0x8054dcf,0x4(%esp)
 804ce6d:	08 
 804ce6e:	89 04 24             	mov    %eax,(%esp)
 804ce71:	e8 4a 06 00 00       	call   804d4c0 <main+0x38a0>
 804ce76:	89 04 24             	mov    %eax,(%esp)
 804ce79:	89 c3                	mov    %eax,%ebx
 804ce7b:	e8 44 cb ff ff       	call   80499c4 <strlen@plt>
 804ce80:	8d 34 30             	lea    (%eax,%esi,1),%esi
 804ce83:	e9 6e ff ff ff       	jmp    804cdf6 <main+0x31d6>
 804ce88:	90                   	nop
 804ce89:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804ce90:	83 c6 01             	add    $0x1,%esi
 804ce93:	89 34 24             	mov    %esi,(%esp)
 804ce96:	e8 19 c7 ff ff       	call   80495b4 <malloc@plt>
 804ce9b:	85 c0                	test   %eax,%eax
 804ce9d:	89 c6                	mov    %eax,%esi
 804ce9f:	89 c7                	mov    %eax,%edi
 804cea1:	0f 84 b3 00 00 00    	je     804cf5a <main+0x333a>
 804cea7:	85 db                	test   %ebx,%ebx
 804cea9:	0f 84 a1 00 00 00    	je     804cf50 <main+0x3330>
 804ceaf:	8b 85 48 fd ff ff    	mov    -0x2b8(%ebp),%eax
 804ceb5:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 804ceb9:	c7 44 24 04 d5 4d 05 	movl   $0x8054dd5,0x4(%esp)
 804cec0:	08 
 804cec1:	89 3c 24             	mov    %edi,(%esp)
 804cec4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 804cec8:	8b 85 5c fc ff ff    	mov    -0x3a4(%ebp),%eax
 804cece:	89 44 24 08          	mov    %eax,0x8(%esp)
 804ced2:	e8 2d ca ff ff       	call   8049904 <sprintf@plt>
 804ced7:	89 f8                	mov    %edi,%eax
 804ced9:	e8 12 ed ff ff       	call   804bbf0 <main+0x1fd0>
 804cede:	85 c0                	test   %eax,%eax
 804cee0:	89 c3                	mov    %eax,%ebx
 804cee2:	74 25                	je     804cf09 <main+0x32e9>
 804cee4:	8b 85 5c fc ff ff    	mov    -0x3a4(%ebp),%eax
 804ceea:	89 04 24             	mov    %eax,(%esp)
 804ceed:	e8 d2 ca ff ff       	call   80499c4 <strlen@plt>
 804cef2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 804cef6:	89 3c 24             	mov    %edi,(%esp)
 804cef9:	83 c0 01             	add    $0x1,%eax
 804cefc:	89 44 24 08          	mov    %eax,0x8(%esp)
 804cf00:	e8 3f c8 ff ff       	call   8049744 <strncmp@plt>
 804cf05:	85 c0                	test   %eax,%eax
 804cf07:	74 0f                	je     804cf18 <main+0x32f8>
 804cf09:	c7 85 3c fd ff ff 94 	movl   $0x194,-0x2c4(%ebp)
 804cf10:	01 00 00 
 804cf13:	e9 f8 fe ff ff       	jmp    804ce10 <main+0x31f0>
 804cf18:	8d 85 2c fb ff ff    	lea    -0x4d4(%ebp),%eax
 804cf1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 804cf22:	89 1c 24             	mov    %ebx,(%esp)
 804cf25:	e8 1a ca ff ff       	call   8049944 <stat@plt>
 804cf2a:	83 f8 ff             	cmp    $0xffffffff,%eax
 804cf2d:	74 da                	je     804cf09 <main+0x32e9>
 804cf2f:	8b 85 58 fb ff ff    	mov    -0x4a8(%ebp),%eax
 804cf35:	25 00 f0 00 00       	and    $0xf000,%eax
 804cf3a:	3d 00 80 00 00       	cmp    $0x8000,%eax
 804cf3f:	74 2a                	je     804cf6b <main+0x334b>
 804cf41:	c7 85 3c fd ff ff 93 	movl   $0x193,-0x2c4(%ebp)
 804cf48:	01 00 00 
 804cf4b:	e9 c0 fe ff ff       	jmp    804ce10 <main+0x31f0>
 804cf50:	bb 89 4d 05 08       	mov    $0x8054d89,%ebx
 804cf55:	e9 55 ff ff ff       	jmp    804ceaf <main+0x328f>
 804cf5a:	c7 85 3c fd ff ff f4 	movl   $0x1f4,-0x2c4(%ebp)
 804cf61:	01 00 00 
 804cf64:	31 db                	xor    %ebx,%ebx
 804cf66:	e9 a5 fe ff ff       	jmp    804ce10 <main+0x31f0>
 804cf6b:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 804cf72:	00 
 804cf73:	89 1c 24             	mov    %ebx,(%esp)
 804cf76:	e8 e9 c9 ff ff       	call   8049964 <access@plt>
 804cf7b:	85 c0                	test   %eax,%eax
 804cf7d:	75 c2                	jne    804cf41 <main+0x3321>
 804cf7f:	89 1c 24             	mov    %ebx,(%esp)
 804cf82:	e8 3d ca ff ff       	call   80499c4 <strlen@plt>
 804cf87:	83 f8 05             	cmp    $0x5,%eax
 804cf8a:	76 18                	jbe    804cfa4 <main+0x3384>
 804cf8c:	8d 44 03 fa          	lea    -0x6(%ebx,%eax,1),%eax
 804cf90:	c7 44 24 04 dd 4d 05 	movl   $0x8054ddd,0x4(%esp)
 804cf97:	08 
 804cf98:	89 04 24             	mov    %eax,(%esp)
 804cf9b:	e8 34 c9 ff ff       	call   80498d4 <strcmp@plt>
 804cfa0:	85 c0                	test   %eax,%eax
 804cfa2:	74 1e                	je     804cfc2 <main+0x33a2>
 804cfa4:	89 d9                	mov    %ebx,%ecx
 804cfa6:	ba c8 00 00 00       	mov    $0xc8,%edx
 804cfab:	8d 85 58 fc ff ff    	lea    -0x3a8(%ebp),%eax
 804cfb1:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 804cfb8:	e8 f3 f2 ff ff       	call   804c2b0 <main+0x2690>
 804cfbd:	e9 4e fe ff ff       	jmp    804ce10 <main+0x31f0>
 804cfc2:	c7 44 24 04 e4 4d 05 	movl   $0x8054de4,0x4(%esp)
 804cfc9:	08 
 804cfca:	89 1c 24             	mov    %ebx,(%esp)
 804cfcd:	e8 62 c8 ff ff       	call   8049834 <fopen@plt>
 804cfd2:	85 c0                	test   %eax,%eax
 804cfd4:	89 85 1c fb ff ff    	mov    %eax,-0x4e4(%ebp)
 804cfda:	0f 84 29 ff ff ff    	je     804cf09 <main+0x32e9>
 804cfe0:	8b bd 1c fb ff ff    	mov    -0x4e4(%ebp),%edi
 804cfe6:	89 3c 24             	mov    %edi,(%esp)
 804cfe9:	e8 22 28 00 00       	call   804f810 <main+0x5bf0>
 804cfee:	85 c0                	test   %eax,%eax
 804cff0:	89 85 20 fb ff ff    	mov    %eax,-0x4e0(%ebp)
 804cff6:	74 49                	je     804d041 <main+0x3421>
 804cff8:	8d 85 58 fc ff ff    	lea    -0x3a8(%ebp),%eax
 804cffe:	e8 7d f5 ff ff       	call   804c580 <main+0x2960>
 804d003:	8d 45 a0             	lea    -0x60(%ebp),%eax
 804d006:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 804d00a:	89 04 24             	mov    %eax,(%esp)
 804d00d:	e8 3e 4b 00 00       	call   8051b50 <main+0x7f30>
 804d012:	85 c0                	test   %eax,%eax
 804d014:	75 37                	jne    804d04d <main+0x342d>
 804d016:	c7 85 3c fd ff ff f4 	movl   $0x1f4,-0x2c4(%ebp)
 804d01d:	01 00 00 
 804d020:	8b 95 20 fb ff ff    	mov    -0x4e0(%ebp),%edx
 804d026:	89 14 24             	mov    %edx,(%esp)
 804d029:	e8 f2 35 00 00       	call   8050620 <main+0x6a00>
 804d02e:	8b 95 1c fb ff ff    	mov    -0x4e4(%ebp),%edx
 804d034:	89 14 24             	mov    %edx,(%esp)
 804d037:	e8 48 c8 ff ff       	call   8049884 <fclose@plt>
 804d03c:	e9 cf fd ff ff       	jmp    804ce10 <main+0x31f0>
 804d041:	c7 85 3c fd ff ff f4 	movl   $0x1f4,-0x2c4(%ebp)
 804d048:	01 00 00 
 804d04b:	eb e1                	jmp    804d02e <main+0x340e>
 804d04d:	8d 95 58 fc ff ff    	lea    -0x3a8(%ebp),%edx
 804d053:	8d 7d a0             	lea    -0x60(%ebp),%edi
 804d056:	89 54 24 0c          	mov    %edx,0xc(%esp)
 804d05a:	c7 44 24 08 60 c2 04 	movl   $0x804c260,0x8(%esp)
 804d061:	08 
 804d062:	c7 44 24 04 e7 4d 05 	movl   $0x8054de7,0x4(%esp)
 804d069:	08 
 804d06a:	89 3c 24             	mov    %edi,(%esp)
 804d06d:	e8 8e 49 00 00       	call   8051a00 <main+0x7de0>
 804d072:	85 c0                	test   %eax,%eax
 804d074:	75 17                	jne    804d08d <main+0x346d>
 804d076:	c7 85 3c fd ff ff f4 	movl   $0x1f4,-0x2c4(%ebp)
 804d07d:	01 00 00 
 804d080:	8d 45 a0             	lea    -0x60(%ebp),%eax
 804d083:	89 04 24             	mov    %eax,(%esp)
 804d086:	e8 75 4a 00 00       	call   8051b00 <main+0x7ee0>
 804d08b:	eb 93                	jmp    804d020 <main+0x3400>
 804d08d:	8d 85 58 fc ff ff    	lea    -0x3a8(%ebp),%eax
 804d093:	8d 55 a0             	lea    -0x60(%ebp),%edx
 804d096:	89 44 24 0c          	mov    %eax,0xc(%esp)
 804d09a:	c7 44 24 08 e0 c1 04 	movl   $0x804c1e0,0x8(%esp)
 804d0a1:	08 
 804d0a2:	c7 44 24 04 ee 4d 05 	movl   $0x8054dee,0x4(%esp)
 804d0a9:	08 
 804d0aa:	89 14 24             	mov    %edx,(%esp)
 804d0ad:	e8 4e 49 00 00       	call   8051a00 <main+0x7de0>
 804d0b2:	85 c0                	test   %eax,%eax
 804d0b4:	74 c0                	je     804d076 <main+0x3456>
 804d0b6:	8d 45 a0             	lea    -0x60(%ebp),%eax
 804d0b9:	8d bd 58 fc ff ff    	lea    -0x3a8(%ebp),%edi
 804d0bf:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 804d0c3:	c7 44 24 08 c0 bf 04 	movl   $0x804bfc0,0x8(%esp)
 804d0ca:	08 
 804d0cb:	c7 44 24 04 f3 4d 05 	movl   $0x8054df3,0x4(%esp)
 804d0d2:	08 
 804d0d3:	89 04 24             	mov    %eax,(%esp)
 804d0d6:	e8 25 49 00 00       	call   8051a00 <main+0x7de0>
 804d0db:	85 c0                	test   %eax,%eax
 804d0dd:	74 97                	je     804d076 <main+0x3456>
 804d0df:	8d 95 58 fc ff ff    	lea    -0x3a8(%ebp),%edx
 804d0e5:	8d 7d a0             	lea    -0x60(%ebp),%edi
 804d0e8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 804d0ec:	c7 44 24 08 c0 bd 04 	movl   $0x804bdc0,0x8(%esp)
 804d0f3:	08 
 804d0f4:	c7 44 24 04 fc 4d 05 	movl   $0x8054dfc,0x4(%esp)
 804d0fb:	08 
 804d0fc:	89 3c 24             	mov    %edi,(%esp)
 804d0ff:	e8 fc 48 00 00       	call   8051a00 <main+0x7de0>
 804d104:	85 c0                	test   %eax,%eax
 804d106:	0f 84 6a ff ff ff    	je     804d076 <main+0x3456>
 804d10c:	8d 85 58 fc ff ff    	lea    -0x3a8(%ebp),%eax
 804d112:	8d 55 a0             	lea    -0x60(%ebp),%edx
 804d115:	89 44 24 0c          	mov    %eax,0xc(%esp)
 804d119:	c7 44 24 08 10 c0 04 	movl   $0x804c010,0x8(%esp)
 804d120:	08 
 804d121:	c7 44 24 04 13 4e 05 	movl   $0x8054e13,0x4(%esp)
 804d128:	08 
 804d129:	89 14 24             	mov    %edx,(%esp)
 804d12c:	e8 cf 48 00 00       	call   8051a00 <main+0x7de0>
 804d131:	85 c0                	test   %eax,%eax
 804d133:	0f 84 3d ff ff ff    	je     804d076 <main+0x3456>
 804d139:	8d 45 a0             	lea    -0x60(%ebp),%eax
 804d13c:	8d bd 58 fc ff ff    	lea    -0x3a8(%ebp),%edi
 804d142:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 804d146:	c7 44 24 08 50 c4 04 	movl   $0x804c450,0x8(%esp)
 804d14d:	08 
 804d14e:	c7 44 24 04 1f 4e 05 	movl   $0x8054e1f,0x4(%esp)
 804d155:	08 
 804d156:	89 04 24             	mov    %eax,(%esp)
 804d159:	e8 a2 48 00 00       	call   8051a00 <main+0x7de0>
 804d15e:	85 c0                	test   %eax,%eax
 804d160:	0f 84 10 ff ff ff    	je     804d076 <main+0x3456>
 804d166:	8d 95 58 fc ff ff    	lea    -0x3a8(%ebp),%edx
 804d16c:	8d 7d a0             	lea    -0x60(%ebp),%edi
 804d16f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 804d173:	c7 44 24 08 50 bd 04 	movl   $0x804bd50,0x8(%esp)
 804d17a:	08 
 804d17b:	c7 44 24 04 29 4e 05 	movl   $0x8054e29,0x4(%esp)
 804d182:	08 
 804d183:	89 3c 24             	mov    %edi,(%esp)
 804d186:	e8 75 48 00 00       	call   8051a00 <main+0x7de0>
 804d18b:	c7 85 24 fb ff ff 00 	movl   $0x0,-0x4dc(%ebp)
 804d192:	00 00 00 
 804d195:	85 c0                	test   %eax,%eax
 804d197:	0f 84 d9 fe ff ff    	je     804d076 <main+0x3456>
 804d19d:	89 9d 18 fb ff ff    	mov    %ebx,-0x4e8(%ebp)
 804d1a3:	8b 85 58 fd ff ff    	mov    -0x2a8(%ebp),%eax
 804d1a9:	8b bd 24 fb ff ff    	mov    -0x4dc(%ebp),%edi
 804d1af:	8b 1c 38             	mov    (%eax,%edi,1),%ebx
 804d1b2:	85 db                	test   %ebx,%ebx
 804d1b4:	0f 84 8a 00 00 00    	je     804d244 <main+0x3624>
 804d1ba:	8b 85 54 fd ff ff    	mov    -0x2ac(%ebp),%eax
 804d1c0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 804d1c4:	89 04 24             	mov    %eax,(%esp)
 804d1c7:	e8 54 06 00 00       	call   804d820 <main+0x3c00>
 804d1cc:	85 c0                	test   %eax,%eax
 804d1ce:	89 85 14 fb ff ff    	mov    %eax,-0x4ec(%ebp)
 804d1d4:	0f 84 ce 02 00 00    	je     804d4a8 <main+0x3888>
 804d1da:	31 c0                	xor    %eax,%eax
 804d1dc:	83 c9 ff             	or     $0xffffffff,%ecx
 804d1df:	89 df                	mov    %ebx,%edi
 804d1e1:	f2 ae                	repnz scas %es:(%edi),%al
 804d1e3:	f7 d1                	not    %ecx
 804d1e5:	83 c1 05             	add    $0x5,%ecx
 804d1e8:	89 0c 24             	mov    %ecx,(%esp)
 804d1eb:	e8 c4 c3 ff ff       	call   80495b4 <malloc@plt>
 804d1f0:	85 c0                	test   %eax,%eax
 804d1f2:	89 c7                	mov    %eax,%edi
 804d1f4:	0f 84 ba 02 00 00    	je     804d4b4 <main+0x3894>
 804d1fa:	c7 00 48 54 54 50    	movl   $0x50545448,(%eax)
 804d200:	66 c7 40 04 5f 00    	movw   $0x5f,0x4(%eax)
 804d206:	31 c0                	xor    %eax,%eax
 804d208:	0f b6 14 03          	movzbl (%ebx,%eax,1),%edx
 804d20c:	84 d2                	test   %dl,%dl
 804d20e:	0f 84 6a 02 00 00    	je     804d47e <main+0x385e>
 804d214:	8b 0d fc 78 05 08    	mov    0x80578fc,%ecx
 804d21a:	0f be d2             	movsbl %dl,%edx
 804d21d:	0f bf 0c 51          	movswl (%ecx,%edx,2),%ecx
 804d221:	81 e1 32 02 00 00    	and    $0x232,%ecx
 804d227:	0f 85 42 02 00 00    	jne    804d46f <main+0x384f>
 804d22d:	83 fa 5f             	cmp    $0x5f,%edx
 804d230:	b9 5f 00 00 00       	mov    $0x5f,%ecx
 804d235:	0f 84 34 02 00 00    	je     804d46f <main+0x384f>
 804d23b:	88 4c 07 05          	mov    %cl,0x5(%edi,%eax,1)
 804d23f:	83 c0 01             	add    $0x1,%eax
 804d242:	eb c4                	jmp    804d208 <main+0x35e8>
 804d244:	8b 85 48 fd ff ff    	mov    -0x2b8(%ebp),%eax
 804d24a:	8b 9d 18 fb ff ff    	mov    -0x4e8(%ebp),%ebx
 804d250:	c7 44 24 04 32 4e 05 	movl   $0x8054e32,0x4(%esp)
 804d257:	08 
 804d258:	89 44 24 08          	mov    %eax,0x8(%esp)
 804d25c:	8d 45 a0             	lea    -0x60(%ebp),%eax
 804d25f:	89 04 24             	mov    %eax,(%esp)
 804d262:	e8 09 47 00 00       	call   8051970 <main+0x7d50>
 804d267:	85 c0                	test   %eax,%eax
 804d269:	0f 84 07 fe ff ff    	je     804d076 <main+0x3456>
 804d26f:	8b 85 4c fd ff ff    	mov    -0x2b4(%ebp),%eax
 804d275:	85 c0                	test   %eax,%eax
 804d277:	74 1f                	je     804d298 <main+0x3678>
 804d279:	8d 55 a0             	lea    -0x60(%ebp),%edx
 804d27c:	89 44 24 08          	mov    %eax,0x8(%esp)
 804d280:	c7 44 24 04 3e 4e 05 	movl   $0x8054e3e,0x4(%esp)
 804d287:	08 
 804d288:	89 14 24             	mov    %edx,(%esp)
 804d28b:	e8 e0 46 00 00       	call   8051970 <main+0x7d50>
 804d290:	85 c0                	test   %eax,%eax
 804d292:	0f 84 de fd ff ff    	je     804d076 <main+0x3456>
 804d298:	8b 85 44 fd ff ff    	mov    -0x2bc(%ebp),%eax
 804d29e:	8d 7d a0             	lea    -0x60(%ebp),%edi
 804d2a1:	c7 44 24 04 4b 4e 05 	movl   $0x8054e4b,0x4(%esp)
 804d2a8:	08 
 804d2a9:	89 3c 24             	mov    %edi,(%esp)
 804d2ac:	89 44 24 08          	mov    %eax,0x8(%esp)
 804d2b0:	e8 bb 46 00 00       	call   8051970 <main+0x7d50>
 804d2b5:	85 c0                	test   %eax,%eax
 804d2b7:	0f 84 b9 fd ff ff    	je     804d076 <main+0x3456>
 804d2bd:	8b 85 50 fd ff ff    	mov    -0x2b0(%ebp),%eax
 804d2c3:	c7 44 24 04 52 4e 05 	movl   $0x8054e52,0x4(%esp)
 804d2ca:	08 
 804d2cb:	89 3c 24             	mov    %edi,(%esp)
 804d2ce:	89 44 24 08          	mov    %eax,0x8(%esp)
 804d2d2:	e8 99 46 00 00       	call   8051970 <main+0x7d50>
 804d2d7:	85 c0                	test   %eax,%eax
 804d2d9:	0f 84 97 fd ff ff    	je     804d076 <main+0x3456>
 804d2df:	8d 95 58 ff ff ff    	lea    -0xa8(%ebp),%edx
 804d2e5:	8d bd 1c fd ff ff    	lea    -0x2e4(%ebp),%edi
 804d2eb:	89 54 24 08          	mov    %edx,0x8(%esp)
 804d2ef:	c7 44 24 0c 2e 00 00 	movl   $0x2e,0xc(%esp)
 804d2f6:	00 
 804d2f7:	89 7c 24 04          	mov    %edi,0x4(%esp)
 804d2fb:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 804d302:	e8 7d c6 ff ff       	call   8049984 <inet_ntop@plt>
 804d307:	c7 44 24 04 5a 4e 05 	movl   $0x8054e5a,0x4(%esp)
 804d30e:	08 
 804d30f:	89 44 24 08          	mov    %eax,0x8(%esp)
 804d313:	8d 45 a0             	lea    -0x60(%ebp),%eax
 804d316:	89 04 24             	mov    %eax,(%esp)
 804d319:	e8 52 46 00 00       	call   8051970 <main+0x7d50>
 804d31e:	85 c0                	test   %eax,%eax
 804d320:	0f 84 50 fd ff ff    	je     804d076 <main+0x3456>
 804d326:	8b 85 40 fd ff ff    	mov    -0x2c0(%ebp),%eax
 804d32c:	8d 55 a0             	lea    -0x60(%ebp),%edx
 804d32f:	c7 44 24 04 64 4e 05 	movl   $0x8054e64,0x4(%esp)
 804d336:	08 
 804d337:	89 14 24             	mov    %edx,(%esp)
 804d33a:	89 44 24 08          	mov    %eax,0x8(%esp)
 804d33e:	e8 ad 45 00 00       	call   80518f0 <main+0x7cd0>
 804d343:	85 c0                	test   %eax,%eax
 804d345:	0f 84 2b fd ff ff    	je     804d076 <main+0x3456>
 804d34b:	83 bd 34 fd ff ff ff 	cmpl   $0xffffffff,-0x2cc(%ebp)
 804d352:	74 47                	je     804d39b <main+0x377b>
 804d354:	8b 85 38 fd ff ff    	mov    -0x2c8(%ebp),%eax
 804d35a:	8d 7d a0             	lea    -0x60(%ebp),%edi
 804d35d:	c7 44 24 04 6a 4e 05 	movl   $0x8054e6a,0x4(%esp)
 804d364:	08 
 804d365:	89 3c 24             	mov    %edi,(%esp)
 804d368:	89 44 24 08          	mov    %eax,0x8(%esp)
 804d36c:	e8 7f 45 00 00       	call   80518f0 <main+0x7cd0>
 804d371:	85 c0                	test   %eax,%eax
 804d373:	0f 84 fd fc ff ff    	je     804d076 <main+0x3456>
 804d379:	8b 85 30 fd ff ff    	mov    -0x2d0(%ebp),%eax
 804d37f:	c7 44 24 04 76 4e 05 	movl   $0x8054e76,0x4(%esp)
 804d386:	08 
 804d387:	89 3c 24             	mov    %edi,(%esp)
 804d38a:	89 44 24 08          	mov    %eax,0x8(%esp)
 804d38e:	e8 dd 45 00 00       	call   8051970 <main+0x7d50>
 804d393:	85 c0                	test   %eax,%eax
 804d395:	0f 84 db fc ff ff    	je     804d076 <main+0x3456>
 804d39b:	8b bd 20 fb ff ff    	mov    -0x4e0(%ebp),%edi
 804d3a1:	8d 45 a0             	lea    -0x60(%ebp),%eax
 804d3a4:	89 04 24             	mov    %eax,(%esp)
 804d3a7:	89 7c 24 04          	mov    %edi,0x4(%esp)
 804d3ab:	e8 40 58 00 00       	call   8052bf0 <main+0x8fd0>
 804d3b0:	83 f8 01             	cmp    $0x1,%eax
 804d3b3:	0f 84 c7 fc ff ff    	je     804d080 <main+0x3460>
 804d3b9:	8b 85 5c fd ff ff    	mov    -0x2a4(%ebp),%eax
 804d3bf:	85 c0                	test   %eax,%eax
 804d3c1:	74 68                	je     804d42b <main+0x380b>
 804d3c3:	c7 44 24 04 e4 4d 05 	movl   $0x8054de4,0x4(%esp)
 804d3ca:	08 
 804d3cb:	89 04 24             	mov    %eax,(%esp)
 804d3ce:	e8 61 c4 ff ff       	call   8049834 <fopen@plt>
 804d3d3:	85 c0                	test   %eax,%eax
 804d3d5:	74 54                	je     804d42b <main+0x380b>
 804d3d7:	89 04 24             	mov    %eax,(%esp)
 804d3da:	89 85 10 fb ff ff    	mov    %eax,-0x4f0(%ebp)
 804d3e0:	e8 2b 24 00 00       	call   804f810 <main+0x5bf0>
 804d3e5:	8b 95 10 fb ff ff    	mov    -0x4f0(%ebp),%edx
 804d3eb:	85 c0                	test   %eax,%eax
 804d3ed:	89 c7                	mov    %eax,%edi
 804d3ef:	74 74                	je     804d465 <main+0x3845>
 804d3f1:	8d 55 a0             	lea    -0x60(%ebp),%edx
 804d3f4:	89 14 24             	mov    %edx,(%esp)
 804d3f7:	c7 45 b0 ff ff ff ff 	movl   $0xffffffff,-0x50(%ebp)
 804d3fe:	c7 45 b4 ff ff ff ff 	movl   $0xffffffff,-0x4c(%ebp)
 804d405:	89 44 24 04          	mov    %eax,0x4(%esp)
 804d409:	e8 e2 57 00 00       	call   8052bf0 <main+0x8fd0>
 804d40e:	89 3c 24             	mov    %edi,(%esp)
 804d411:	89 85 10 fb ff ff    	mov    %eax,-0x4f0(%ebp)
 804d417:	e8 04 32 00 00       	call   8050620 <main+0x6a00>
 804d41c:	8b 85 10 fb ff ff    	mov    -0x4f0(%ebp),%eax
 804d422:	83 f8 01             	cmp    $0x1,%eax
 804d425:	0f 84 55 fc ff ff    	je     804d080 <main+0x3460>
 804d42b:	8d 85 58 fc ff ff    	lea    -0x3a8(%ebp),%eax
 804d431:	e8 da f0 ff ff       	call   804c510 <main+0x28f0>
 804d436:	83 bd 40 fd ff ff 00 	cmpl   $0x0,-0x2c0(%ebp)
 804d43d:	0f 84 3d fc ff ff    	je     804d080 <main+0x3460>
 804d443:	8b 45 a8             	mov    -0x58(%ebp),%eax
 804d446:	8d bd 58 fc ff ff    	lea    -0x3a8(%ebp),%edi
 804d44c:	89 7c 24 08          	mov    %edi,0x8(%esp)
 804d450:	c7 44 24 04 d0 be 04 	movl   $0x804bed0,0x4(%esp)
 804d457:	08 
 804d458:	89 04 24             	mov    %eax,(%esp)
 804d45b:	e8 50 03 00 00       	call   804d7b0 <main+0x3b90>
 804d460:	e9 1b fc ff ff       	jmp    804d080 <main+0x3460>
 804d465:	89 14 24             	mov    %edx,(%esp)
 804d468:	e8 17 c4 ff ff       	call   8049884 <fclose@plt>
 804d46d:	eb bc                	jmp    804d42b <main+0x380b>
 804d46f:	8b 0d 00 79 05 08    	mov    0x8057900,%ecx
 804d475:	0f b6 0c 51          	movzbl (%ecx,%edx,2),%ecx
 804d479:	e9 bd fd ff ff       	jmp    804d23b <main+0x361b>
 804d47e:	c6 44 07 05 00       	movb   $0x0,0x5(%edi,%eax,1)
 804d483:	8b 85 14 fb ff ff    	mov    -0x4ec(%ebp),%eax
 804d489:	8d 55 a0             	lea    -0x60(%ebp),%edx
 804d48c:	89 7c 24 04          	mov    %edi,0x4(%esp)
 804d490:	89 14 24             	mov    %edx,(%esp)
 804d493:	89 44 24 08          	mov    %eax,0x8(%esp)
 804d497:	e8 d4 44 00 00       	call   8051970 <main+0x7d50>
 804d49c:	85 c0                	test   %eax,%eax
 804d49e:	74 14                	je     804d4b4 <main+0x3894>
 804d4a0:	89 3c 24             	mov    %edi,(%esp)
 804d4a3:	e8 ac c5 ff ff       	call   8049a54 <free@plt>
 804d4a8:	83 85 24 fb ff ff 04 	addl   $0x4,-0x4dc(%ebp)
 804d4af:	e9 ef fc ff ff       	jmp    804d1a3 <main+0x3583>
 804d4b4:	8b 9d 18 fb ff ff    	mov    -0x4e8(%ebp),%ebx
 804d4ba:	e9 b7 fb ff ff       	jmp    804d076 <main+0x3456>
 804d4bf:	90                   	nop
 804d4c0:	55                   	push   %ebp
 804d4c1:	89 e5                	mov    %esp,%ebp
 804d4c3:	83 ec 18             	sub    $0x18,%esp
 804d4c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 804d4c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 804d4cd:	8b 45 08             	mov    0x8(%ebp),%eax
 804d4d0:	8b 00                	mov    (%eax),%eax
 804d4d2:	89 04 24             	mov    %eax,(%esp)
 804d4d5:	e8 46 03 00 00       	call   804d820 <main+0x3c00>
 804d4da:	85 c0                	test   %eax,%eax
 804d4dc:	74 02                	je     804d4e0 <main+0x38c0>
 804d4de:	c9                   	leave  
 804d4df:	c3                   	ret    
 804d4e0:	8b 45 10             	mov    0x10(%ebp),%eax
 804d4e3:	c9                   	leave  
 804d4e4:	c3                   	ret    
 804d4e5:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804d4e9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804d4f0:	55                   	push   %ebp
 804d4f1:	89 e5                	mov    %esp,%ebp
 804d4f3:	53                   	push   %ebx
 804d4f4:	83 ec 24             	sub    $0x24,%esp
 804d4f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 804d4fa:	8b 5d 10             	mov    0x10(%ebp),%ebx
 804d4fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 804d501:	8b 45 08             	mov    0x8(%ebp),%eax
 804d504:	8b 00                	mov    (%eax),%eax
 804d506:	89 04 24             	mov    %eax,(%esp)
 804d509:	e8 12 03 00 00       	call   804d820 <main+0x3c00>
 804d50e:	85 c0                	test   %eax,%eax
 804d510:	74 1c                	je     804d52e <main+0x390e>
 804d512:	8d 55 f4             	lea    -0xc(%ebp),%edx
 804d515:	89 54 24 08          	mov    %edx,0x8(%esp)
 804d519:	c7 44 24 04 0b 4c 05 	movl   $0x8054c0b,0x4(%esp)
 804d520:	08 
 804d521:	89 04 24             	mov    %eax,(%esp)
 804d524:	e8 ab c2 ff ff       	call   80497d4 <sscanf@plt>
 804d529:	83 f8 01             	cmp    $0x1,%eax
 804d52c:	74 12                	je     804d540 <main+0x3920>
 804d52e:	89 d8                	mov    %ebx,%eax
 804d530:	83 c4 24             	add    $0x24,%esp
 804d533:	5b                   	pop    %ebx
 804d534:	5d                   	pop    %ebp
 804d535:	c3                   	ret    
 804d536:	8d 76 00             	lea    0x0(%esi),%esi
 804d539:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804d540:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 804d543:	83 c4 24             	add    $0x24,%esp
 804d546:	89 d8                	mov    %ebx,%eax
 804d548:	5b                   	pop    %ebx
 804d549:	5d                   	pop    %ebp
 804d54a:	c3                   	ret    
 804d54b:	90                   	nop
 804d54c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804d550:	55                   	push   %ebp
 804d551:	89 e5                	mov    %esp,%ebp
 804d553:	53                   	push   %ebx
 804d554:	83 ec 14             	sub    $0x14,%esp
 804d557:	8b 5d 08             	mov    0x8(%ebp),%ebx
 804d55a:	8b 03                	mov    (%ebx),%eax
 804d55c:	89 04 24             	mov    %eax,(%esp)
 804d55f:	e8 2c 05 00 00       	call   804da90 <main+0x3e70>
 804d564:	89 5d 08             	mov    %ebx,0x8(%ebp)
 804d567:	83 c4 14             	add    $0x14,%esp
 804d56a:	5b                   	pop    %ebx
 804d56b:	5d                   	pop    %ebp
 804d56c:	e9 e3 c4 ff ff       	jmp    8049a54 <free@plt>
 804d571:	eb 0d                	jmp    804d580 <main+0x3960>
 804d573:	90                   	nop
 804d574:	90                   	nop
 804d575:	90                   	nop
 804d576:	90                   	nop
 804d577:	90                   	nop
 804d578:	90                   	nop
 804d579:	90                   	nop
 804d57a:	90                   	nop
 804d57b:	90                   	nop
 804d57c:	90                   	nop
 804d57d:	90                   	nop
 804d57e:	90                   	nop
 804d57f:	90                   	nop
 804d580:	55                   	push   %ebp
 804d581:	89 e5                	mov    %esp,%ebp
 804d583:	53                   	push   %ebx
 804d584:	83 ec 14             	sub    $0x14,%esp
 804d587:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 804d58a:	8b 45 08             	mov    0x8(%ebp),%eax
 804d58d:	89 04 24             	mov    %eax,(%esp)
 804d590:	e8 bf c4 ff ff       	call   8049a54 <free@plt>
 804d595:	89 5d 08             	mov    %ebx,0x8(%ebp)
 804d598:	83 c4 14             	add    $0x14,%esp
 804d59b:	5b                   	pop    %ebx
 804d59c:	5d                   	pop    %ebp
 804d59d:	e9 b2 c4 ff ff       	jmp    8049a54 <free@plt>
 804d5a2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804d5a9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804d5b0:	55                   	push   %ebp
 804d5b1:	89 e5                	mov    %esp,%ebp
 804d5b3:	57                   	push   %edi
 804d5b4:	56                   	push   %esi
 804d5b5:	53                   	push   %ebx
 804d5b6:	81 ec 3c 04 00 00    	sub    $0x43c,%esp
 804d5bc:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 804d5c3:	00 
 804d5c4:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 804d5cb:	e8 94 c0 ff ff       	call   8049664 <calloc@plt>
 804d5d0:	85 c0                	test   %eax,%eax
 804d5d2:	89 85 d4 fb ff ff    	mov    %eax,-0x42c(%ebp)
 804d5d8:	89 85 d0 fb ff ff    	mov    %eax,-0x430(%ebp)
 804d5de:	75 20                	jne    804d600 <main+0x39e0>
 804d5e0:	8b 85 d0 fb ff ff    	mov    -0x430(%ebp),%eax
 804d5e6:	81 c4 3c 04 00 00    	add    $0x43c,%esp
 804d5ec:	5b                   	pop    %ebx
 804d5ed:	5e                   	pop    %esi
 804d5ee:	5f                   	pop    %edi
 804d5ef:	5d                   	pop    %ebp
 804d5f0:	c3                   	ret    
 804d5f1:	eb 0d                	jmp    804d600 <main+0x39e0>
 804d5f3:	90                   	nop
 804d5f4:	90                   	nop
 804d5f5:	90                   	nop
 804d5f6:	90                   	nop
 804d5f7:	90                   	nop
 804d5f8:	90                   	nop
 804d5f9:	90                   	nop
 804d5fa:	90                   	nop
 804d5fb:	90                   	nop
 804d5fc:	90                   	nop
 804d5fd:	90                   	nop
 804d5fe:	90                   	nop
 804d5ff:	90                   	nop
 804d600:	c7 44 24 0c 80 d5 04 	movl   $0x804d580,0xc(%esp)
 804d607:	08 
 804d608:	c7 44 24 08 20 d9 04 	movl   $0x804d920,0x8(%esp)
 804d60f:	08 
 804d610:	c7 44 24 04 90 d8 04 	movl   $0x804d890,0x4(%esp)
 804d617:	08 
 804d618:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 804d61f:	e8 dc 03 00 00       	call   804da00 <main+0x3de0>
 804d624:	8b 95 d4 fb ff ff    	mov    -0x42c(%ebp),%edx
 804d62a:	85 c0                	test   %eax,%eax
 804d62c:	89 02                	mov    %eax,(%edx)
 804d62e:	0f 84 95 00 00 00    	je     804d6c9 <main+0x3aa9>
 804d634:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804d63a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 804d640:	8b 45 08             	mov    0x8(%ebp),%eax
 804d643:	8d 95 e7 fb ff ff    	lea    -0x419(%ebp),%edx
 804d649:	c7 44 24 04 01 04 00 	movl   $0x401,0x4(%esp)
 804d650:	00 
 804d651:	89 14 24             	mov    %edx,(%esp)
 804d654:	89 44 24 08          	mov    %eax,0x8(%esp)
 804d658:	e8 07 bf ff ff       	call   8049564 <fgets@plt>
 804d65d:	85 c0                	test   %eax,%eax
 804d65f:	0f 84 7b ff ff ff    	je     804d5e0 <main+0x39c0>
 804d665:	8d 85 e7 fb ff ff    	lea    -0x419(%ebp),%eax
 804d66b:	c7 44 24 04 3d 00 00 	movl   $0x3d,0x4(%esp)
 804d672:	00 
 804d673:	89 04 24             	mov    %eax,(%esp)
 804d676:	e8 69 c3 ff ff       	call   80499e4 <strchr@plt>
 804d67b:	85 c0                	test   %eax,%eax
 804d67d:	74 4a                	je     804d6c9 <main+0x3aa9>
 804d67f:	c6 00 00             	movb   $0x0,(%eax)
 804d682:	0f b6 95 e7 fb ff ff 	movzbl -0x419(%ebp),%edx
 804d689:	84 d2                	test   %dl,%dl
 804d68b:	74 3c                	je     804d6c9 <main+0x3aa9>
 804d68d:	8b 3d fc 78 05 08    	mov    0x80578fc,%edi
 804d693:	0f be d2             	movsbl %dl,%edx
 804d696:	8d b5 e7 fb ff ff    	lea    -0x419(%ebp),%esi
 804d69c:	0f bf 14 57          	movswl (%edi,%edx,2),%edx
 804d6a0:	81 e2 44 01 00 00    	and    $0x144,%edx
 804d6a6:	75 17                	jne    804d6bf <main+0x3a9f>
 804d6a8:	eb 36                	jmp    804d6e0 <main+0x3ac0>
 804d6aa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804d6b0:	0f be d2             	movsbl %dl,%edx
 804d6b3:	0f bf 14 57          	movswl (%edi,%edx,2),%edx
 804d6b7:	81 e2 44 01 00 00    	and    $0x144,%edx
 804d6bd:	74 21                	je     804d6e0 <main+0x3ac0>
 804d6bf:	83 c6 01             	add    $0x1,%esi
 804d6c2:	0f b6 16             	movzbl (%esi),%edx
 804d6c5:	84 d2                	test   %dl,%dl
 804d6c7:	75 e7                	jne    804d6b0 <main+0x3a90>
 804d6c9:	c7 85 d0 fb ff ff 00 	movl   $0x0,-0x430(%ebp)
 804d6d0:	00 00 00 
 804d6d3:	e9 08 ff ff ff       	jmp    804d5e0 <main+0x39c0>
 804d6d8:	90                   	nop
 804d6d9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804d6e0:	89 f2                	mov    %esi,%edx
 804d6e2:	eb 1b                	jmp    804d6ff <main+0x3adf>
 804d6e4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804d6ea:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 804d6f0:	0f be c9             	movsbl %cl,%ecx
 804d6f3:	0f bf 0c 4f          	movswl (%edi,%ecx,2),%ecx
 804d6f7:	81 e1 44 01 00 00    	and    $0x144,%ecx
 804d6fd:	75 0a                	jne    804d709 <main+0x3ae9>
 804d6ff:	83 c2 01             	add    $0x1,%edx
 804d702:	0f b6 0a             	movzbl (%edx),%ecx
 804d705:	84 c9                	test   %cl,%cl
 804d707:	75 e7                	jne    804d6f0 <main+0x3ad0>
 804d709:	39 f2                	cmp    %esi,%edx
 804d70b:	74 bc                	je     804d6c9 <main+0x3aa9>
 804d70d:	8d 58 01             	lea    0x1(%eax),%ebx
 804d710:	c6 02 00             	movb   $0x0,(%edx)
 804d713:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 804d717:	84 c0                	test   %al,%al
 804d719:	75 0f                	jne    804d72a <main+0x3b0a>
 804d71b:	eb 1b                	jmp    804d738 <main+0x3b18>
 804d71d:	8d 76 00             	lea    0x0(%esi),%esi
 804d720:	83 c3 01             	add    $0x1,%ebx
 804d723:	0f b6 03             	movzbl (%ebx),%eax
 804d726:	84 c0                	test   %al,%al
 804d728:	74 0e                	je     804d738 <main+0x3b18>
 804d72a:	0f be c0             	movsbl %al,%eax
 804d72d:	0f bf 04 47          	movswl (%edi,%eax,2),%eax
 804d731:	a9 44 01 00 00       	test   $0x144,%eax
 804d736:	75 e8                	jne    804d720 <main+0x3b00>
 804d738:	89 1c 24             	mov    %ebx,(%esp)
 804d73b:	e8 84 c2 ff ff       	call   80499c4 <strlen@plt>
 804d740:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 804d743:	39 d8                	cmp    %ebx,%eax
 804d745:	74 14                	je     804d75b <main+0x3b3b>
 804d747:	0f be 50 ff          	movsbl -0x1(%eax),%edx
 804d74b:	0f bf 14 57          	movswl (%edi,%edx,2),%edx
 804d74f:	81 e2 44 01 00 00    	and    $0x144,%edx
 804d755:	74 04                	je     804d75b <main+0x3b3b>
 804d757:	c6 40 ff 00          	movb   $0x0,-0x1(%eax)
 804d75b:	89 1c 24             	mov    %ebx,(%esp)
 804d75e:	e8 a1 c0 ff ff       	call   8049804 <strdup@plt>
 804d763:	89 34 24             	mov    %esi,(%esp)
 804d766:	89 c3                	mov    %eax,%ebx
 804d768:	e8 97 c0 ff ff       	call   8049804 <strdup@plt>
 804d76d:	8b 95 d4 fb ff ff    	mov    -0x42c(%ebp),%edx
 804d773:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 804d77a:	00 
 804d77b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 804d77f:	89 44 24 04          	mov    %eax,0x4(%esp)
 804d783:	8b 02                	mov    (%edx),%eax
 804d785:	89 04 24             	mov    %eax,(%esp)
 804d788:	e8 a3 01 00 00       	call   804d930 <main+0x3d10>
 804d78d:	85 c0                	test   %eax,%eax
 804d78f:	0f 85 ab fe ff ff    	jne    804d640 <main+0x3a20>
 804d795:	c7 85 d0 fb ff ff 00 	movl   $0x0,-0x430(%ebp)
 804d79c:	00 00 00 
 804d79f:	e9 3c fe ff ff       	jmp    804d5e0 <main+0x39c0>
 804d7a4:	90                   	nop
 804d7a5:	90                   	nop
 804d7a6:	90                   	nop
 804d7a7:	90                   	nop
 804d7a8:	90                   	nop
 804d7a9:	90                   	nop
 804d7aa:	90                   	nop
 804d7ab:	90                   	nop
 804d7ac:	90                   	nop
 804d7ad:	90                   	nop
 804d7ae:	90                   	nop
 804d7af:	90                   	nop
 804d7b0:	55                   	push   %ebp
 804d7b1:	89 e5                	mov    %esp,%ebp
 804d7b3:	57                   	push   %edi
 804d7b4:	56                   	push   %esi
 804d7b5:	53                   	push   %ebx
 804d7b6:	83 ec 2c             	sub    $0x2c,%esp
 804d7b9:	8b 45 08             	mov    0x8(%ebp),%eax
 804d7bc:	8b 75 0c             	mov    0xc(%ebp),%esi
 804d7bf:	8b 7d 10             	mov    0x10(%ebp),%edi
 804d7c2:	8b 40 04             	mov    0x4(%eax),%eax
 804d7c5:	85 c0                	test   %eax,%eax
 804d7c7:	74 41                	je     804d80a <main+0x3bea>
 804d7c9:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 804d7d0:	8b 55 08             	mov    0x8(%ebp),%edx
 804d7d3:	8b 42 08             	mov    0x8(%edx),%eax
 804d7d6:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 804d7d9:	8b 04 90             	mov    (%eax,%edx,4),%eax
 804d7dc:	85 c0                	test   %eax,%eax
 804d7de:	74 1b                	je     804d7fb <main+0x3bdb>
 804d7e0:	8b 18                	mov    (%eax),%ebx
 804d7e2:	89 7c 24 08          	mov    %edi,0x8(%esp)
 804d7e6:	8b 50 0c             	mov    0xc(%eax),%edx
 804d7e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 804d7ed:	8b 40 08             	mov    0x8(%eax),%eax
 804d7f0:	89 04 24             	mov    %eax,(%esp)
 804d7f3:	ff d6                	call   *%esi
 804d7f5:	85 db                	test   %ebx,%ebx
 804d7f7:	89 d8                	mov    %ebx,%eax
 804d7f9:	75 e5                	jne    804d7e0 <main+0x3bc0>
 804d7fb:	8b 45 08             	mov    0x8(%ebp),%eax
 804d7fe:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 804d802:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 804d805:	39 50 04             	cmp    %edx,0x4(%eax)
 804d808:	77 c6                	ja     804d7d0 <main+0x3bb0>
 804d80a:	83 c4 2c             	add    $0x2c,%esp
 804d80d:	5b                   	pop    %ebx
 804d80e:	5e                   	pop    %esi
 804d80f:	5f                   	pop    %edi
 804d810:	5d                   	pop    %ebp
 804d811:	c3                   	ret    
 804d812:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804d819:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804d820:	55                   	push   %ebp
 804d821:	89 e5                	mov    %esp,%ebp
 804d823:	57                   	push   %edi
 804d824:	56                   	push   %esi
 804d825:	53                   	push   %ebx
 804d826:	83 ec 1c             	sub    $0x1c,%esp
 804d829:	8b 5d 08             	mov    0x8(%ebp),%ebx
 804d82c:	8b 75 0c             	mov    0xc(%ebp),%esi
 804d82f:	89 34 24             	mov    %esi,(%esp)
 804d832:	ff 53 0c             	call   *0xc(%ebx)
 804d835:	31 d2                	xor    %edx,%edx
 804d837:	f7 73 04             	divl   0x4(%ebx)
 804d83a:	8b 43 08             	mov    0x8(%ebx),%eax
 804d83d:	8b 3c 90             	mov    (%eax,%edx,4),%edi
 804d840:	85 ff                	test   %edi,%edi
 804d842:	75 12                	jne    804d856 <main+0x3c36>
 804d844:	eb 3a                	jmp    804d880 <main+0x3c60>
 804d846:	8d 76 00             	lea    0x0(%esi),%esi
 804d849:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804d850:	8b 3f                	mov    (%edi),%edi
 804d852:	85 ff                	test   %edi,%edi
 804d854:	74 2a                	je     804d880 <main+0x3c60>
 804d856:	89 74 24 04          	mov    %esi,0x4(%esp)
 804d85a:	8b 47 08             	mov    0x8(%edi),%eax
 804d85d:	89 04 24             	mov    %eax,(%esp)
 804d860:	ff 53 10             	call   *0x10(%ebx)
 804d863:	85 c0                	test   %eax,%eax
 804d865:	75 e9                	jne    804d850 <main+0x3c30>
 804d867:	8b 47 0c             	mov    0xc(%edi),%eax
 804d86a:	83 c4 1c             	add    $0x1c,%esp
 804d86d:	5b                   	pop    %ebx
 804d86e:	5e                   	pop    %esi
 804d86f:	5f                   	pop    %edi
 804d870:	5d                   	pop    %ebp
 804d871:	c3                   	ret    
 804d872:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804d879:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804d880:	83 c4 1c             	add    $0x1c,%esp
 804d883:	31 c0                	xor    %eax,%eax
 804d885:	5b                   	pop    %ebx
 804d886:	5e                   	pop    %esi
 804d887:	5f                   	pop    %edi
 804d888:	5d                   	pop    %ebp
 804d889:	c3                   	ret    
 804d88a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804d890:	55                   	push   %ebp
 804d891:	b8 c5 9d 1c 81       	mov    $0x811c9dc5,%eax
 804d896:	89 e5                	mov    %esp,%ebp
 804d898:	8b 4d 08             	mov    0x8(%ebp),%ecx
 804d89b:	53                   	push   %ebx
 804d89c:	0f b6 11             	movzbl (%ecx),%edx
 804d89f:	84 d2                	test   %dl,%dl
 804d8a1:	74 22                	je     804d8c5 <main+0x3ca5>
 804d8a3:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804d8a9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804d8b0:	83 c1 01             	add    $0x1,%ecx
 804d8b3:	69 d8 93 01 00 01    	imul   $0x1000193,%eax,%ebx
 804d8b9:	0f be c2             	movsbl %dl,%eax
 804d8bc:	0f b6 11             	movzbl (%ecx),%edx
 804d8bf:	31 d8                	xor    %ebx,%eax
 804d8c1:	84 d2                	test   %dl,%dl
 804d8c3:	75 eb                	jne    804d8b0 <main+0x3c90>
 804d8c5:	5b                   	pop    %ebx
 804d8c6:	5d                   	pop    %ebp
 804d8c7:	c3                   	ret    
 804d8c8:	90                   	nop
 804d8c9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804d8d0:	55                   	push   %ebp
 804d8d1:	b8 c5 9d 1c 81       	mov    $0x811c9dc5,%eax
 804d8d6:	89 e5                	mov    %esp,%ebp
 804d8d8:	8b 55 08             	mov    0x8(%ebp),%edx
 804d8db:	56                   	push   %esi
 804d8dc:	53                   	push   %ebx
 804d8dd:	0f b6 0a             	movzbl (%edx),%ecx
 804d8e0:	84 c9                	test   %cl,%cl
 804d8e2:	74 25                	je     804d909 <main+0x3ce9>
 804d8e4:	8b 35 f8 78 05 08    	mov    0x80578f8,%esi
 804d8ea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804d8f0:	0f be c9             	movsbl %cl,%ecx
 804d8f3:	83 c2 01             	add    $0x1,%edx
 804d8f6:	69 d8 93 01 00 01    	imul   $0x1000193,%eax,%ebx
 804d8fc:	0f bf 04 4e          	movswl (%esi,%ecx,2),%eax
 804d900:	0f b6 0a             	movzbl (%edx),%ecx
 804d903:	31 d8                	xor    %ebx,%eax
 804d905:	84 c9                	test   %cl,%cl
 804d907:	75 e7                	jne    804d8f0 <main+0x3cd0>
 804d909:	5b                   	pop    %ebx
 804d90a:	5e                   	pop    %esi
 804d90b:	5d                   	pop    %ebp
 804d90c:	c3                   	ret    
 804d90d:	8d 76 00             	lea    0x0(%esi),%esi
 804d910:	55                   	push   %ebp
 804d911:	89 e5                	mov    %esp,%ebp
 804d913:	83 ec 08             	sub    $0x8,%esp
 804d916:	c9                   	leave  
 804d917:	e9 68 be ff ff       	jmp    8049784 <strcasecmp@plt>
 804d91c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804d920:	55                   	push   %ebp
 804d921:	89 e5                	mov    %esp,%ebp
 804d923:	83 ec 08             	sub    $0x8,%esp
 804d926:	c9                   	leave  
 804d927:	e9 a8 bf ff ff       	jmp    80498d4 <strcmp@plt>
 804d92c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804d930:	55                   	push   %ebp
 804d931:	89 e5                	mov    %esp,%ebp
 804d933:	57                   	push   %edi
 804d934:	56                   	push   %esi
 804d935:	53                   	push   %ebx
 804d936:	83 ec 2c             	sub    $0x2c,%esp
 804d939:	8b 5d 08             	mov    0x8(%ebp),%ebx
 804d93c:	8b 75 0c             	mov    0xc(%ebp),%esi
 804d93f:	89 34 24             	mov    %esi,(%esp)
 804d942:	ff 53 0c             	call   *0xc(%ebx)
 804d945:	31 d2                	xor    %edx,%edx
 804d947:	f7 73 04             	divl   0x4(%ebx)
 804d94a:	8b 43 08             	mov    0x8(%ebx),%eax
 804d94d:	8b 3c 90             	mov    (%eax,%edx,4),%edi
 804d950:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 804d953:	85 ff                	test   %edi,%edi
 804d955:	75 0f                	jne    804d966 <main+0x3d46>
 804d957:	eb 37                	jmp    804d990 <main+0x3d70>
 804d959:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804d960:	8b 3f                	mov    (%edi),%edi
 804d962:	85 ff                	test   %edi,%edi
 804d964:	74 2a                	je     804d990 <main+0x3d70>
 804d966:	89 74 24 04          	mov    %esi,0x4(%esp)
 804d96a:	8b 47 08             	mov    0x8(%edi),%eax
 804d96d:	89 04 24             	mov    %eax,(%esp)
 804d970:	ff 53 10             	call   *0x10(%ebx)
 804d973:	85 c0                	test   %eax,%eax
 804d975:	75 e9                	jne    804d960 <main+0x3d40>
 804d977:	f6 45 14 01          	testb  $0x1,0x14(%ebp)
 804d97b:	75 53                	jne    804d9d0 <main+0x3db0>
 804d97d:	83 c4 2c             	add    $0x2c,%esp
 804d980:	31 c0                	xor    %eax,%eax
 804d982:	5b                   	pop    %ebx
 804d983:	5e                   	pop    %esi
 804d984:	5f                   	pop    %edi
 804d985:	5d                   	pop    %ebp
 804d986:	c3                   	ret    
 804d987:	89 f6                	mov    %esi,%esi
 804d989:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804d990:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 804d997:	00 
 804d998:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 804d99f:	e8 c0 bc ff ff       	call   8049664 <calloc@plt>
 804d9a4:	85 c0                	test   %eax,%eax
 804d9a6:	89 c7                	mov    %eax,%edi
 804d9a8:	74 d3                	je     804d97d <main+0x3d5d>
 804d9aa:	8b 4b 08             	mov    0x8(%ebx),%ecx
 804d9ad:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 804d9b0:	8b 14 99             	mov    (%ecx,%ebx,4),%edx
 804d9b3:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 804d9ba:	85 d2                	test   %edx,%edx
 804d9bc:	89 10                	mov    %edx,(%eax)
 804d9be:	74 03                	je     804d9c3 <main+0x3da3>
 804d9c0:	89 42 04             	mov    %eax,0x4(%edx)
 804d9c3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 804d9c6:	89 04 91             	mov    %eax,(%ecx,%edx,4)
 804d9c9:	eb 15                	jmp    804d9e0 <main+0x3dc0>
 804d9cb:	90                   	nop
 804d9cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804d9d0:	8b 47 0c             	mov    0xc(%edi),%eax
 804d9d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 804d9d7:	8b 47 08             	mov    0x8(%edi),%eax
 804d9da:	89 04 24             	mov    %eax,(%esp)
 804d9dd:	ff 53 14             	call   *0x14(%ebx)
 804d9e0:	8b 45 10             	mov    0x10(%ebp),%eax
 804d9e3:	89 77 08             	mov    %esi,0x8(%edi)
 804d9e6:	89 47 0c             	mov    %eax,0xc(%edi)
 804d9e9:	83 c4 2c             	add    $0x2c,%esp
 804d9ec:	b8 01 00 00 00       	mov    $0x1,%eax
 804d9f1:	5b                   	pop    %ebx
 804d9f2:	5e                   	pop    %esi
 804d9f3:	5f                   	pop    %edi
 804d9f4:	5d                   	pop    %ebp
 804d9f5:	c3                   	ret    
 804d9f6:	8d 76 00             	lea    0x0(%esi),%esi
 804d9f9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804da00:	55                   	push   %ebp
 804da01:	89 e5                	mov    %esp,%ebp
 804da03:	83 ec 18             	sub    $0x18,%esp
 804da06:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 804da09:	89 75 fc             	mov    %esi,-0x4(%ebp)
 804da0c:	8b 75 08             	mov    0x8(%ebp),%esi
 804da0f:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 804da16:	00 
 804da17:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 804da1e:	e8 41 bc ff ff       	call   8049664 <calloc@plt>
 804da23:	85 c0                	test   %eax,%eax
 804da25:	89 c3                	mov    %eax,%ebx
 804da27:	75 17                	jne    804da40 <main+0x3e20>
 804da29:	89 d8                	mov    %ebx,%eax
 804da2b:	8b 75 fc             	mov    -0x4(%ebp),%esi
 804da2e:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 804da31:	89 ec                	mov    %ebp,%esp
 804da33:	5d                   	pop    %ebp
 804da34:	c3                   	ret    
 804da35:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804da39:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804da40:	89 70 04             	mov    %esi,0x4(%eax)
 804da43:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 804da49:	8b 45 0c             	mov    0xc(%ebp),%eax
 804da4c:	89 43 0c             	mov    %eax,0xc(%ebx)
 804da4f:	8b 45 10             	mov    0x10(%ebp),%eax
 804da52:	89 43 10             	mov    %eax,0x10(%ebx)
 804da55:	8b 45 14             	mov    0x14(%ebp),%eax
 804da58:	89 43 14             	mov    %eax,0x14(%ebx)
 804da5b:	89 34 24             	mov    %esi,(%esp)
 804da5e:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 804da65:	00 
 804da66:	e8 f9 bb ff ff       	call   8049664 <calloc@plt>
 804da6b:	83 f8 01             	cmp    $0x1,%eax
 804da6e:	89 43 08             	mov    %eax,0x8(%ebx)
 804da71:	19 c0                	sbb    %eax,%eax
 804da73:	8b 75 fc             	mov    -0x4(%ebp),%esi
 804da76:	f7 d0                	not    %eax
 804da78:	21 c3                	and    %eax,%ebx
 804da7a:	89 d8                	mov    %ebx,%eax
 804da7c:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 804da7f:	89 ec                	mov    %ebp,%esp
 804da81:	5d                   	pop    %ebp
 804da82:	c3                   	ret    
 804da83:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804da89:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804da90:	55                   	push   %ebp
 804da91:	89 e5                	mov    %esp,%ebp
 804da93:	57                   	push   %edi
 804da94:	56                   	push   %esi
 804da95:	53                   	push   %ebx
 804da96:	83 ec 2c             	sub    $0x2c,%esp
 804da99:	8b 7d 08             	mov    0x8(%ebp),%edi
 804da9c:	8b 57 04             	mov    0x4(%edi),%edx
 804da9f:	85 d2                	test   %edx,%edx
 804daa1:	74 63                	je     804db06 <main+0x3ee6>
 804daa3:	8b 47 08             	mov    0x8(%edi),%eax
 804daa6:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 804daad:	8d 76 00             	lea    0x0(%esi),%esi
 804dab0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 804dab3:	8b 1c 90             	mov    (%eax,%edx,4),%ebx
 804dab6:	85 db                	test   %ebx,%ebx
 804dab8:	74 29                	je     804dae3 <main+0x3ec3>
 804daba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804dac0:	8b 43 0c             	mov    0xc(%ebx),%eax
 804dac3:	8b 33                	mov    (%ebx),%esi
 804dac5:	89 44 24 04          	mov    %eax,0x4(%esp)
 804dac9:	8b 43 08             	mov    0x8(%ebx),%eax
 804dacc:	89 04 24             	mov    %eax,(%esp)
 804dacf:	ff 57 14             	call   *0x14(%edi)
 804dad2:	89 1c 24             	mov    %ebx,(%esp)
 804dad5:	89 f3                	mov    %esi,%ebx
 804dad7:	e8 78 bf ff ff       	call   8049a54 <free@plt>
 804dadc:	85 f6                	test   %esi,%esi
 804dade:	75 e0                	jne    804dac0 <main+0x3ea0>
 804dae0:	8b 47 08             	mov    0x8(%edi),%eax
 804dae3:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 804dae7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 804daea:	39 57 04             	cmp    %edx,0x4(%edi)
 804daed:	77 c1                	ja     804dab0 <main+0x3e90>
 804daef:	89 04 24             	mov    %eax,(%esp)
 804daf2:	e8 5d bf ff ff       	call   8049a54 <free@plt>
 804daf7:	89 7d 08             	mov    %edi,0x8(%ebp)
 804dafa:	83 c4 2c             	add    $0x2c,%esp
 804dafd:	5b                   	pop    %ebx
 804dafe:	5e                   	pop    %esi
 804daff:	5f                   	pop    %edi
 804db00:	5d                   	pop    %ebp
 804db01:	e9 4e bf ff ff       	jmp    8049a54 <free@plt>
 804db06:	8b 47 08             	mov    0x8(%edi),%eax
 804db09:	eb e4                	jmp    804daef <main+0x3ecf>
 804db0b:	90                   	nop
 804db0c:	90                   	nop
 804db0d:	90                   	nop
 804db0e:	90                   	nop
 804db0f:	90                   	nop
 804db10:	55                   	push   %ebp
 804db11:	89 e5                	mov    %esp,%ebp
 804db13:	8b 45 0c             	mov    0xc(%ebp),%eax
 804db16:	57                   	push   %edi
 804db17:	56                   	push   %esi
 804db18:	53                   	push   %ebx
 804db19:	83 c0 04             	add    $0x4,%eax
 804db1c:	3d ff ff 00 00       	cmp    $0xffff,%eax
 804db21:	76 0d                	jbe    804db30 <main+0x3f10>
 804db23:	31 c0                	xor    %eax,%eax
 804db25:	5b                   	pop    %ebx
 804db26:	5e                   	pop    %esi
 804db27:	5f                   	pop    %edi
 804db28:	5d                   	pop    %ebp
 804db29:	c3                   	ret    
 804db2a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804db30:	31 c9                	xor    %ecx,%ecx
 804db32:	31 ff                	xor    %edi,%edi
 804db34:	3d 00 02 00 00       	cmp    $0x200,%eax
 804db39:	76 1b                	jbe    804db56 <main+0x3f36>
 804db3b:	ba 00 02 00 00       	mov    $0x200,%edx
 804db40:	83 c1 01             	add    $0x1,%ecx
 804db43:	89 d3                	mov    %edx,%ebx
 804db45:	d3 e3                	shl    %cl,%ebx
 804db47:	39 d8                	cmp    %ebx,%eax
 804db49:	77 f5                	ja     804db40 <main+0x3f20>
 804db4b:	83 f9 07             	cmp    $0x7,%ecx
 804db4e:	0f 8f db 00 00 00    	jg     804dc2f <main+0x400f>
 804db54:	89 cf                	mov    %ecx,%edi
 804db56:	8b 45 08             	mov    0x8(%ebp),%eax
 804db59:	8b 04 b8             	mov    (%eax,%edi,4),%eax
 804db5c:	85 c0                	test   %eax,%eax
 804db5e:	75 30                	jne    804db90 <main+0x3f70>
 804db60:	8b 5d 08             	mov    0x8(%ebp),%ebx
 804db63:	8d 47 01             	lea    0x1(%edi),%eax
 804db66:	8d 14 83             	lea    (%ebx,%eax,4),%edx
 804db69:	eb 11                	jmp    804db7c <main+0x3f5c>
 804db6b:	90                   	nop
 804db6c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804db70:	8b 1a                	mov    (%edx),%ebx
 804db72:	83 c2 04             	add    $0x4,%edx
 804db75:	85 db                	test   %ebx,%ebx
 804db77:	75 17                	jne    804db90 <main+0x3f70>
 804db79:	83 c0 01             	add    $0x1,%eax
 804db7c:	83 f8 08             	cmp    $0x8,%eax
 804db7f:	89 c7                	mov    %eax,%edi
 804db81:	75 ed                	jne    804db70 <main+0x3f50>
 804db83:	eb 9e                	jmp    804db23 <main+0x3f03>
 804db85:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804db89:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804db90:	39 f9                	cmp    %edi,%ecx
 804db92:	0f 8d a8 00 00 00    	jge    804dc40 <main+0x4020>
 804db98:	8b 55 08             	mov    0x8(%ebp),%edx
 804db9b:	8b 5d 08             	mov    0x8(%ebp),%ebx
 804db9e:	8b 04 ba             	mov    (%edx,%edi,4),%eax
 804dba1:	83 ef 01             	sub    $0x1,%edi
 804dba4:	8d 34 bb             	lea    (%ebx,%edi,4),%esi
 804dba7:	8b 50 04             	mov    0x4(%eax),%edx
 804dbaa:	eb 68                	jmp    804dc14 <main+0x3ff4>
 804dbac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804dbb0:	89 5a 04             	mov    %ebx,0x4(%edx)
 804dbb3:	8b 18                	mov    (%eax),%ebx
 804dbb5:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 804dbbc:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 804dbc3:	81 e3 00 fe ff ff    	and    $0xfffffe00,%ebx
 804dbc9:	d1 eb                	shr    %ebx
 804dbcb:	83 cb 01             	or     $0x1,%ebx
 804dbce:	89 da                	mov    %ebx,%edx
 804dbd0:	81 e2 00 fe ff ff    	and    $0xfffffe00,%edx
 804dbd6:	31 c2                	xor    %eax,%edx
 804dbd8:	89 18                	mov    %ebx,(%eax)
 804dbda:	89 1a                	mov    %ebx,(%edx)
 804dbdc:	8b 58 04             	mov    0x4(%eax),%ebx
 804dbdf:	89 5a 04             	mov    %ebx,0x4(%edx)
 804dbe2:	8b 58 08             	mov    0x8(%eax),%ebx
 804dbe5:	89 5a 08             	mov    %ebx,0x8(%edx)
 804dbe8:	8b 1e                	mov    (%esi),%ebx
 804dbea:	c7 42 08 00 00 00 00 	movl   $0x0,0x8(%edx)
 804dbf1:	85 db                	test   %ebx,%ebx
 804dbf3:	89 5a 04             	mov    %ebx,0x4(%edx)
 804dbf6:	74 03                	je     804dbfb <main+0x3fdb>
 804dbf8:	89 53 08             	mov    %edx,0x8(%ebx)
 804dbfb:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 804dc02:	89 50 04             	mov    %edx,0x4(%eax)
 804dc05:	89 42 08             	mov    %eax,0x8(%edx)
 804dc08:	89 06                	mov    %eax,(%esi)
 804dc0a:	83 ee 04             	sub    $0x4,%esi
 804dc0d:	39 f9                	cmp    %edi,%ecx
 804dc0f:	7d 2f                	jge    804dc40 <main+0x4020>
 804dc11:	83 ef 01             	sub    $0x1,%edi
 804dc14:	31 db                	xor    %ebx,%ebx
 804dc16:	85 d2                	test   %edx,%edx
 804dc18:	74 09                	je     804dc23 <main+0x4003>
 804dc1a:	8b 58 08             	mov    0x8(%eax),%ebx
 804dc1d:	89 5a 08             	mov    %ebx,0x8(%edx)
 804dc20:	8b 58 04             	mov    0x4(%eax),%ebx
 804dc23:	8b 50 08             	mov    0x8(%eax),%edx
 804dc26:	85 d2                	test   %edx,%edx
 804dc28:	75 86                	jne    804dbb0 <main+0x3f90>
 804dc2a:	89 5e 04             	mov    %ebx,0x4(%esi)
 804dc2d:	eb 84                	jmp    804dbb3 <main+0x3f93>
 804dc2f:	83 f9 08             	cmp    $0x8,%ecx
 804dc32:	0f 84 eb fe ff ff    	je     804db23 <main+0x3f03>
 804dc38:	90                   	nop
 804dc39:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804dc40:	8b 55 08             	mov    0x8(%ebp),%edx
 804dc43:	31 db                	xor    %ebx,%ebx
 804dc45:	8b 04 8a             	mov    (%edx,%ecx,4),%eax
 804dc48:	8b 50 04             	mov    0x4(%eax),%edx
 804dc4b:	85 d2                	test   %edx,%edx
 804dc4d:	74 08                	je     804dc57 <main+0x4037>
 804dc4f:	8b 58 08             	mov    0x8(%eax),%ebx
 804dc52:	89 5a 08             	mov    %ebx,0x8(%edx)
 804dc55:	89 d3                	mov    %edx,%ebx
 804dc57:	8b 50 08             	mov    0x8(%eax),%edx
 804dc5a:	85 d2                	test   %edx,%edx
 804dc5c:	74 22                	je     804dc80 <main+0x4060>
 804dc5e:	89 5a 04             	mov    %ebx,0x4(%edx)
 804dc61:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 804dc68:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 804dc6f:	83 20 fe             	andl   $0xfffffffe,(%eax)
 804dc72:	83 c0 04             	add    $0x4,%eax
 804dc75:	e9 ab fe ff ff       	jmp    804db25 <main+0x3f05>
 804dc7a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804dc80:	8b 55 08             	mov    0x8(%ebp),%edx
 804dc83:	89 1c 8a             	mov    %ebx,(%edx,%ecx,4)
 804dc86:	eb d9                	jmp    804dc61 <main+0x4041>
 804dc88:	90                   	nop
 804dc89:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804dc90:	55                   	push   %ebp
 804dc91:	89 e5                	mov    %esp,%ebp
 804dc93:	57                   	push   %edi
 804dc94:	56                   	push   %esi
 804dc95:	53                   	push   %ebx
 804dc96:	83 ec 04             	sub    $0x4,%esp
 804dc99:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 804dc9c:	85 c9                	test   %ecx,%ecx
 804dc9e:	0f 84 99 00 00 00    	je     804dd3d <main+0x411d>
 804dca4:	8b 59 fc             	mov    -0x4(%ecx),%ebx
 804dca7:	8d 51 fc             	lea    -0x4(%ecx),%edx
 804dcaa:	89 d0                	mov    %edx,%eax
 804dcac:	f6 c3 01             	test   $0x1,%bl
 804dcaf:	0f 85 88 00 00 00    	jne    804dd3d <main+0x411d>
 804dcb5:	83 cb 01             	or     $0x1,%ebx
 804dcb8:	89 59 fc             	mov    %ebx,-0x4(%ecx)
 804dcbb:	31 c9                	xor    %ecx,%ecx
 804dcbd:	89 5d f0             	mov    %ebx,-0x10(%ebp)
 804dcc0:	81 e3 00 fe ff ff    	and    $0xfffffe00,%ebx
 804dcc6:	81 fb 00 02 00 00    	cmp    $0x200,%ebx
 804dccc:	76 22                	jbe    804dcf0 <main+0x40d0>
 804dcce:	be 00 02 00 00       	mov    $0x200,%esi
 804dcd3:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804dcd9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804dce0:	83 c1 01             	add    $0x1,%ecx
 804dce3:	89 f7                	mov    %esi,%edi
 804dce5:	d3 e7                	shl    %cl,%edi
 804dce7:	39 df                	cmp    %ebx,%edi
 804dce9:	72 f5                	jb     804dce0 <main+0x40c0>
 804dceb:	83 f9 06             	cmp    $0x6,%ecx
 804dcee:	7f 30                	jg     804dd20 <main+0x4100>
 804dcf0:	31 d3                	xor    %edx,%ebx
 804dcf2:	8b 33                	mov    (%ebx),%esi
 804dcf4:	f7 c6 01 00 00 00    	test   $0x1,%esi
 804dcfa:	74 24                	je     804dd20 <main+0x4100>
 804dcfc:	8b 7d 08             	mov    0x8(%ebp),%edi
 804dcff:	33 75 f0             	xor    -0x10(%ebp),%esi
 804dd02:	8d 3c 8f             	lea    (%edi,%ecx,4),%edi
 804dd05:	81 e6 00 fe ff ff    	and    $0xfffffe00,%esi
 804dd0b:	89 7d f0             	mov    %edi,-0x10(%ebp)
 804dd0e:	0f 84 94 00 00 00    	je     804dda8 <main+0x4188>
 804dd14:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804dd1a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 804dd20:	8b 5d 08             	mov    0x8(%ebp),%ebx
 804dd23:	8b 14 8b             	mov    (%ebx,%ecx,4),%edx
 804dd26:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 804dd2d:	85 d2                	test   %edx,%edx
 804dd2f:	89 50 04             	mov    %edx,0x4(%eax)
 804dd32:	74 03                	je     804dd37 <main+0x4117>
 804dd34:	89 42 08             	mov    %eax,0x8(%edx)
 804dd37:	8b 7d 08             	mov    0x8(%ebp),%edi
 804dd3a:	89 04 8f             	mov    %eax,(%edi,%ecx,4)
 804dd3d:	83 c4 04             	add    $0x4,%esp
 804dd40:	5b                   	pop    %ebx
 804dd41:	5e                   	pop    %esi
 804dd42:	5f                   	pop    %edi
 804dd43:	5d                   	pop    %ebp
 804dd44:	c3                   	ret    
 804dd45:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804dd49:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804dd50:	8b 7b 04             	mov    0x4(%ebx),%edi
 804dd53:	89 7e 04             	mov    %edi,0x4(%esi)
 804dd56:	8b 73 04             	mov    0x4(%ebx),%esi
 804dd59:	85 f6                	test   %esi,%esi
 804dd5b:	74 06                	je     804dd63 <main+0x4143>
 804dd5d:	8b 7b 08             	mov    0x8(%ebx),%edi
 804dd60:	89 7e 08             	mov    %edi,0x8(%esi)
 804dd63:	39 da                	cmp    %ebx,%edx
 804dd65:	76 02                	jbe    804dd69 <main+0x4149>
 804dd67:	89 d8                	mov    %ebx,%eax
 804dd69:	8b 30                	mov    (%eax),%esi
 804dd6b:	83 c1 01             	add    $0x1,%ecx
 804dd6e:	81 e6 00 fe ff ff    	and    $0xfffffe00,%esi
 804dd74:	01 f6                	add    %esi,%esi
 804dd76:	83 ce 01             	or     $0x1,%esi
 804dd79:	83 f9 06             	cmp    $0x6,%ecx
 804dd7c:	89 30                	mov    %esi,(%eax)
 804dd7e:	7f a0                	jg     804dd20 <main+0x4100>
 804dd80:	89 f3                	mov    %esi,%ebx
 804dd82:	89 c2                	mov    %eax,%edx
 804dd84:	81 e3 00 fe ff ff    	and    $0xfffffe00,%ebx
 804dd8a:	31 c3                	xor    %eax,%ebx
 804dd8c:	8b 3b                	mov    (%ebx),%edi
 804dd8e:	f7 c7 01 00 00 00    	test   $0x1,%edi
 804dd94:	74 8a                	je     804dd20 <main+0x4100>
 804dd96:	31 fe                	xor    %edi,%esi
 804dd98:	83 45 f0 04          	addl   $0x4,-0x10(%ebp)
 804dd9c:	81 e6 00 fe ff ff    	and    $0xfffffe00,%esi
 804dda2:	0f 85 78 ff ff ff    	jne    804dd20 <main+0x4100>
 804dda8:	8b 73 08             	mov    0x8(%ebx),%esi
 804ddab:	85 f6                	test   %esi,%esi
 804ddad:	75 a1                	jne    804dd50 <main+0x4130>
 804ddaf:	8b 73 04             	mov    0x4(%ebx),%esi
 804ddb2:	8b 7d f0             	mov    -0x10(%ebp),%edi
 804ddb5:	89 37                	mov    %esi,(%edi)
 804ddb7:	eb a0                	jmp    804dd59 <main+0x4139>
 804ddb9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804ddc0:	55                   	push   %ebp
 804ddc1:	89 e5                	mov    %esp,%ebp
 804ddc3:	57                   	push   %edi
 804ddc4:	56                   	push   %esi
 804ddc5:	53                   	push   %ebx
 804ddc6:	83 ec 3c             	sub    $0x3c,%esp
 804ddc9:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 804ddcc:	8b 45 08             	mov    0x8(%ebp),%eax
 804ddcf:	8b 4d 10             	mov    0x10(%ebp),%ecx
 804ddd2:	85 db                	test   %ebx,%ebx
 804ddd4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 804ddd7:	0f 84 fe 00 00 00    	je     804dedb <main+0x42bb>
 804dddd:	8d 51 04             	lea    0x4(%ecx),%edx
 804dde0:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 804dde3:	8b 53 fc             	mov    -0x4(%ebx),%edx
 804dde6:	8d 7b fc             	lea    -0x4(%ebx),%edi
 804dde9:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 804ddec:	89 d0                	mov    %edx,%eax
 804ddee:	25 00 fe ff ff       	and    $0xfffffe00,%eax
 804ddf3:	39 45 d4             	cmp    %eax,-0x2c(%ebp)
 804ddf6:	76 4c                	jbe    804de44 <main+0x4224>
 804ddf8:	89 fe                	mov    %edi,%esi
 804ddfa:	31 c6                	xor    %eax,%esi
 804ddfc:	39 f7                	cmp    %esi,%edi
 804ddfe:	72 50                	jb     804de50 <main+0x4230>
 804de00:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 804de04:	8b 45 e0             	mov    -0x20(%ebp),%eax
 804de07:	89 04 24             	mov    %eax,(%esp)
 804de0a:	e8 01 fd ff ff       	call   804db10 <main+0x3ef0>
 804de0f:	85 c0                	test   %eax,%eax
 804de11:	89 c6                	mov    %eax,%esi
 804de13:	0f 84 d1 00 00 00    	je     804deea <main+0x42ca>
 804de19:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 804de1c:	8b 02                	mov    (%edx),%eax
 804de1e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 804de22:	89 34 24             	mov    %esi,(%esp)
 804de25:	25 00 fe ff ff       	and    $0xfffffe00,%eax
 804de2a:	89 44 24 08          	mov    %eax,0x8(%esp)
 804de2e:	e8 41 b7 ff ff       	call   8049574 <memcpy@plt>
 804de33:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 804de37:	8b 7d e0             	mov    -0x20(%ebp),%edi
 804de3a:	89 f3                	mov    %esi,%ebx
 804de3c:	89 3c 24             	mov    %edi,(%esp)
 804de3f:	e8 4c fe ff ff       	call   804dc90 <main+0x4070>
 804de44:	83 c4 3c             	add    $0x3c,%esp
 804de47:	89 d8                	mov    %ebx,%eax
 804de49:	5b                   	pop    %ebx
 804de4a:	5e                   	pop    %esi
 804de4b:	5f                   	pop    %edi
 804de4c:	5d                   	pop    %ebp
 804de4d:	c3                   	ret    
 804de4e:	66 90                	xchg   %ax,%ax
 804de50:	8d 3c 00             	lea    (%eax,%eax,1),%edi
 804de53:	89 7d dc             	mov    %edi,-0x24(%ebp)
 804de56:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 804de59:	39 7d dc             	cmp    %edi,-0x24(%ebp)
 804de5c:	72 a2                	jb     804de00 <main+0x41e0>
 804de5e:	8b 3e                	mov    (%esi),%edi
 804de60:	31 fa                	xor    %edi,%edx
 804de62:	81 e2 00 fe ff ff    	and    $0xfffffe00,%edx
 804de68:	75 96                	jne    804de00 <main+0x41e0>
 804de6a:	83 e7 01             	and    $0x1,%edi
 804de6d:	74 91                	je     804de00 <main+0x41e0>
 804de6f:	31 c9                	xor    %ecx,%ecx
 804de71:	3d 00 02 00 00       	cmp    $0x200,%eax
 804de76:	76 13                	jbe    804de8b <main+0x426b>
 804de78:	ba 00 02 00 00       	mov    $0x200,%edx
 804de7d:	8d 76 00             	lea    0x0(%esi),%esi
 804de80:	83 c1 01             	add    $0x1,%ecx
 804de83:	89 d7                	mov    %edx,%edi
 804de85:	d3 e7                	shl    %cl,%edi
 804de87:	39 f8                	cmp    %edi,%eax
 804de89:	77 f5                	ja     804de80 <main+0x4260>
 804de8b:	8b 46 08             	mov    0x8(%esi),%eax
 804de8e:	85 c0                	test   %eax,%eax
 804de90:	74 3e                	je     804ded0 <main+0x42b0>
 804de92:	8b 56 04             	mov    0x4(%esi),%edx
 804de95:	89 50 04             	mov    %edx,0x4(%eax)
 804de98:	8b 46 04             	mov    0x4(%esi),%eax
 804de9b:	85 c0                	test   %eax,%eax
 804de9d:	74 06                	je     804dea5 <main+0x4285>
 804de9f:	8b 56 08             	mov    0x8(%esi),%edx
 804dea2:	89 50 08             	mov    %edx,0x8(%eax)
 804dea5:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 804dea8:	8b 17                	mov    (%edi),%edx
 804deaa:	89 d0                	mov    %edx,%eax
 804deac:	81 e2 ff 01 00 00    	and    $0x1ff,%edx
 804deb2:	25 00 fe ff ff       	and    $0xfffffe00,%eax
 804deb7:	01 c0                	add    %eax,%eax
 804deb9:	09 d0                	or     %edx,%eax
 804debb:	89 07                	mov    %eax,(%edi)
 804debd:	83 c4 3c             	add    $0x3c,%esp
 804dec0:	89 d8                	mov    %ebx,%eax
 804dec2:	5b                   	pop    %ebx
 804dec3:	5e                   	pop    %esi
 804dec4:	5f                   	pop    %edi
 804dec5:	5d                   	pop    %ebp
 804dec6:	c3                   	ret    
 804dec7:	89 f6                	mov    %esi,%esi
 804dec9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804ded0:	8b 46 04             	mov    0x4(%esi),%eax
 804ded3:	8b 55 e0             	mov    -0x20(%ebp),%edx
 804ded6:	89 04 8a             	mov    %eax,(%edx,%ecx,4)
 804ded9:	eb bd                	jmp    804de98 <main+0x4278>
 804dedb:	89 4d 0c             	mov    %ecx,0xc(%ebp)
 804dede:	83 c4 3c             	add    $0x3c,%esp
 804dee1:	5b                   	pop    %ebx
 804dee2:	5e                   	pop    %esi
 804dee3:	5f                   	pop    %edi
 804dee4:	5d                   	pop    %ebp
 804dee5:	e9 26 fc ff ff       	jmp    804db10 <main+0x3ef0>
 804deea:	31 db                	xor    %ebx,%ebx
 804deec:	e9 53 ff ff ff       	jmp    804de44 <main+0x4224>
 804def1:	eb 0d                	jmp    804df00 <main+0x42e0>
 804def3:	90                   	nop
 804def4:	90                   	nop
 804def5:	90                   	nop
 804def6:	90                   	nop
 804def7:	90                   	nop
 804def8:	90                   	nop
 804def9:	90                   	nop
 804defa:	90                   	nop
 804defb:	90                   	nop
 804defc:	90                   	nop
 804defd:	90                   	nop
 804defe:	90                   	nop
 804deff:	90                   	nop
 804df00:	55                   	push   %ebp
 804df01:	31 c0                	xor    %eax,%eax
 804df03:	89 e5                	mov    %esp,%ebp
 804df05:	57                   	push   %edi
 804df06:	8b 7d 08             	mov    0x8(%ebp),%edi
 804df09:	56                   	push   %esi
 804df0a:	8b 75 0c             	mov    0xc(%ebp),%esi
 804df0d:	53                   	push   %ebx
 804df0e:	c7 04 07 00 00 00 00 	movl   $0x0,(%edi,%eax,1)
 804df15:	83 c0 04             	add    $0x4,%eax
 804df18:	83 f8 20             	cmp    $0x20,%eax
 804df1b:	72 f1                	jb     804df0e <main+0x42ee>
 804df1d:	8d 86 ff ff 01 00    	lea    0x1ffff(%esi),%eax
 804df23:	03 75 10             	add    0x10(%ebp),%esi
 804df26:	25 00 00 fe ff       	and    $0xfffe0000,%eax
 804df2b:	39 f0                	cmp    %esi,%eax
 804df2d:	73 3e                	jae    804df6d <main+0x434d>
 804df2f:	29 c6                	sub    %eax,%esi
 804df31:	81 e6 00 00 fe ff    	and    $0xfffe0000,%esi
 804df37:	74 34                	je     804df6d <main+0x434d>
 804df39:	8b 57 1c             	mov    0x1c(%edi),%edx
 804df3c:	31 c9                	xor    %ecx,%ecx
 804df3e:	eb 02                	jmp    804df42 <main+0x4322>
 804df40:	89 da                	mov    %ebx,%edx
 804df42:	85 d2                	test   %edx,%edx
 804df44:	89 c3                	mov    %eax,%ebx
 804df46:	c7 00 01 00 02 00    	movl   $0x20001,(%eax)
 804df4c:	89 50 04             	mov    %edx,0x4(%eax)
 804df4f:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 804df56:	74 03                	je     804df5b <main+0x433b>
 804df58:	89 42 08             	mov    %eax,0x8(%edx)
 804df5b:	81 c1 00 00 02 00    	add    $0x20000,%ecx
 804df61:	05 00 00 02 00       	add    $0x20000,%eax
 804df66:	39 ce                	cmp    %ecx,%esi
 804df68:	77 d6                	ja     804df40 <main+0x4320>
 804df6a:	89 5f 1c             	mov    %ebx,0x1c(%edi)
 804df6d:	5b                   	pop    %ebx
 804df6e:	5e                   	pop    %esi
 804df6f:	5f                   	pop    %edi
 804df70:	5d                   	pop    %ebp
 804df71:	c3                   	ret    
 804df72:	90                   	nop
 804df73:	90                   	nop
 804df74:	90                   	nop
 804df75:	90                   	nop
 804df76:	90                   	nop
 804df77:	90                   	nop
 804df78:	90                   	nop
 804df79:	90                   	nop
 804df7a:	90                   	nop
 804df7b:	90                   	nop
 804df7c:	90                   	nop
 804df7d:	90                   	nop
 804df7e:	90                   	nop
 804df7f:	90                   	nop
 804df80:	55                   	push   %ebp
 804df81:	89 e5                	mov    %esp,%ebp
 804df83:	8b 45 08             	mov    0x8(%ebp),%eax
 804df86:	5d                   	pop    %ebp
 804df87:	8b 40 08             	mov    0x8(%eax),%eax
 804df8a:	d1 e8                	shr    %eax
 804df8c:	c3                   	ret    
 804df8d:	8d 76 00             	lea    0x0(%esi),%esi
 804df90:	55                   	push   %ebp
 804df91:	89 e5                	mov    %esp,%ebp
 804df93:	53                   	push   %ebx
 804df94:	89 d3                	mov    %edx,%ebx
 804df96:	83 ec 14             	sub    $0x14,%esp
 804df99:	8d 42 0c             	lea    0xc(%edx),%eax
 804df9c:	89 04 24             	mov    %eax,(%esp)
 804df9f:	e8 10 b6 ff ff       	call   80495b4 <malloc@plt>
 804dfa4:	85 c0                	test   %eax,%eax
 804dfa6:	74 03                	je     804dfab <main+0x438b>
 804dfa8:	89 58 08             	mov    %ebx,0x8(%eax)
 804dfab:	83 c4 14             	add    $0x14,%esp
 804dfae:	5b                   	pop    %ebx
 804dfaf:	5d                   	pop    %ebp
 804dfb0:	c3                   	ret    
 804dfb1:	eb 0d                	jmp    804dfc0 <main+0x43a0>
 804dfb3:	90                   	nop
 804dfb4:	90                   	nop
 804dfb5:	90                   	nop
 804dfb6:	90                   	nop
 804dfb7:	90                   	nop
 804dfb8:	90                   	nop
 804dfb9:	90                   	nop
 804dfba:	90                   	nop
 804dfbb:	90                   	nop
 804dfbc:	90                   	nop
 804dfbd:	90                   	nop
 804dfbe:	90                   	nop
 804dfbf:	90                   	nop
 804dfc0:	55                   	push   %ebp
 804dfc1:	89 e5                	mov    %esp,%ebp
 804dfc3:	57                   	push   %edi
 804dfc4:	56                   	push   %esi
 804dfc5:	31 f6                	xor    %esi,%esi
 804dfc7:	53                   	push   %ebx
 804dfc8:	31 db                	xor    %ebx,%ebx
 804dfca:	83 ec 5c             	sub    $0x5c,%esp
 804dfcd:	89 55 cc             	mov    %edx,-0x34(%ebp)
 804dfd0:	0f be d1             	movsbl %cl,%edx
 804dfd3:	88 4d cb             	mov    %cl,-0x35(%ebp)
 804dfd6:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 804dfd9:	89 45 d0             	mov    %eax,-0x30(%ebp)
 804dfdc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 804dfdf:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 804dfe6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 804dfe9:	89 55 c0             	mov    %edx,-0x40(%ebp)
 804dfec:	0f b6 04 19          	movzbl (%ecx,%ebx,1),%eax
 804dff0:	3a 45 cb             	cmp    -0x35(%ebp),%al
 804dff3:	0f 84 b0 00 00 00    	je     804e0a9 <main+0x4489>
 804dff9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804e000:	8d 4b 01             	lea    0x1(%ebx),%ecx
 804e003:	3c 2e                	cmp    $0x2e,%al
 804e005:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 804e008:	0f 84 22 02 00 00    	je     804e230 <main+0x4610>
 804e00e:	7f 40                	jg     804e050 <main+0x4430>
 804e010:	3c 2a                	cmp    $0x2a,%al
 804e012:	0f 84 28 03 00 00    	je     804e340 <main+0x4720>
 804e018:	0f 8f b2 00 00 00    	jg     804e0d0 <main+0x44b0>
 804e01e:	84 c0                	test   %al,%al
 804e020:	0f 85 2a 04 00 00    	jne    804e450 <main+0x4830>
 804e026:	8b 45 e0             	mov    -0x20(%ebp),%eax
 804e029:	85 c0                	test   %eax,%eax
 804e02b:	75 05                	jne    804e032 <main+0x4412>
 804e02d:	eb 11                	jmp    804e040 <main+0x4420>
 804e02f:	90                   	nop
 804e030:	89 d8                	mov    %ebx,%eax
 804e032:	8b 18                	mov    (%eax),%ebx
 804e034:	89 04 24             	mov    %eax,(%esp)
 804e037:	e8 18 ba ff ff       	call   8049a54 <free@plt>
 804e03c:	85 db                	test   %ebx,%ebx
 804e03e:	75 f0                	jne    804e030 <main+0x4410>
 804e040:	83 c4 5c             	add    $0x5c,%esp
 804e043:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 804e048:	5b                   	pop    %ebx
 804e049:	5e                   	pop    %esi
 804e04a:	5f                   	pop    %edi
 804e04b:	5d                   	pop    %ebp
 804e04c:	c3                   	ret    
 804e04d:	8d 76 00             	lea    0x0(%esi),%esi
 804e050:	3c 5b                	cmp    $0x5b,%al
 804e052:	0f 84 f8 01 00 00    	je     804e250 <main+0x4630>
 804e058:	0f 8f d2 00 00 00    	jg     804e130 <main+0x4510>
 804e05e:	3c 3f                	cmp    $0x3f,%al
 804e060:	0f 84 8a 03 00 00    	je     804e3f0 <main+0x47d0>
 804e066:	0f be f8             	movsbl %al,%edi
 804e069:	8b 45 d0             	mov    -0x30(%ebp),%eax
 804e06c:	ba 02 00 00 00       	mov    $0x2,%edx
 804e071:	e8 1a ff ff ff       	call   804df90 <main+0x4370>
 804e076:	85 c0                	test   %eax,%eax
 804e078:	74 ac                	je     804e026 <main+0x4406>
 804e07a:	89 fa                	mov    %edi,%edx
 804e07c:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
 804e080:	88 50 0d             	mov    %dl,0xd(%eax)
 804e083:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 804e086:	89 c6                	mov    %eax,%esi
 804e088:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 804e08e:	89 50 04             	mov    %edx,0x4(%eax)
 804e091:	89 02                	mov    %eax,(%edx)
 804e093:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 804e096:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 804e099:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 804e09c:	0f b6 04 19          	movzbl (%ecx,%ebx,1),%eax
 804e0a0:	3a 45 cb             	cmp    -0x35(%ebp),%al
 804e0a3:	0f 85 57 ff ff ff    	jne    804e000 <main+0x43e0>
 804e0a9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 804e0ac:	85 c0                	test   %eax,%eax
 804e0ae:	74 14                	je     804e0c4 <main+0x44a4>
 804e0b0:	8b 7d 08             	mov    0x8(%ebp),%edi
 804e0b3:	8b 57 04             	mov    0x4(%edi),%edx
 804e0b6:	89 02                	mov    %eax,(%edx)
 804e0b8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 804e0bb:	89 50 04             	mov    %edx,0x4(%eax)
 804e0be:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 804e0c1:	89 47 04             	mov    %eax,0x4(%edi)
 804e0c4:	83 c4 5c             	add    $0x5c,%esp
 804e0c7:	8d 43 01             	lea    0x1(%ebx),%eax
 804e0ca:	5b                   	pop    %ebx
 804e0cb:	5e                   	pop    %esi
 804e0cc:	5f                   	pop    %edi
 804e0cd:	5d                   	pop    %ebp
 804e0ce:	c3                   	ret    
 804e0cf:	90                   	nop
 804e0d0:	3c 2b                	cmp    $0x2b,%al
 804e0d2:	75 92                	jne    804e066 <main+0x4446>
 804e0d4:	85 f6                	test   %esi,%esi
 804e0d6:	0f 84 4a ff ff ff    	je     804e026 <main+0x4406>
 804e0dc:	8b 45 d0             	mov    -0x30(%ebp),%eax
 804e0df:	ba 03 00 00 00       	mov    $0x3,%edx
 804e0e4:	e8 a7 fe ff ff       	call   804df90 <main+0x4370>
 804e0e9:	85 c0                	test   %eax,%eax
 804e0eb:	0f 84 35 ff ff ff    	je     804e026 <main+0x4406>
 804e0f1:	c6 40 0c 07          	movb   $0x7,0xc(%eax)
 804e0f5:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 804e0f8:	31 c9                	xor    %ecx,%ecx
 804e0fa:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 804e100:	89 50 04             	mov    %edx,0x4(%eax)
 804e103:	89 02                	mov    %eax,(%edx)
 804e105:	89 f2                	mov    %esi,%edx
 804e107:	89 f6                	mov    %esi,%esi
 804e109:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804e110:	03 4a 08             	add    0x8(%edx),%ecx
 804e113:	8b 12                	mov    (%edx),%edx
 804e115:	85 d2                	test   %edx,%edx
 804e117:	75 f7                	jne    804e110 <main+0x44f0>
 804e119:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 804e11c:	66 89 48 0d          	mov    %cx,0xd(%eax)
 804e120:	e9 71 ff ff ff       	jmp    804e096 <main+0x4476>
 804e125:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804e129:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804e130:	3c 5c                	cmp    $0x5c,%al
 804e132:	0f 84 d8 00 00 00    	je     804e210 <main+0x45f0>
 804e138:	3c 7c                	cmp    $0x7c,%al
 804e13a:	0f 85 26 ff ff ff    	jne    804e066 <main+0x4446>
 804e140:	8b 45 d0             	mov    -0x30(%ebp),%eax
 804e143:	ba 03 00 00 00       	mov    $0x3,%edx
 804e148:	e8 43 fe ff ff       	call   804df90 <main+0x4370>
 804e14d:	85 c0                	test   %eax,%eax
 804e14f:	89 c7                	mov    %eax,%edi
 804e151:	0f 84 cf fe ff ff    	je     804e026 <main+0x4406>
 804e157:	c6 40 0c 06          	movb   $0x6,0xc(%eax)
 804e15b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 804e15e:	85 c0                	test   %eax,%eax
 804e160:	89 07                	mov    %eax,(%edi)
 804e162:	0f 84 88 04 00 00    	je     804e5f0 <main+0x49d0>
 804e168:	89 78 04             	mov    %edi,0x4(%eax)
 804e16b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 804e16e:	8d 55 e0             	lea    -0x20(%ebp),%edx
 804e171:	89 57 04             	mov    %edx,0x4(%edi)
 804e174:	ba 03 00 00 00       	mov    $0x3,%edx
 804e179:	89 7d e0             	mov    %edi,-0x20(%ebp)
 804e17c:	e8 0f fe ff ff       	call   804df90 <main+0x4370>
 804e181:	85 c0                	test   %eax,%eax
 804e183:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 804e186:	0f 84 9a fe ff ff    	je     804e026 <main+0x4406>
 804e18c:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 804e192:	31 d2                	xor    %edx,%edx
 804e194:	c6 40 0c 04          	movb   $0x4,0xc(%eax)
 804e198:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 804e19b:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 804e19e:	89 41 04             	mov    %eax,0x4(%ecx)
 804e1a1:	89 08                	mov    %ecx,(%eax)
 804e1a3:	8b 07                	mov    (%edi),%eax
 804e1a5:	31 c9                	xor    %ecx,%ecx
 804e1a7:	85 c0                	test   %eax,%eax
 804e1a9:	74 10                	je     804e1bb <main+0x459b>
 804e1ab:	90                   	nop
 804e1ac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804e1b0:	03 50 08             	add    0x8(%eax),%edx
 804e1b3:	8b 00                	mov    (%eax),%eax
 804e1b5:	85 c0                	test   %eax,%eax
 804e1b7:	75 f7                	jne    804e1b0 <main+0x4590>
 804e1b9:	89 d1                	mov    %edx,%ecx
 804e1bb:	66 89 4f 0d          	mov    %cx,0xd(%edi)
 804e1bf:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 804e1c2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 804e1c5:	8b 55 cc             	mov    -0x34(%ebp),%edx
 804e1c8:	03 55 d4             	add    -0x2c(%ebp),%edx
 804e1cb:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 804e1ce:	89 04 24             	mov    %eax,(%esp)
 804e1d1:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 804e1d4:	8b 45 d0             	mov    -0x30(%ebp),%eax
 804e1d7:	e8 e4 fd ff ff       	call   804dfc0 <main+0x43a0>
 804e1dc:	85 c0                	test   %eax,%eax
 804e1de:	0f 88 42 fe ff ff    	js     804e026 <main+0x4406>
 804e1e4:	8b 17                	mov    (%edi),%edx
 804e1e6:	31 c9                	xor    %ecx,%ecx
 804e1e8:	31 ff                	xor    %edi,%edi
 804e1ea:	85 d2                	test   %edx,%edx
 804e1ec:	74 0d                	je     804e1fb <main+0x45db>
 804e1ee:	66 90                	xchg   %ax,%ax
 804e1f0:	03 4a 08             	add    0x8(%edx),%ecx
 804e1f3:	8b 12                	mov    (%edx),%edx
 804e1f5:	85 d2                	test   %edx,%edx
 804e1f7:	75 f7                	jne    804e1f0 <main+0x45d0>
 804e1f9:	89 cf                	mov    %ecx,%edi
 804e1fb:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 804e1fe:	8d 1c 18             	lea    (%eax,%ebx,1),%ebx
 804e201:	89 5d d4             	mov    %ebx,-0x2c(%ebp)
 804e204:	66 89 7a 0d          	mov    %di,0xd(%edx)
 804e208:	e9 89 fe ff ff       	jmp    804e096 <main+0x4476>
 804e20d:	8d 76 00             	lea    0x0(%esi),%esi
 804e210:	8b 45 cc             	mov    -0x34(%ebp),%eax
 804e213:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 804e216:	0f be 3c 08          	movsbl (%eax,%ecx,1),%edi
 804e21a:	85 ff                	test   %edi,%edi
 804e21c:	0f 84 04 fe ff ff    	je     804e026 <main+0x4406>
 804e222:	83 c3 02             	add    $0x2,%ebx
 804e225:	89 5d d4             	mov    %ebx,-0x2c(%ebp)
 804e228:	e9 3c fe ff ff       	jmp    804e069 <main+0x4449>
 804e22d:	8d 76 00             	lea    0x0(%esi),%esi
 804e230:	8b 45 d0             	mov    -0x30(%ebp),%eax
 804e233:	ba 01 00 00 00       	mov    $0x1,%edx
 804e238:	e8 53 fd ff ff       	call   804df90 <main+0x4370>
 804e23d:	85 c0                	test   %eax,%eax
 804e23f:	0f 84 e1 fd ff ff    	je     804e026 <main+0x4406>
 804e245:	c6 40 0c 02          	movb   $0x2,0xc(%eax)
 804e249:	e9 35 fe ff ff       	jmp    804e083 <main+0x4463>
 804e24e:	66 90                	xchg   %ax,%ax
 804e250:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 804e253:	ba 21 00 00 00       	mov    $0x21,%edx
 804e258:	8b 7d cc             	mov    -0x34(%ebp),%edi
 804e25b:	03 7d d4             	add    -0x2c(%ebp),%edi
 804e25e:	8b 40 04             	mov    0x4(%eax),%eax
 804e261:	89 7d c4             	mov    %edi,-0x3c(%ebp)
 804e264:	8b 00                	mov    (%eax),%eax
 804e266:	89 45 b8             	mov    %eax,-0x48(%ebp)
 804e269:	8b 45 d0             	mov    -0x30(%ebp),%eax
 804e26c:	e8 1f fd ff ff       	call   804df90 <main+0x4370>
 804e271:	85 c0                	test   %eax,%eax
 804e273:	0f 84 ad fd ff ff    	je     804e026 <main+0x4406>
 804e279:	8d 48 0d             	lea    0xd(%eax),%ecx
 804e27c:	bb 20 00 00 00       	mov    $0x20,%ebx
 804e281:	f6 c1 01             	test   $0x1,%cl
 804e284:	c6 40 0c 01          	movb   $0x1,0xc(%eax)
 804e288:	0f 85 61 02 00 00    	jne    804e4ef <main+0x48cf>
 804e28e:	f6 c1 02             	test   $0x2,%cl
 804e291:	0f 85 66 02 00 00    	jne    804e4fd <main+0x48dd>
 804e297:	89 de                	mov    %ebx,%esi
 804e299:	31 d2                	xor    %edx,%edx
 804e29b:	83 e6 fc             	and    $0xfffffffc,%esi
 804e29e:	c7 04 11 00 00 00 00 	movl   $0x0,(%ecx,%edx,1)
 804e2a5:	83 c2 04             	add    $0x4,%edx
 804e2a8:	39 f2                	cmp    %esi,%edx
 804e2aa:	72 f2                	jb     804e29e <main+0x467e>
 804e2ac:	01 d1                	add    %edx,%ecx
 804e2ae:	f6 c3 02             	test   $0x2,%bl
 804e2b1:	0f 85 a1 03 00 00    	jne    804e658 <main+0x4a38>
 804e2b7:	83 e3 01             	and    $0x1,%ebx
 804e2ba:	0f 85 90 03 00 00    	jne    804e650 <main+0x4a30>
 804e2c0:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 804e2c3:	31 f6                	xor    %esi,%esi
 804e2c5:	31 d2                	xor    %edx,%edx
 804e2c7:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 804e2ce:	01 f1                	add    %esi,%ecx
 804e2d0:	0f b6 19             	movzbl (%ecx),%ebx
 804e2d3:	80 fb 5d             	cmp    $0x5d,%bl
 804e2d6:	0f 84 1c 03 00 00    	je     804e5f8 <main+0x49d8>
 804e2dc:	83 c6 01             	add    $0x1,%esi
 804e2df:	83 c1 01             	add    $0x1,%ecx
 804e2e2:	83 fe 01             	cmp    $0x1,%esi
 804e2e5:	0f be db             	movsbl %bl,%ebx
 804e2e8:	0f 84 22 02 00 00    	je     804e510 <main+0x48f0>
 804e2ee:	83 fb 2d             	cmp    $0x2d,%ebx
 804e2f1:	0f 84 69 02 00 00    	je     804e560 <main+0x4940>
 804e2f7:	85 db                	test   %ebx,%ebx
 804e2f9:	0f 84 31 02 00 00    	je     804e530 <main+0x4910>
 804e2ff:	83 fb 5c             	cmp    $0x5c,%ebx
 804e302:	0f 84 38 02 00 00    	je     804e540 <main+0x4920>
 804e308:	89 df                	mov    %ebx,%edi
 804e30a:	c1 ff 1f             	sar    $0x1f,%edi
 804e30d:	c1 ef 1d             	shr    $0x1d,%edi
 804e310:	8d 0c 1f             	lea    (%edi,%ebx,1),%ecx
 804e313:	89 ca                	mov    %ecx,%edx
 804e315:	83 e1 07             	and    $0x7,%ecx
 804e318:	29 f9                	sub    %edi,%ecx
 804e31a:	bf 01 00 00 00       	mov    $0x1,%edi
 804e31f:	c1 fa 03             	sar    $0x3,%edx
 804e322:	d3 e7                	shl    %cl,%edi
 804e324:	83 c2 01             	add    $0x1,%edx
 804e327:	89 f9                	mov    %edi,%ecx
 804e329:	08 4c 10 0c          	or     %cl,0xc(%eax,%edx,1)
 804e32d:	89 da                	mov    %ebx,%edx
 804e32f:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 804e332:	01 f1                	add    %esi,%ecx
 804e334:	eb 9a                	jmp    804e2d0 <main+0x46b0>
 804e336:	8d 76 00             	lea    0x0(%esi),%esi
 804e339:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804e340:	85 f6                	test   %esi,%esi
 804e342:	0f 84 de fc ff ff    	je     804e026 <main+0x4406>
 804e348:	8b 45 d0             	mov    -0x30(%ebp),%eax
 804e34b:	ba 03 00 00 00       	mov    $0x3,%edx
 804e350:	e8 3b fc ff ff       	call   804df90 <main+0x4370>
 804e355:	85 c0                	test   %eax,%eax
 804e357:	89 c3                	mov    %eax,%ebx
 804e359:	0f 84 c7 fc ff ff    	je     804e026 <main+0x4406>
 804e35f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 804e362:	ba 03 00 00 00       	mov    $0x3,%edx
 804e367:	e8 24 fc ff ff       	call   804df90 <main+0x4370>
 804e36c:	85 c0                	test   %eax,%eax
 804e36e:	0f 84 b2 fc ff ff    	je     804e026 <main+0x4406>
 804e374:	8b 56 04             	mov    0x4(%esi),%edx
 804e377:	31 c9                	xor    %ecx,%ecx
 804e379:	89 33                	mov    %esi,(%ebx)
 804e37b:	c6 43 0c 06          	movb   $0x6,0xc(%ebx)
 804e37f:	89 53 04             	mov    %edx,0x4(%ebx)
 804e382:	8b 56 04             	mov    0x4(%esi),%edx
 804e385:	89 5e 04             	mov    %ebx,0x4(%esi)
 804e388:	31 f6                	xor    %esi,%esi
 804e38a:	89 1a                	mov    %ebx,(%edx)
 804e38c:	c6 40 0c 05          	movb   $0x5,0xc(%eax)
 804e390:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 804e393:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 804e399:	89 50 04             	mov    %edx,0x4(%eax)
 804e39c:	89 02                	mov    %eax,(%edx)
 804e39e:	8b 13                	mov    (%ebx),%edx
 804e3a0:	85 d2                	test   %edx,%edx
 804e3a2:	74 17                	je     804e3bb <main+0x479b>
 804e3a4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804e3aa:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 804e3b0:	03 4a 08             	add    0x8(%edx),%ecx
 804e3b3:	8b 12                	mov    (%edx),%edx
 804e3b5:	85 d2                	test   %edx,%edx
 804e3b7:	75 f7                	jne    804e3b0 <main+0x4790>
 804e3b9:	89 ce                	mov    %ecx,%esi
 804e3bb:	66 89 73 0d          	mov    %si,0xd(%ebx)
 804e3bf:	89 da                	mov    %ebx,%edx
 804e3c1:	31 c9                	xor    %ecx,%ecx
 804e3c3:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804e3c9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804e3d0:	03 4a 08             	add    0x8(%edx),%ecx
 804e3d3:	8b 12                	mov    (%edx),%edx
 804e3d5:	85 d2                	test   %edx,%edx
 804e3d7:	75 f7                	jne    804e3d0 <main+0x47b0>
 804e3d9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 804e3dc:	89 de                	mov    %ebx,%esi
 804e3de:	66 89 48 0d          	mov    %cx,0xd(%eax)
 804e3e2:	e9 af fc ff ff       	jmp    804e096 <main+0x4476>
 804e3e7:	89 f6                	mov    %esi,%esi
 804e3e9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804e3f0:	85 f6                	test   %esi,%esi
 804e3f2:	0f 84 2e fc ff ff    	je     804e026 <main+0x4406>
 804e3f8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 804e3fb:	ba 03 00 00 00       	mov    $0x3,%edx
 804e400:	e8 8b fb ff ff       	call   804df90 <main+0x4370>
 804e405:	85 c0                	test   %eax,%eax
 804e407:	0f 84 19 fc ff ff    	je     804e026 <main+0x4406>
 804e40d:	8b 56 04             	mov    0x4(%esi),%edx
 804e410:	31 c9                	xor    %ecx,%ecx
 804e412:	31 db                	xor    %ebx,%ebx
 804e414:	89 30                	mov    %esi,(%eax)
 804e416:	c6 40 0c 06          	movb   $0x6,0xc(%eax)
 804e41a:	89 50 04             	mov    %edx,0x4(%eax)
 804e41d:	8b 56 04             	mov    0x4(%esi),%edx
 804e420:	89 46 04             	mov    %eax,0x4(%esi)
 804e423:	89 02                	mov    %eax,(%edx)
 804e425:	8b 10                	mov    (%eax),%edx
 804e427:	85 d2                	test   %edx,%edx
 804e429:	74 10                	je     804e43b <main+0x481b>
 804e42b:	90                   	nop
 804e42c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804e430:	03 4a 08             	add    0x8(%edx),%ecx
 804e433:	8b 12                	mov    (%edx),%edx
 804e435:	85 d2                	test   %edx,%edx
 804e437:	75 f7                	jne    804e430 <main+0x4810>
 804e439:	89 cb                	mov    %ecx,%ebx
 804e43b:	66 89 58 0d          	mov    %bx,0xd(%eax)
 804e43f:	89 c6                	mov    %eax,%esi
 804e441:	e9 50 fc ff ff       	jmp    804e096 <main+0x4476>
 804e446:	8d 76 00             	lea    0x0(%esi),%esi
 804e449:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804e450:	3c 28                	cmp    $0x28,%al
 804e452:	0f 85 0e fc ff ff    	jne    804e066 <main+0x4446>
 804e458:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 804e45b:	ba 02 00 00 00       	mov    $0x2,%edx
 804e460:	8b 59 08             	mov    0x8(%ecx),%ebx
 804e463:	8d 43 02             	lea    0x2(%ebx),%eax
 804e466:	89 41 08             	mov    %eax,0x8(%ecx)
 804e469:	89 c8                	mov    %ecx,%eax
 804e46b:	e8 20 fb ff ff       	call   804df90 <main+0x4370>
 804e470:	85 c0                	test   %eax,%eax
 804e472:	89 c6                	mov    %eax,%esi
 804e474:	0f 84 ac fb ff ff    	je     804e026 <main+0x4406>
 804e47a:	88 58 0d             	mov    %bl,0xd(%eax)
 804e47d:	b9 29 00 00 00       	mov    $0x29,%ecx
 804e482:	89 df                	mov    %ebx,%edi
 804e484:	c6 40 0c 03          	movb   $0x3,0xc(%eax)
 804e488:	8b 55 cc             	mov    -0x34(%ebp),%edx
 804e48b:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 804e491:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 804e494:	03 55 d4             	add    -0x2c(%ebp),%edx
 804e497:	89 46 04             	mov    %eax,0x4(%esi)
 804e49a:	89 30                	mov    %esi,(%eax)
 804e49c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 804e49f:	89 75 e4             	mov    %esi,-0x1c(%ebp)
 804e4a2:	89 04 24             	mov    %eax,(%esp)
 804e4a5:	8b 45 d0             	mov    -0x30(%ebp),%eax
 804e4a8:	e8 13 fb ff ff       	call   804dfc0 <main+0x43a0>
 804e4ad:	85 c0                	test   %eax,%eax
 804e4af:	89 c3                	mov    %eax,%ebx
 804e4b1:	0f 88 6f fb ff ff    	js     804e026 <main+0x4406>
 804e4b7:	8b 45 d0             	mov    -0x30(%ebp),%eax
 804e4ba:	ba 02 00 00 00       	mov    $0x2,%edx
 804e4bf:	e8 cc fa ff ff       	call   804df90 <main+0x4370>
 804e4c4:	85 c0                	test   %eax,%eax
 804e4c6:	0f 84 5a fb ff ff    	je     804e026 <main+0x4406>
 804e4cc:	8d 57 01             	lea    0x1(%edi),%edx
 804e4cf:	01 5d d4             	add    %ebx,-0x2c(%ebp)
 804e4d2:	c6 40 0c 03          	movb   $0x3,0xc(%eax)
 804e4d6:	88 50 0d             	mov    %dl,0xd(%eax)
 804e4d9:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 804e4dc:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 804e4e2:	89 50 04             	mov    %edx,0x4(%eax)
 804e4e5:	89 02                	mov    %eax,(%edx)
 804e4e7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 804e4ea:	e9 a7 fb ff ff       	jmp    804e096 <main+0x4476>
 804e4ef:	c6 40 0d 00          	movb   $0x0,0xd(%eax)
 804e4f3:	8d 48 0e             	lea    0xe(%eax),%ecx
 804e4f6:	b3 1f                	mov    $0x1f,%bl
 804e4f8:	e9 91 fd ff ff       	jmp    804e28e <main+0x466e>
 804e4fd:	66 c7 01 00 00       	movw   $0x0,(%ecx)
 804e502:	83 eb 02             	sub    $0x2,%ebx
 804e505:	83 c1 02             	add    $0x2,%ecx
 804e508:	e9 8a fd ff ff       	jmp    804e297 <main+0x4677>
 804e50d:	8d 76 00             	lea    0x0(%esi),%esi
 804e510:	83 fb 5e             	cmp    $0x5e,%ebx
 804e513:	0f 85 d5 fd ff ff    	jne    804e2ee <main+0x46ce>
 804e519:	c7 45 bc 01 00 00 00 	movl   $0x1,-0x44(%ebp)
 804e520:	e9 ab fd ff ff       	jmp    804e2d0 <main+0x46b0>
 804e525:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804e529:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804e530:	89 04 24             	mov    %eax,(%esp)
 804e533:	e8 1c b5 ff ff       	call   8049a54 <free@plt>
 804e538:	e9 e9 fa ff ff       	jmp    804e026 <main+0x4406>
 804e53d:	8d 76 00             	lea    0x0(%esi),%esi
 804e540:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 804e543:	0f be 1c 32          	movsbl (%edx,%esi,1),%ebx
 804e547:	85 db                	test   %ebx,%ebx
 804e549:	74 e5                	je     804e530 <main+0x4910>
 804e54b:	83 c6 01             	add    $0x1,%esi
 804e54e:	e9 b5 fd ff ff       	jmp    804e308 <main+0x46e8>
 804e553:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804e559:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804e560:	85 d2                	test   %edx,%edx
 804e562:	0f 84 a0 fd ff ff    	je     804e308 <main+0x46e8>
 804e568:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 804e56b:	0f b6 1c 31          	movzbl (%ecx,%esi,1),%ebx
 804e56f:	84 db                	test   %bl,%bl
 804e571:	74 5d                	je     804e5d0 <main+0x49b0>
 804e573:	80 fb 5d             	cmp    $0x5d,%bl
 804e576:	74 58                	je     804e5d0 <main+0x49b0>
 804e578:	0f be db             	movsbl %bl,%ebx
 804e57b:	83 c6 01             	add    $0x1,%esi
 804e57e:	39 d3                	cmp    %edx,%ebx
 804e580:	0f 8c 71 fd ff ff    	jl     804e2f7 <main+0x46d7>
 804e586:	89 75 b4             	mov    %esi,-0x4c(%ebp)
 804e589:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804e590:	89 d7                	mov    %edx,%edi
 804e592:	c1 ff 1f             	sar    $0x1f,%edi
 804e595:	c1 ef 1d             	shr    $0x1d,%edi
 804e598:	8d 0c 17             	lea    (%edi,%edx,1),%ecx
 804e59b:	83 c2 01             	add    $0x1,%edx
 804e59e:	89 ce                	mov    %ecx,%esi
 804e5a0:	83 e1 07             	and    $0x7,%ecx
 804e5a3:	29 f9                	sub    %edi,%ecx
 804e5a5:	bf 01 00 00 00       	mov    $0x1,%edi
 804e5aa:	c1 fe 03             	sar    $0x3,%esi
 804e5ad:	d3 e7                	shl    %cl,%edi
 804e5af:	89 f9                	mov    %edi,%ecx
 804e5b1:	08 4c 30 0d          	or     %cl,0xd(%eax,%esi,1)
 804e5b5:	39 d3                	cmp    %edx,%ebx
 804e5b7:	7d d7                	jge    804e590 <main+0x4970>
 804e5b9:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 804e5bc:	e9 36 fd ff ff       	jmp    804e2f7 <main+0x46d7>
 804e5c1:	eb 0d                	jmp    804e5d0 <main+0x49b0>
 804e5c3:	90                   	nop
 804e5c4:	90                   	nop
 804e5c5:	90                   	nop
 804e5c6:	90                   	nop
 804e5c7:	90                   	nop
 804e5c8:	90                   	nop
 804e5c9:	90                   	nop
 804e5ca:	90                   	nop
 804e5cb:	90                   	nop
 804e5cc:	90                   	nop
 804e5cd:	90                   	nop
 804e5ce:	90                   	nop
 804e5cf:	90                   	nop
 804e5d0:	b9 20 00 00 00       	mov    $0x20,%ecx
 804e5d5:	ba 06 00 00 00       	mov    $0x6,%edx
 804e5da:	bb 2d 00 00 00       	mov    $0x2d,%ebx
 804e5df:	e9 45 fd ff ff       	jmp    804e329 <main+0x4709>
 804e5e4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804e5ea:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 804e5f0:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 804e5f3:	e9 73 fb ff ff       	jmp    804e16b <main+0x454b>
 804e5f8:	8b 55 bc             	mov    -0x44(%ebp),%edx
 804e5fb:	85 d2                	test   %edx,%edx
 804e5fd:	74 1d                	je     804e61c <main+0x49fc>
 804e5ff:	31 d2                	xor    %edx,%edx
 804e601:	eb 0d                	jmp    804e610 <main+0x49f0>
 804e603:	90                   	nop
 804e604:	90                   	nop
 804e605:	90                   	nop
 804e606:	90                   	nop
 804e607:	90                   	nop
 804e608:	90                   	nop
 804e609:	90                   	nop
 804e60a:	90                   	nop
 804e60b:	90                   	nop
 804e60c:	90                   	nop
 804e60d:	90                   	nop
 804e60e:	90                   	nop
 804e60f:	90                   	nop
 804e610:	83 c2 01             	add    $0x1,%edx
 804e613:	83 fa 20             	cmp    $0x20,%edx
 804e616:	f6 54 10 0c          	notb   0xc(%eax,%edx,1)
 804e61a:	75 f4                	jne    804e610 <main+0x49f0>
 804e61c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 804e61f:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 804e625:	89 50 04             	mov    %edx,0x4(%eax)
 804e628:	89 02                	mov    %eax,(%edx)
 804e62a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 804e62d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 804e630:	8d 74 06 01          	lea    0x1(%esi,%eax,1),%esi
 804e634:	8b 45 b8             	mov    -0x48(%ebp),%eax
 804e637:	89 75 d4             	mov    %esi,-0x2c(%ebp)
 804e63a:	85 c0                	test   %eax,%eax
 804e63c:	74 0a                	je     804e648 <main+0x4a28>
 804e63e:	8b 55 b8             	mov    -0x48(%ebp),%edx
 804e641:	8b 32                	mov    (%edx),%esi
 804e643:	e9 4e fa ff ff       	jmp    804e096 <main+0x4476>
 804e648:	8b 75 e0             	mov    -0x20(%ebp),%esi
 804e64b:	e9 46 fa ff ff       	jmp    804e096 <main+0x4476>
 804e650:	c6 01 00             	movb   $0x0,(%ecx)
 804e653:	e9 68 fc ff ff       	jmp    804e2c0 <main+0x46a0>
 804e658:	66 c7 01 00 00       	movw   $0x0,(%ecx)
 804e65d:	83 c1 02             	add    $0x2,%ecx
 804e660:	e9 52 fc ff ff       	jmp    804e2b7 <main+0x4697>
 804e665:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804e669:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804e670:	55                   	push   %ebp
 804e671:	89 e5                	mov    %esp,%ebp
 804e673:	57                   	push   %edi
 804e674:	56                   	push   %esi
 804e675:	53                   	push   %ebx
 804e676:	83 ec 3c             	sub    $0x3c,%esp
 804e679:	8b 45 08             	mov    0x8(%ebp),%eax
 804e67c:	8b 55 08             	mov    0x8(%ebp),%edx
 804e67f:	8d 75 e0             	lea    -0x20(%ebp),%esi
 804e682:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 804e689:	89 75 e4             	mov    %esi,-0x1c(%ebp)
 804e68c:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 804e692:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 804e699:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 804e6a0:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 804e6a7:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 804e6ae:	83 c0 0c             	add    $0xc,%eax
 804e6b1:	89 42 10             	mov    %eax,0x10(%edx)
 804e6b4:	8b 45 08             	mov    0x8(%ebp),%eax
 804e6b7:	ba 01 00 00 00       	mov    $0x1,%edx
 804e6bc:	e8 cf f8 ff ff       	call   804df90 <main+0x4370>
 804e6c1:	85 c0                	test   %eax,%eax
 804e6c3:	89 c3                	mov    %eax,%ebx
 804e6c5:	0f 84 05 01 00 00    	je     804e7d0 <main+0x4bb0>
 804e6cb:	89 34 24             	mov    %esi,(%esp)
 804e6ce:	8b 55 0c             	mov    0xc(%ebp),%edx
 804e6d1:	31 c9                	xor    %ecx,%ecx
 804e6d3:	8b 45 08             	mov    0x8(%ebp),%eax
 804e6d6:	e8 e5 f8 ff ff       	call   804dfc0 <main+0x43a0>
 804e6db:	85 c0                	test   %eax,%eax
 804e6dd:	0f 88 ed 00 00 00    	js     804e7d0 <main+0x4bb0>
 804e6e3:	c6 43 0c 08          	movb   $0x8,0xc(%ebx)
 804e6e7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 804e6ea:	31 ff                	xor    %edi,%edi
 804e6ec:	c7 03 00 00 00 00    	movl   $0x0,(%ebx)
 804e6f2:	89 43 04             	mov    %eax,0x4(%ebx)
 804e6f5:	89 18                	mov    %ebx,(%eax)
 804e6f7:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
 804e6fa:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 804e6fd:	85 db                	test   %ebx,%ebx
 804e6ff:	89 d8                	mov    %ebx,%eax
 804e701:	0f 84 ec 00 00 00    	je     804e7f3 <main+0x4bd3>
 804e707:	89 f6                	mov    %esi,%esi
 804e709:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804e710:	03 78 08             	add    0x8(%eax),%edi
 804e713:	8b 00                	mov    (%eax),%eax
 804e715:	85 c0                	test   %eax,%eax
 804e717:	75 f7                	jne    804e710 <main+0x4af0>
 804e719:	89 3c 24             	mov    %edi,(%esp)
 804e71c:	31 f6                	xor    %esi,%esi
 804e71e:	e8 91 ae ff ff       	call   80495b4 <malloc@plt>
 804e723:	85 c0                	test   %eax,%eax
 804e725:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 804e728:	74 26                	je     804e750 <main+0x4b30>
 804e72a:	85 db                	test   %ebx,%ebx
 804e72c:	74 07                	je     804e735 <main+0x4b15>
 804e72e:	8b 43 08             	mov    0x8(%ebx),%eax
 804e731:	39 c7                	cmp    %eax,%edi
 804e733:	73 75                	jae    804e7aa <main+0x4b8a>
 804e735:	31 f6                	xor    %esi,%esi
 804e737:	89 f6                	mov    %esi,%esi
 804e739:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804e740:	8b 45 08             	mov    0x8(%ebp),%eax
 804e743:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 804e746:	89 70 04             	mov    %esi,0x4(%eax)
 804e749:	be 01 00 00 00       	mov    $0x1,%esi
 804e74e:	89 10                	mov    %edx,(%eax)
 804e750:	8b 45 e0             	mov    -0x20(%ebp),%eax
 804e753:	85 c0                	test   %eax,%eax
 804e755:	75 0b                	jne    804e762 <main+0x4b42>
 804e757:	eb 17                	jmp    804e770 <main+0x4b50>
 804e759:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804e760:	89 d8                	mov    %ebx,%eax
 804e762:	8b 18                	mov    (%eax),%ebx
 804e764:	89 04 24             	mov    %eax,(%esp)
 804e767:	e8 e8 b2 ff ff       	call   8049a54 <free@plt>
 804e76c:	85 db                	test   %ebx,%ebx
 804e76e:	75 f0                	jne    804e760 <main+0x4b40>
 804e770:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 804e777:	00 
 804e778:	8b 55 08             	mov    0x8(%ebp),%edx
 804e77b:	8b 42 08             	mov    0x8(%edx),%eax
 804e77e:	89 04 24             	mov    %eax,(%esp)
 804e781:	e8 de ae ff ff       	call   8049664 <calloc@plt>
 804e786:	8b 55 08             	mov    0x8(%ebp),%edx
 804e789:	85 c0                	test   %eax,%eax
 804e78b:	89 42 14             	mov    %eax,0x14(%edx)
 804e78e:	74 4c                	je     804e7dc <main+0x4bbc>
 804e790:	83 c4 3c             	add    $0x3c,%esp
 804e793:	89 f0                	mov    %esi,%eax
 804e795:	5b                   	pop    %ebx
 804e796:	5e                   	pop    %esi
 804e797:	5f                   	pop    %edi
 804e798:	5d                   	pop    %ebp
 804e799:	c3                   	ret    
 804e79a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804e7a0:	8b 43 08             	mov    0x8(%ebx),%eax
 804e7a3:	8d 14 06             	lea    (%esi,%eax,1),%edx
 804e7a6:	39 fa                	cmp    %edi,%edx
 804e7a8:	77 96                	ja     804e740 <main+0x4b20>
 804e7aa:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 804e7ad:	8d 4b 0c             	lea    0xc(%ebx),%ecx
 804e7b0:	89 44 24 08          	mov    %eax,0x8(%esp)
 804e7b4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 804e7b8:	01 f2                	add    %esi,%edx
 804e7ba:	89 14 24             	mov    %edx,(%esp)
 804e7bd:	e8 b2 ad ff ff       	call   8049574 <memcpy@plt>
 804e7c2:	03 73 08             	add    0x8(%ebx),%esi
 804e7c5:	8b 1b                	mov    (%ebx),%ebx
 804e7c7:	85 db                	test   %ebx,%ebx
 804e7c9:	75 d5                	jne    804e7a0 <main+0x4b80>
 804e7cb:	e9 70 ff ff ff       	jmp    804e740 <main+0x4b20>
 804e7d0:	31 f6                	xor    %esi,%esi
 804e7d2:	83 c4 3c             	add    $0x3c,%esp
 804e7d5:	89 f0                	mov    %esi,%eax
 804e7d7:	5b                   	pop    %ebx
 804e7d8:	5e                   	pop    %esi
 804e7d9:	5f                   	pop    %edi
 804e7da:	5d                   	pop    %ebp
 804e7db:	c3                   	ret    
 804e7dc:	8b 02                	mov    (%edx),%eax
 804e7de:	31 f6                	xor    %esi,%esi
 804e7e0:	89 04 24             	mov    %eax,(%esp)
 804e7e3:	e8 6c b2 ff ff       	call   8049a54 <free@plt>
 804e7e8:	8b 45 08             	mov    0x8(%ebp),%eax
 804e7eb:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 804e7f1:	eb 9d                	jmp    804e790 <main+0x4b70>
 804e7f3:	89 df                	mov    %ebx,%edi
 804e7f5:	e9 1f ff ff ff       	jmp    804e719 <main+0x4af9>
 804e7fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804e800:	55                   	push   %ebp
 804e801:	89 e5                	mov    %esp,%ebp
 804e803:	83 ec 38             	sub    $0x38,%esp
 804e806:	89 75 f8             	mov    %esi,-0x8(%ebp)
 804e809:	8b 75 08             	mov    0x8(%ebp),%esi
 804e80c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 804e80f:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 804e812:	89 7d fc             	mov    %edi,-0x4(%ebp)
 804e815:	8b 46 08             	mov    0x8(%esi),%eax
 804e818:	d1 e8                	shr    %eax
 804e81a:	39 d8                	cmp    %ebx,%eax
 804e81c:	77 12                	ja     804e830 <main+0x4c10>
 804e81e:	31 ff                	xor    %edi,%edi
 804e820:	89 f8                	mov    %edi,%eax
 804e822:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 804e825:	8b 75 f8             	mov    -0x8(%ebp),%esi
 804e828:	8b 7d fc             	mov    -0x4(%ebp),%edi
 804e82b:	89 ec                	mov    %ebp,%esp
 804e82d:	5d                   	pop    %ebp
 804e82e:	c3                   	ret    
 804e82f:	90                   	nop
 804e830:	8b 46 14             	mov    0x14(%esi),%eax
 804e833:	8b 54 d8 04          	mov    0x4(%eax,%ebx,8),%edx
 804e837:	2b 14 d8             	sub    (%eax,%ebx,8),%edx
 804e83a:	74 e2                	je     804e81e <main+0x4bfe>
 804e83c:	8d 42 01             	lea    0x1(%edx),%eax
 804e83f:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 804e842:	89 04 24             	mov    %eax,(%esp)
 804e845:	e8 6a ad ff ff       	call   80495b4 <malloc@plt>
 804e84a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 804e84d:	85 c0                	test   %eax,%eax
 804e84f:	89 c7                	mov    %eax,%edi
 804e851:	74 cd                	je     804e820 <main+0x4c00>
 804e853:	8b 46 14             	mov    0x14(%esi),%eax
 804e856:	8b 04 d8             	mov    (%eax,%ebx,8),%eax
 804e859:	89 54 24 08          	mov    %edx,0x8(%esp)
 804e85d:	89 3c 24             	mov    %edi,(%esp)
 804e860:	89 44 24 04          	mov    %eax,0x4(%esp)
 804e864:	e8 0b ad ff ff       	call   8049574 <memcpy@plt>
 804e869:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 804e86c:	c6 04 17 00          	movb   $0x0,(%edi,%edx,1)
 804e870:	eb ae                	jmp    804e820 <main+0x4c00>
 804e872:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804e879:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804e880:	55                   	push   %ebp
 804e881:	89 e5                	mov    %esp,%ebp
 804e883:	57                   	push   %edi
 804e884:	89 c7                	mov    %eax,%edi
 804e886:	56                   	push   %esi
 804e887:	53                   	push   %ebx
 804e888:	83 ec 3c             	sub    $0x3c,%esp
 804e88b:	8b 5d 10             	mov    0x10(%ebp),%ebx
 804e88e:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 804e891:	8b 55 08             	mov    0x8(%ebp),%edx
 804e894:	39 da                	cmp    %ebx,%edx
 804e896:	74 6c                	je     804e904 <main+0x4ce4>
 804e898:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 804e89b:	39 d3                	cmp    %edx,%ebx
 804e89d:	73 02                	jae    804e8a1 <main+0x4c81>
 804e89f:	89 d3                	mov    %edx,%ebx
 804e8a1:	0f b6 02             	movzbl (%edx),%eax
 804e8a4:	8d 48 fd             	lea    -0x3(%eax),%ecx
 804e8a7:	80 f9 04             	cmp    $0x4,%cl
 804e8aa:	76 34                	jbe    804e8e0 <main+0x4cc0>
 804e8ac:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 804e8af:	8b 06                	mov    (%esi),%eax
 804e8b1:	85 c0                	test   %eax,%eax
 804e8b3:	75 15                	jne    804e8ca <main+0x4caa>
 804e8b5:	e9 b6 00 00 00       	jmp    804e970 <main+0x4d50>
 804e8ba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804e8c0:	8b 00                	mov    (%eax),%eax
 804e8c2:	85 c0                	test   %eax,%eax
 804e8c4:	0f 84 a6 00 00 00    	je     804e970 <main+0x4d50>
 804e8ca:	39 50 04             	cmp    %edx,0x4(%eax)
 804e8cd:	75 f1                	jne    804e8c0 <main+0x4ca0>
 804e8cf:	83 c4 3c             	add    $0x3c,%esp
 804e8d2:	b8 01 00 00 00       	mov    $0x1,%eax
 804e8d7:	5b                   	pop    %ebx
 804e8d8:	5e                   	pop    %esi
 804e8d9:	5f                   	pop    %edi
 804e8da:	5d                   	pop    %ebp
 804e8db:	c3                   	ret    
 804e8dc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804e8e0:	0f b6 c9             	movzbl %cl,%ecx
 804e8e3:	ff 24 8d 24 4f 05 08 	jmp    *0x8054f24(,%ecx,4)
 804e8ea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804e8f0:	3c 05                	cmp    $0x5,%al
 804e8f2:	0f b7 4a 01          	movzwl 0x1(%edx),%ecx
 804e8f6:	0f 84 f4 00 00 00    	je     804e9f0 <main+0x4dd0>
 804e8fc:	8d 54 0a 03          	lea    0x3(%edx,%ecx,1),%edx
 804e900:	39 da                	cmp    %ebx,%edx
 804e902:	75 97                	jne    804e89b <main+0x4c7b>
 804e904:	31 c0                	xor    %eax,%eax
 804e906:	83 c4 3c             	add    $0x3c,%esp
 804e909:	5b                   	pop    %ebx
 804e90a:	5e                   	pop    %esi
 804e90b:	5f                   	pop    %edi
 804e90c:	5d                   	pop    %ebp
 804e90d:	c3                   	ret    
 804e90e:	66 90                	xchg   %ax,%ax
 804e910:	0f b6 42 01          	movzbl 0x1(%edx),%eax
 804e914:	83 c2 02             	add    $0x2,%edx
 804e917:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 804e91a:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 804e91d:	89 34 81             	mov    %esi,(%ecx,%eax,4)
 804e920:	eb de                	jmp    804e900 <main+0x4ce0>
 804e922:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804e929:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804e930:	8d 72 03             	lea    0x3(%edx),%esi
 804e933:	0f b7 52 01          	movzwl 0x1(%edx),%edx
 804e937:	3c 07                	cmp    $0x7,%al
 804e939:	89 55 dc             	mov    %edx,-0x24(%ebp)
 804e93c:	0f 84 7e 00 00 00    	je     804e9c0 <main+0x4da0>
 804e942:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 804e946:	8b 55 0c             	mov    0xc(%ebp),%edx
 804e949:	89 f8                	mov    %edi,%eax
 804e94b:	89 34 24             	mov    %esi,(%esp)
 804e94e:	89 54 24 04          	mov    %edx,0x4(%esp)
 804e952:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 804e955:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 804e958:	e8 23 ff ff ff       	call   804e880 <main+0x4c60>
 804e95d:	85 c0                	test   %eax,%eax
 804e95f:	74 a3                	je     804e904 <main+0x4ce4>
 804e961:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 804e964:	8d 14 0e             	lea    (%esi,%ecx,1),%edx
 804e967:	eb 97                	jmp    804e900 <main+0x4ce0>
 804e969:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804e970:	8b 5f 0c             	mov    0xc(%edi),%ebx
 804e973:	85 db                	test   %ebx,%ebx
 804e975:	0f 84 84 00 00 00    	je     804e9ff <main+0x4ddf>
 804e97b:	8b 03                	mov    (%ebx),%eax
 804e97d:	85 c0                	test   %eax,%eax
 804e97f:	89 47 0c             	mov    %eax,0xc(%edi)
 804e982:	74 73                	je     804e9f7 <main+0x4dd7>
 804e984:	89 53 04             	mov    %edx,0x4(%ebx)
 804e987:	8b 57 08             	mov    0x8(%edi),%edx
 804e98a:	8d 43 08             	lea    0x8(%ebx),%eax
 804e98d:	c1 e2 02             	shl    $0x2,%edx
 804e990:	89 54 24 08          	mov    %edx,0x8(%esp)
 804e994:	8b 55 0c             	mov    0xc(%ebp),%edx
 804e997:	89 04 24             	mov    %eax,(%esp)
 804e99a:	89 54 24 04          	mov    %edx,0x4(%esp)
 804e99e:	e8 d1 ab ff ff       	call   8049574 <memcpy@plt>
 804e9a3:	8b 46 04             	mov    0x4(%esi),%eax
 804e9a6:	c7 03 00 00 00 00    	movl   $0x0,(%ebx)
 804e9ac:	89 5e 04             	mov    %ebx,0x4(%esi)
 804e9af:	89 18                	mov    %ebx,(%eax)
 804e9b1:	83 c4 3c             	add    $0x3c,%esp
 804e9b4:	b8 01 00 00 00       	mov    $0x1,%eax
 804e9b9:	5b                   	pop    %ebx
 804e9ba:	5e                   	pop    %esi
 804e9bb:	5f                   	pop    %edi
 804e9bc:	5d                   	pop    %ebp
 804e9bd:	c3                   	ret    
 804e9be:	66 90                	xchg   %ax,%ax
 804e9c0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 804e9c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 804e9c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 804e9cb:	89 f0                	mov    %esi,%eax
 804e9cd:	29 d0                	sub    %edx,%eax
 804e9cf:	89 04 24             	mov    %eax,(%esp)
 804e9d2:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 804e9d5:	89 f8                	mov    %edi,%eax
 804e9d7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 804e9da:	e8 a1 fe ff ff       	call   804e880 <main+0x4c60>
 804e9df:	85 c0                	test   %eax,%eax
 804e9e1:	0f 84 1d ff ff ff    	je     804e904 <main+0x4ce4>
 804e9e7:	89 f2                	mov    %esi,%edx
 804e9e9:	e9 12 ff ff ff       	jmp    804e900 <main+0x4ce0>
 804e9ee:	66 90                	xchg   %ax,%ax
 804e9f0:	f7 d9                	neg    %ecx
 804e9f2:	e9 05 ff ff ff       	jmp    804e8fc <main+0x4cdc>
 804e9f7:	8d 47 0c             	lea    0xc(%edi),%eax
 804e9fa:	89 47 10             	mov    %eax,0x10(%edi)
 804e9fd:	eb 85                	jmp    804e984 <main+0x4d64>
 804e9ff:	8b 47 08             	mov    0x8(%edi),%eax
 804ea02:	8d 04 85 08 00 00 00 	lea    0x8(,%eax,4),%eax
 804ea09:	89 04 24             	mov    %eax,(%esp)
 804ea0c:	89 55 d8             	mov    %edx,-0x28(%ebp)
 804ea0f:	e8 a0 ab ff ff       	call   80495b4 <malloc@plt>
 804ea14:	8b 55 d8             	mov    -0x28(%ebp),%edx
 804ea17:	85 c0                	test   %eax,%eax
 804ea19:	89 c3                	mov    %eax,%ebx
 804ea1b:	0f 85 63 ff ff ff    	jne    804e984 <main+0x4d64>
 804ea21:	31 c0                	xor    %eax,%eax
 804ea23:	e9 de fe ff ff       	jmp    804e906 <main+0x4ce6>
 804ea28:	90                   	nop
 804ea29:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804ea30:	55                   	push   %ebp
 804ea31:	89 e5                	mov    %esp,%ebp
 804ea33:	57                   	push   %edi
 804ea34:	56                   	push   %esi
 804ea35:	53                   	push   %ebx
 804ea36:	83 ec 4c             	sub    $0x4c,%esp
 804ea39:	8b 75 08             	mov    0x8(%ebp),%esi
 804ea3c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 804ea3f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 804ea42:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 804ea49:	8b 56 08             	mov    0x8(%esi),%edx
 804ea4c:	8b 46 14             	mov    0x14(%esi),%eax
 804ea4f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 804ea56:	00 
 804ea57:	c1 e2 02             	shl    $0x2,%edx
 804ea5a:	89 54 24 08          	mov    %edx,0x8(%esp)
 804ea5e:	89 04 24             	mov    %eax,(%esp)
 804ea61:	e8 ee ad ff ff       	call   8049854 <memset@plt>
 804ea66:	8b 55 0c             	mov    0xc(%ebp),%edx
 804ea69:	8d 4d e0             	lea    -0x20(%ebp),%ecx
 804ea6c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 804ea73:	00 
 804ea74:	8b 46 14             	mov    0x14(%esi),%eax
 804ea77:	89 44 24 04          	mov    %eax,0x4(%esp)
 804ea7b:	8b 06                	mov    (%esi),%eax
 804ea7d:	89 04 24             	mov    %eax,(%esp)
 804ea80:	89 f0                	mov    %esi,%eax
 804ea82:	e8 f9 fd ff ff       	call   804e880 <main+0x4c60>
 804ea87:	85 c0                	test   %eax,%eax
 804ea89:	0f 84 b7 01 00 00    	je     804ec46 <main+0x5026>
 804ea8f:	8b 55 0c             	mov    0xc(%ebp),%edx
 804ea92:	80 3a 00             	cmpb   $0x0,(%edx)
 804ea95:	0f 84 3a 03 00 00    	je     804edd5 <main+0x51b5>
 804ea9b:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 804ea9e:	83 c2 01             	add    $0x1,%edx
 804eaa1:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 804eaa4:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 804eaab:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 804eab2:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 804eab5:	85 db                	test   %ebx,%ebx
 804eab7:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 804eabe:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 804eac1:	75 43                	jne    804eb06 <main+0x4ee6>
 804eac3:	e9 08 01 00 00       	jmp    804ebd0 <main+0x4fb0>
 804eac8:	90                   	nop
 804eac9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804ead0:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 804ead3:	0f b6 48 01          	movzbl 0x1(%eax),%ecx
 804ead7:	83 c0 02             	add    $0x2,%eax
 804eada:	0f be 57 ff          	movsbl -0x1(%edi),%edx
 804eade:	89 43 04             	mov    %eax,0x4(%ebx)
 804eae1:	39 d1                	cmp    %edx,%ecx
 804eae3:	0f 84 57 02 00 00    	je     804ed40 <main+0x5120>
 804eae9:	8b 55 e0             	mov    -0x20(%ebp),%edx
 804eaec:	8b 46 0c             	mov    0xc(%esi),%eax
 804eaef:	85 c0                	test   %eax,%eax
 804eaf1:	89 03                	mov    %eax,(%ebx)
 804eaf3:	0f 84 c7 00 00 00    	je     804ebc0 <main+0x4fa0>
 804eaf9:	85 d2                	test   %edx,%edx
 804eafb:	89 5e 0c             	mov    %ebx,0xc(%esi)
 804eafe:	0f 84 cc 00 00 00    	je     804ebd0 <main+0x4fb0>
 804eb04:	89 d3                	mov    %edx,%ebx
 804eb06:	8b 03                	mov    (%ebx),%eax
 804eb08:	85 c0                	test   %eax,%eax
 804eb0a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 804eb0d:	0f 84 1d 02 00 00    	je     804ed30 <main+0x5110>
 804eb13:	8b 43 04             	mov    0x4(%ebx),%eax
 804eb16:	0f b6 10             	movzbl (%eax),%edx
 804eb19:	8d 48 01             	lea    0x1(%eax),%ecx
 804eb1c:	89 4b 04             	mov    %ecx,0x4(%ebx)
 804eb1f:	80 fa 01             	cmp    $0x1,%dl
 804eb22:	0f 84 78 01 00 00    	je     804eca0 <main+0x5080>
 804eb28:	72 a6                	jb     804ead0 <main+0x4eb0>
 804eb2a:	80 fa 02             	cmp    $0x2,%dl
 804eb2d:	0f 84 dd 01 00 00    	je     804ed10 <main+0x50f0>
 804eb33:	80 fa 08             	cmp    $0x8,%dl
 804eb36:	75 b1                	jne    804eae9 <main+0x4ec9>
 804eb38:	8b 4e 08             	mov    0x8(%esi),%ecx
 804eb3b:	8d 53 08             	lea    0x8(%ebx),%edx
 804eb3e:	8b 46 14             	mov    0x14(%esi),%eax
 804eb41:	89 54 24 04          	mov    %edx,0x4(%esp)
 804eb45:	c1 e1 02             	shl    $0x2,%ecx
 804eb48:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 804eb4c:	89 04 24             	mov    %eax,(%esp)
 804eb4f:	e8 20 aa ff ff       	call   8049574 <memcpy@plt>
 804eb54:	8b 55 e0             	mov    -0x20(%ebp),%edx
 804eb57:	85 d2                	test   %edx,%edx
 804eb59:	0f 84 f2 01 00 00    	je     804ed51 <main+0x5131>
 804eb5f:	8b 4e 0c             	mov    0xc(%esi),%ecx
 804eb62:	89 d0                	mov    %edx,%eax
 804eb64:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 804eb67:	eb 18                	jmp    804eb81 <main+0x4f61>
 804eb69:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804eb70:	85 c9                	test   %ecx,%ecx
 804eb72:	89 08                	mov    %ecx,(%eax)
 804eb74:	74 1a                	je     804eb90 <main+0x4f70>
 804eb76:	85 d2                	test   %edx,%edx
 804eb78:	89 46 0c             	mov    %eax,0xc(%esi)
 804eb7b:	74 23                	je     804eba0 <main+0x4f80>
 804eb7d:	89 c1                	mov    %eax,%ecx
 804eb7f:	89 d0                	mov    %edx,%eax
 804eb81:	8b 12                	mov    (%edx),%edx
 804eb83:	85 d2                	test   %edx,%edx
 804eb85:	75 e9                	jne    804eb70 <main+0x4f50>
 804eb87:	85 c9                	test   %ecx,%ecx
 804eb89:	8d 7d e0             	lea    -0x20(%ebp),%edi
 804eb8c:	89 08                	mov    %ecx,(%eax)
 804eb8e:	75 e6                	jne    804eb76 <main+0x4f56>
 804eb90:	85 d2                	test   %edx,%edx
 804eb92:	89 46 10             	mov    %eax,0x10(%esi)
 804eb95:	89 46 0c             	mov    %eax,0xc(%esi)
 804eb98:	75 e3                	jne    804eb7d <main+0x4f5d>
 804eb9a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804eba0:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 804eba3:	8b 7d d0             	mov    -0x30(%ebp),%edi
 804eba6:	31 d2                	xor    %edx,%edx
 804eba8:	85 c0                	test   %eax,%eax
 804ebaa:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 804ebb1:	89 03                	mov    %eax,(%ebx)
 804ebb3:	89 7d cc             	mov    %edi,-0x34(%ebp)
 804ebb6:	0f 85 3d ff ff ff    	jne    804eaf9 <main+0x4ed9>
 804ebbc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804ebc0:	85 d2                	test   %edx,%edx
 804ebc2:	89 5e 10             	mov    %ebx,0x10(%esi)
 804ebc5:	89 5e 0c             	mov    %ebx,0xc(%esi)
 804ebc8:	0f 85 36 ff ff ff    	jne    804eb04 <main+0x4ee4>
 804ebce:	66 90                	xchg   %ax,%ax
 804ebd0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 804ebd3:	89 c3                	mov    %eax,%ebx
 804ebd5:	89 45 e0             	mov    %eax,-0x20(%ebp)
 804ebd8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 804ebdb:	85 db                	test   %ebx,%ebx
 804ebdd:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 804ebe0:	0f 84 16 01 00 00    	je     804ecfc <main+0x50dc>
 804ebe6:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 804ebe9:	0f b6 02             	movzbl (%edx),%eax
 804ebec:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 804ebf0:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 804ebf4:	84 c0                	test   %al,%al
 804ebf6:	0f 85 b6 fe ff ff    	jne    804eab2 <main+0x4e92>
 804ebfc:	2b 55 0c             	sub    0xc(%ebp),%edx
 804ebff:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 804ec02:	eb 31                	jmp    804ec35 <main+0x5015>
 804ec04:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804ec0a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 804ec10:	8b 43 04             	mov    0x4(%ebx),%eax
 804ec13:	80 38 08             	cmpb   $0x8,(%eax)
 804ec16:	0f 84 4b 01 00 00    	je     804ed67 <main+0x5147>
 804ec1c:	8b 55 e0             	mov    -0x20(%ebp),%edx
 804ec1f:	8b 46 0c             	mov    0xc(%esi),%eax
 804ec22:	85 c0                	test   %eax,%eax
 804ec24:	89 03                	mov    %eax,(%ebx)
 804ec26:	0f 84 33 01 00 00    	je     804ed5f <main+0x513f>
 804ec2c:	85 d2                	test   %edx,%edx
 804ec2e:	89 5e 0c             	mov    %ebx,0xc(%esi)
 804ec31:	74 1d                	je     804ec50 <main+0x5030>
 804ec33:	89 d3                	mov    %edx,%ebx
 804ec35:	8b 03                	mov    (%ebx),%eax
 804ec37:	85 c0                	test   %eax,%eax
 804ec39:	89 45 e0             	mov    %eax,-0x20(%ebp)
 804ec3c:	75 d2                	jne    804ec10 <main+0x4ff0>
 804ec3e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 804ec41:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 804ec44:	eb ca                	jmp    804ec10 <main+0x4ff0>
 804ec46:	8b 5e 0c             	mov    0xc(%esi),%ebx
 804ec49:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 804ec50:	85 db                	test   %ebx,%ebx
 804ec52:	8d 7e 0c             	lea    0xc(%esi),%edi
 804ec55:	75 18                	jne    804ec6f <main+0x504f>
 804ec57:	eb 31                	jmp    804ec8a <main+0x506a>
 804ec59:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804ec60:	89 1c 24             	mov    %ebx,(%esp)
 804ec63:	e8 ec ad ff ff       	call   8049a54 <free@plt>
 804ec68:	8b 5e 0c             	mov    0xc(%esi),%ebx
 804ec6b:	85 db                	test   %ebx,%ebx
 804ec6d:	74 1b                	je     804ec8a <main+0x506a>
 804ec6f:	8b 03                	mov    (%ebx),%eax
 804ec71:	85 c0                	test   %eax,%eax
 804ec73:	89 46 0c             	mov    %eax,0xc(%esi)
 804ec76:	75 e8                	jne    804ec60 <main+0x5040>
 804ec78:	89 7e 10             	mov    %edi,0x10(%esi)
 804ec7b:	89 1c 24             	mov    %ebx,(%esp)
 804ec7e:	e8 d1 ad ff ff       	call   8049a54 <free@plt>
 804ec83:	8b 5e 0c             	mov    0xc(%esi),%ebx
 804ec86:	85 db                	test   %ebx,%ebx
 804ec88:	75 e5                	jne    804ec6f <main+0x504f>
 804ec8a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 804ec8d:	83 c4 4c             	add    $0x4c,%esp
 804ec90:	5b                   	pop    %ebx
 804ec91:	5e                   	pop    %esi
 804ec92:	5f                   	pop    %edi
 804ec93:	5d                   	pop    %ebp
 804ec94:	c3                   	ret    
 804ec95:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804ec99:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804eca0:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 804eca3:	0f b6 4a ff          	movzbl -0x1(%edx),%ecx
 804eca7:	89 ca                	mov    %ecx,%edx
 804eca9:	c0 fa 07             	sar    $0x7,%dl
 804ecac:	c0 ea 05             	shr    $0x5,%dl
 804ecaf:	8d 0c 0a             	lea    (%edx,%ecx,1),%ecx
 804ecb2:	88 4d c7             	mov    %cl,-0x39(%ebp)
 804ecb5:	c0 f9 03             	sar    $0x3,%cl
 804ecb8:	0f be f9             	movsbl %cl,%edi
 804ecbb:	0f b6 4d c7          	movzbl -0x39(%ebp),%ecx
 804ecbf:	0f b6 7c 38 01       	movzbl 0x1(%eax,%edi,1),%edi
 804ecc4:	83 e1 07             	and    $0x7,%ecx
 804ecc7:	28 d1                	sub    %dl,%cl
 804ecc9:	0f a3 cf             	bt     %ecx,%edi
 804eccc:	0f 83 17 fe ff ff    	jae    804eae9 <main+0x4ec9>
 804ecd2:	8d 53 08             	lea    0x8(%ebx),%edx
 804ecd5:	83 c0 21             	add    $0x21,%eax
 804ecd8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 804ecdf:	00 
 804ece0:	89 54 24 04          	mov    %edx,0x4(%esp)
 804ece4:	89 04 24             	mov    %eax,(%esp)
 804ece7:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 804ecea:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 804eced:	89 f0                	mov    %esi,%eax
 804ecef:	e8 8c fb ff ff       	call   804e880 <main+0x4c60>
 804ecf4:	85 c0                	test   %eax,%eax
 804ecf6:	0f 85 ed fd ff ff    	jne    804eae9 <main+0x4ec9>
 804ecfc:	8b 5e 0c             	mov    0xc(%esi),%ebx
 804ecff:	e9 4c ff ff ff       	jmp    804ec50 <main+0x5030>
 804ed04:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804ed0a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 804ed10:	8d 43 08             	lea    0x8(%ebx),%eax
 804ed13:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 804ed1a:	00 
 804ed1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 804ed1f:	89 0c 24             	mov    %ecx,(%esp)
 804ed22:	eb c3                	jmp    804ece7 <main+0x50c7>
 804ed24:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804ed2a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 804ed30:	8d 7d e0             	lea    -0x20(%ebp),%edi
 804ed33:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 804ed36:	e9 d8 fd ff ff       	jmp    804eb13 <main+0x4ef3>
 804ed3b:	90                   	nop
 804ed3c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804ed40:	8d 53 08             	lea    0x8(%ebx),%edx
 804ed43:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 804ed4a:	00 
 804ed4b:	89 54 24 04          	mov    %edx,0x4(%esp)
 804ed4f:	eb 93                	jmp    804ece4 <main+0x50c4>
 804ed51:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 804ed54:	8b 46 0c             	mov    0xc(%esi),%eax
 804ed57:	89 4d cc             	mov    %ecx,-0x34(%ebp)
 804ed5a:	e9 90 fd ff ff       	jmp    804eaef <main+0x4ecf>
 804ed5f:	89 5e 10             	mov    %ebx,0x10(%esi)
 804ed62:	e9 c5 fe ff ff       	jmp    804ec2c <main+0x500c>
 804ed67:	8b 4e 08             	mov    0x8(%esi),%ecx
 804ed6a:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 804ed6d:	8b 46 14             	mov    0x14(%esi),%eax
 804ed70:	c1 e1 02             	shl    $0x2,%ecx
 804ed73:	89 55 cc             	mov    %edx,-0x34(%ebp)
 804ed76:	8d 53 08             	lea    0x8(%ebx),%edx
 804ed79:	89 54 24 04          	mov    %edx,0x4(%esp)
 804ed7d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 804ed81:	89 04 24             	mov    %eax,(%esp)
 804ed84:	e8 eb a7 ff ff       	call   8049574 <memcpy@plt>
 804ed89:	8b 55 e0             	mov    -0x20(%ebp),%edx
 804ed8c:	85 d2                	test   %edx,%edx
 804ed8e:	74 5f                	je     804edef <main+0x51cf>
 804ed90:	8b 4e 0c             	mov    0xc(%esi),%ecx
 804ed93:	89 d0                	mov    %edx,%eax
 804ed95:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 804ed98:	eb 11                	jmp    804edab <main+0x518b>
 804ed9a:	85 c9                	test   %ecx,%ecx
 804ed9c:	89 08                	mov    %ecx,(%eax)
 804ed9e:	74 1a                	je     804edba <main+0x519a>
 804eda0:	85 d2                	test   %edx,%edx
 804eda2:	89 46 0c             	mov    %eax,0xc(%esi)
 804eda5:	74 1d                	je     804edc4 <main+0x51a4>
 804eda7:	89 c1                	mov    %eax,%ecx
 804eda9:	89 d0                	mov    %edx,%eax
 804edab:	8b 12                	mov    (%edx),%edx
 804edad:	85 d2                	test   %edx,%edx
 804edaf:	75 e9                	jne    804ed9a <main+0x517a>
 804edb1:	85 c9                	test   %ecx,%ecx
 804edb3:	8d 7d e0             	lea    -0x20(%ebp),%edi
 804edb6:	89 08                	mov    %ecx,(%eax)
 804edb8:	75 e6                	jne    804eda0 <main+0x5180>
 804edba:	85 d2                	test   %edx,%edx
 804edbc:	89 46 10             	mov    %eax,0x10(%esi)
 804edbf:	89 46 0c             	mov    %eax,0xc(%esi)
 804edc2:	75 e3                	jne    804eda7 <main+0x5187>
 804edc4:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 804edcb:	31 d2                	xor    %edx,%edx
 804edcd:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 804edd0:	e9 4d fe ff ff       	jmp    804ec22 <main+0x5002>
 804edd5:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 804edd8:	85 db                	test   %ebx,%ebx
 804edda:	0f 84 66 fe ff ff    	je     804ec46 <main+0x5026>
 804ede0:	8b 55 0c             	mov    0xc(%ebp),%edx
 804ede3:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 804edea:	e9 0d fe ff ff       	jmp    804ebfc <main+0x4fdc>
 804edef:	8b 46 0c             	mov    0xc(%esi),%eax
 804edf2:	e9 2b fe ff ff       	jmp    804ec22 <main+0x5002>
 804edf7:	90                   	nop
 804edf8:	90                   	nop
 804edf9:	90                   	nop
 804edfa:	90                   	nop
 804edfb:	90                   	nop
 804edfc:	90                   	nop
 804edfd:	90                   	nop
 804edfe:	90                   	nop
 804edff:	90                   	nop
 804ee00:	55                   	push   %ebp
 804ee01:	89 e5                	mov    %esp,%ebp
 804ee03:	8b 4d 10             	mov    0x10(%ebp),%ecx
 804ee06:	56                   	push   %esi
 804ee07:	8b 55 08             	mov    0x8(%ebp),%edx
 804ee0a:	53                   	push   %ebx
 804ee0b:	8b 75 0c             	mov    0xc(%ebp),%esi
 804ee0e:	85 c9                	test   %ecx,%ecx
 804ee10:	74 2f                	je     804ee41 <main+0x5221>
 804ee12:	8d 44 0a ff          	lea    -0x1(%edx,%ecx,1),%eax
 804ee16:	0f b6 18             	movzbl (%eax),%ebx
 804ee19:	8d 54 0a fe          	lea    -0x2(%edx,%ecx,1),%edx
 804ee1d:	39 f3                	cmp    %esi,%ebx
 804ee1f:	75 1b                	jne    804ee3c <main+0x521c>
 804ee21:	eb 20                	jmp    804ee43 <main+0x5223>
 804ee23:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804ee29:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804ee30:	0f b6 1a             	movzbl (%edx),%ebx
 804ee33:	89 d0                	mov    %edx,%eax
 804ee35:	83 ea 01             	sub    $0x1,%edx
 804ee38:	39 f3                	cmp    %esi,%ebx
 804ee3a:	74 07                	je     804ee43 <main+0x5223>
 804ee3c:	83 e9 01             	sub    $0x1,%ecx
 804ee3f:	75 ef                	jne    804ee30 <main+0x5210>
 804ee41:	31 c0                	xor    %eax,%eax
 804ee43:	5b                   	pop    %ebx
 804ee44:	5e                   	pop    %esi
 804ee45:	5d                   	pop    %ebp
 804ee46:	c3                   	ret    
 804ee47:	90                   	nop
 804ee48:	90                   	nop
 804ee49:	90                   	nop
 804ee4a:	90                   	nop
 804ee4b:	90                   	nop
 804ee4c:	90                   	nop
 804ee4d:	90                   	nop
 804ee4e:	90                   	nop
 804ee4f:	90                   	nop
 804ee50:	55                   	push   %ebp
 804ee51:	89 e5                	mov    %esp,%ebp
 804ee53:	53                   	push   %ebx
 804ee54:	8b 45 08             	mov    0x8(%ebp),%eax
 804ee57:	85 c0                	test   %eax,%eax
 804ee59:	74 3d                	je     804ee98 <main+0x5278>
 804ee5b:	8b 50 04             	mov    0x4(%eax),%edx
 804ee5e:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 804ee65:	c6 02 00             	movb   $0x0,(%edx)
 804ee68:	8b 50 04             	mov    0x4(%eax),%edx
 804ee6b:	c6 42 01 00          	movb   $0x0,0x1(%edx)
 804ee6f:	8b 15 14 8e 05 08    	mov    0x8058e14,%edx
 804ee75:	8b 48 04             	mov    0x4(%eax),%ecx
 804ee78:	c7 40 1c 01 00 00 00 	movl   $0x1,0x1c(%eax)
 804ee7f:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 804ee86:	85 d2                	test   %edx,%edx
 804ee88:	89 48 08             	mov    %ecx,0x8(%eax)
 804ee8b:	74 0b                	je     804ee98 <main+0x5278>
 804ee8d:	8b 1d 18 8e 05 08    	mov    0x8058e18,%ebx
 804ee93:	3b 04 9a             	cmp    (%edx,%ebx,4),%eax
 804ee96:	74 08                	je     804eea0 <main+0x5280>
 804ee98:	5b                   	pop    %ebx
 804ee99:	5d                   	pop    %ebp
 804ee9a:	c3                   	ret    
 804ee9b:	90                   	nop
 804ee9c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804eea0:	8b 50 10             	mov    0x10(%eax),%edx
 804eea3:	8b 00                	mov    (%eax),%eax
 804eea5:	89 0d 20 8e 05 08    	mov    %ecx,0x8058e20
 804eeab:	89 0d 5c 8e 05 08    	mov    %ecx,0x8058e5c
 804eeb1:	89 15 2c 8e 05 08    	mov    %edx,0x8058e2c
 804eeb7:	a3 04 8e 05 08       	mov    %eax,0x8058e04
 804eebc:	0f b6 01             	movzbl (%ecx),%eax
 804eebf:	5b                   	pop    %ebx
 804eec0:	5d                   	pop    %ebp
 804eec1:	a2 28 8e 05 08       	mov    %al,0x8058e28
 804eec6:	c3                   	ret    
 804eec7:	89 f6                	mov    %esi,%esi
 804eec9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804eed0:	55                   	push   %ebp
 804eed1:	a1 a8 76 05 08       	mov    0x80576a8,%eax
 804eed6:	89 e5                	mov    %esp,%ebp
 804eed8:	5d                   	pop    %ebp
 804eed9:	c3                   	ret    
 804eeda:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804eee0:	55                   	push   %ebp
 804eee1:	a1 04 8e 05 08       	mov    0x8058e04,%eax
 804eee6:	89 e5                	mov    %esp,%ebp
 804eee8:	5d                   	pop    %ebp
 804eee9:	c3                   	ret    
 804eeea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804eef0:	55                   	push   %ebp
 804eef1:	a1 08 8e 05 08       	mov    0x8058e08,%eax
 804eef6:	89 e5                	mov    %esp,%ebp
 804eef8:	5d                   	pop    %ebp
 804eef9:	c3                   	ret    
 804eefa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804ef00:	55                   	push   %ebp
 804ef01:	a1 60 8e 05 08       	mov    0x8058e60,%eax
 804ef06:	89 e5                	mov    %esp,%ebp
 804ef08:	5d                   	pop    %ebp
 804ef09:	c3                   	ret    
 804ef0a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804ef10:	55                   	push   %ebp
 804ef11:	a1 5c 8e 05 08       	mov    0x8058e5c,%eax
 804ef16:	89 e5                	mov    %esp,%ebp
 804ef18:	5d                   	pop    %ebp
 804ef19:	c3                   	ret    
 804ef1a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804ef20:	55                   	push   %ebp
 804ef21:	89 e5                	mov    %esp,%ebp
 804ef23:	8b 45 08             	mov    0x8(%ebp),%eax
 804ef26:	5d                   	pop    %ebp
 804ef27:	a3 a8 76 05 08       	mov    %eax,0x80576a8
 804ef2c:	c3                   	ret    
 804ef2d:	8d 76 00             	lea    0x0(%esi),%esi
 804ef30:	55                   	push   %ebp
 804ef31:	89 e5                	mov    %esp,%ebp
 804ef33:	8b 45 08             	mov    0x8(%ebp),%eax
 804ef36:	5d                   	pop    %ebp
 804ef37:	a3 04 8e 05 08       	mov    %eax,0x8058e04
 804ef3c:	c3                   	ret    
 804ef3d:	8d 76 00             	lea    0x0(%esi),%esi
 804ef40:	55                   	push   %ebp
 804ef41:	89 e5                	mov    %esp,%ebp
 804ef43:	8b 45 08             	mov    0x8(%ebp),%eax
 804ef46:	5d                   	pop    %ebp
 804ef47:	a3 08 8e 05 08       	mov    %eax,0x8058e08
 804ef4c:	c3                   	ret    
 804ef4d:	8d 76 00             	lea    0x0(%esi),%esi
 804ef50:	55                   	push   %ebp
 804ef51:	a1 0c 8e 05 08       	mov    0x8058e0c,%eax
 804ef56:	89 e5                	mov    %esp,%ebp
 804ef58:	5d                   	pop    %ebp
 804ef59:	c3                   	ret    
 804ef5a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804ef60:	55                   	push   %ebp
 804ef61:	89 e5                	mov    %esp,%ebp
 804ef63:	8b 45 08             	mov    0x8(%ebp),%eax
 804ef66:	5d                   	pop    %ebp
 804ef67:	a3 0c 8e 05 08       	mov    %eax,0x8058e0c
 804ef6c:	c3                   	ret    
 804ef6d:	8d 76 00             	lea    0x0(%esi),%esi
 804ef70:	55                   	push   %ebp
 804ef71:	89 e5                	mov    %esp,%ebp
 804ef73:	83 ec 08             	sub    $0x8,%esp
 804ef76:	c9                   	leave  
 804ef77:	e9 d8 aa ff ff       	jmp    8049a54 <free@plt>
 804ef7c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804ef80:	55                   	push   %ebp
 804ef81:	89 e5                	mov    %esp,%ebp
 804ef83:	53                   	push   %ebx
 804ef84:	83 ec 14             	sub    $0x14,%esp
 804ef87:	8b 5d 08             	mov    0x8(%ebp),%ebx
 804ef8a:	85 db                	test   %ebx,%ebx
 804ef8c:	74 62                	je     804eff0 <main+0x53d0>
 804ef8e:	a1 14 8e 05 08       	mov    0x8058e14,%eax
 804ef93:	85 c0                	test   %eax,%eax
 804ef95:	74 0d                	je     804efa4 <main+0x5384>
 804ef97:	8b 15 18 8e 05 08    	mov    0x8058e18,%edx
 804ef9d:	8d 04 90             	lea    (%eax,%edx,4),%eax
 804efa0:	3b 18                	cmp    (%eax),%ebx
 804efa2:	74 3c                	je     804efe0 <main+0x53c0>
 804efa4:	8b 43 14             	mov    0x14(%ebx),%eax
 804efa7:	85 c0                	test   %eax,%eax
 804efa9:	75 15                	jne    804efc0 <main+0x53a0>
 804efab:	89 5d 08             	mov    %ebx,0x8(%ebp)
 804efae:	83 c4 14             	add    $0x14,%esp
 804efb1:	5b                   	pop    %ebx
 804efb2:	5d                   	pop    %ebp
 804efb3:	e9 b8 ff ff ff       	jmp    804ef70 <main+0x5350>
 804efb8:	90                   	nop
 804efb9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804efc0:	8b 43 04             	mov    0x4(%ebx),%eax
 804efc3:	89 04 24             	mov    %eax,(%esp)
 804efc6:	e8 a5 ff ff ff       	call   804ef70 <main+0x5350>
 804efcb:	89 5d 08             	mov    %ebx,0x8(%ebp)
 804efce:	83 c4 14             	add    $0x14,%esp
 804efd1:	5b                   	pop    %ebx
 804efd2:	5d                   	pop    %ebp
 804efd3:	e9 98 ff ff ff       	jmp    804ef70 <main+0x5350>
 804efd8:	90                   	nop
 804efd9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804efe0:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 804efe6:	eb bc                	jmp    804efa4 <main+0x5384>
 804efe8:	90                   	nop
 804efe9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804eff0:	83 c4 14             	add    $0x14,%esp
 804eff3:	5b                   	pop    %ebx
 804eff4:	5d                   	pop    %ebp
 804eff5:	c3                   	ret    
 804eff6:	8d 76 00             	lea    0x0(%esi),%esi
 804eff9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804f000:	55                   	push   %ebp
 804f001:	89 e5                	mov    %esp,%ebp
 804f003:	83 ec 18             	sub    $0x18,%esp
 804f006:	a1 14 8e 05 08       	mov    0x8058e14,%eax
 804f00b:	85 c0                	test   %eax,%eax
 804f00d:	74 6d                	je     804f07c <main+0x545c>
 804f00f:	8b 15 18 8e 05 08    	mov    0x8058e18,%edx
 804f015:	8b 04 90             	mov    (%eax,%edx,4),%eax
 804f018:	85 c0                	test   %eax,%eax
 804f01a:	74 60                	je     804f07c <main+0x545c>
 804f01c:	89 04 24             	mov    %eax,(%esp)
 804f01f:	e8 5c ff ff ff       	call   804ef80 <main+0x5360>
 804f024:	8b 15 18 8e 05 08    	mov    0x8058e18,%edx
 804f02a:	a1 14 8e 05 08       	mov    0x8058e14,%eax
 804f02f:	85 d2                	test   %edx,%edx
 804f031:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 804f038:	75 46                	jne    804f080 <main+0x5460>
 804f03a:	85 c0                	test   %eax,%eax
 804f03c:	74 3e                	je     804f07c <main+0x545c>
 804f03e:	8b 15 18 8e 05 08    	mov    0x8058e18,%edx
 804f044:	8b 04 90             	mov    (%eax,%edx,4),%eax
 804f047:	85 c0                	test   %eax,%eax
 804f049:	74 31                	je     804f07c <main+0x545c>
 804f04b:	8b 50 10             	mov    0x10(%eax),%edx
 804f04e:	89 15 2c 8e 05 08    	mov    %edx,0x8058e2c
 804f054:	8b 50 08             	mov    0x8(%eax),%edx
 804f057:	8b 00                	mov    (%eax),%eax
 804f059:	89 15 20 8e 05 08    	mov    %edx,0x8058e20
 804f05f:	89 15 5c 8e 05 08    	mov    %edx,0x8058e5c
 804f065:	a3 04 8e 05 08       	mov    %eax,0x8058e04
 804f06a:	0f b6 02             	movzbl (%edx),%eax
 804f06d:	c7 05 30 8e 05 08 01 	movl   $0x1,0x8058e30
 804f074:	00 00 00 
 804f077:	a2 28 8e 05 08       	mov    %al,0x8058e28
 804f07c:	c9                   	leave  
 804f07d:	c3                   	ret    
 804f07e:	66 90                	xchg   %ax,%ax
 804f080:	83 ea 01             	sub    $0x1,%edx
 804f083:	89 15 18 8e 05 08    	mov    %edx,0x8058e18
 804f089:	eb af                	jmp    804f03a <main+0x541a>
 804f08b:	90                   	nop
 804f08c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804f090:	55                   	push   %ebp
 804f091:	89 e5                	mov    %esp,%ebp
 804f093:	83 ec 18             	sub    $0x18,%esp
 804f096:	a1 14 8e 05 08       	mov    0x8058e14,%eax
 804f09b:	85 c0                	test   %eax,%eax
 804f09d:	75 39                	jne    804f0d8 <main+0x54b8>
 804f09f:	eb 44                	jmp    804f0e5 <main+0x54c5>
 804f0a1:	eb 0d                	jmp    804f0b0 <main+0x5490>
 804f0a3:	90                   	nop
 804f0a4:	90                   	nop
 804f0a5:	90                   	nop
 804f0a6:	90                   	nop
 804f0a7:	90                   	nop
 804f0a8:	90                   	nop
 804f0a9:	90                   	nop
 804f0aa:	90                   	nop
 804f0ab:	90                   	nop
 804f0ac:	90                   	nop
 804f0ad:	90                   	nop
 804f0ae:	90                   	nop
 804f0af:	90                   	nop
 804f0b0:	89 14 24             	mov    %edx,(%esp)
 804f0b3:	e8 c8 fe ff ff       	call   804ef80 <main+0x5360>
 804f0b8:	a1 14 8e 05 08       	mov    0x8058e14,%eax
 804f0bd:	8b 15 18 8e 05 08    	mov    0x8058e18,%edx
 804f0c3:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 804f0ca:	e8 31 ff ff ff       	call   804f000 <main+0x53e0>
 804f0cf:	a1 14 8e 05 08       	mov    0x8058e14,%eax
 804f0d4:	85 c0                	test   %eax,%eax
 804f0d6:	74 0d                	je     804f0e5 <main+0x54c5>
 804f0d8:	8b 15 18 8e 05 08    	mov    0x8058e18,%edx
 804f0de:	8b 14 90             	mov    (%eax,%edx,4),%edx
 804f0e1:	85 d2                	test   %edx,%edx
 804f0e3:	75 cb                	jne    804f0b0 <main+0x5490>
 804f0e5:	89 04 24             	mov    %eax,(%esp)
 804f0e8:	e8 83 fe ff ff       	call   804ef70 <main+0x5350>
 804f0ed:	31 c0                	xor    %eax,%eax
 804f0ef:	c7 05 14 8e 05 08 00 	movl   $0x0,0x8058e14
 804f0f6:	00 00 00 
 804f0f9:	c7 05 18 8e 05 08 00 	movl   $0x0,0x8058e18
 804f100:	00 00 00 
 804f103:	c7 05 1c 8e 05 08 00 	movl   $0x0,0x8058e1c
 804f10a:	00 00 00 
 804f10d:	c7 05 20 8e 05 08 00 	movl   $0x0,0x8058e20
 804f114:	00 00 00 
 804f117:	c7 05 24 8e 05 08 00 	movl   $0x0,0x8058e24
 804f11e:	00 00 00 
 804f121:	c7 05 10 8e 05 08 00 	movl   $0x0,0x8058e10
 804f128:	00 00 00 
 804f12b:	c7 05 04 8e 05 08 00 	movl   $0x0,0x8058e04
 804f132:	00 00 00 
 804f135:	c7 05 08 8e 05 08 00 	movl   $0x0,0x8058e08
 804f13c:	00 00 00 
 804f13f:	c9                   	leave  
 804f140:	c3                   	ret    
 804f141:	eb 0d                	jmp    804f150 <main+0x5530>
 804f143:	90                   	nop
 804f144:	90                   	nop
 804f145:	90                   	nop
 804f146:	90                   	nop
 804f147:	90                   	nop
 804f148:	90                   	nop
 804f149:	90                   	nop
 804f14a:	90                   	nop
 804f14b:	90                   	nop
 804f14c:	90                   	nop
 804f14d:	90                   	nop
 804f14e:	90                   	nop
 804f14f:	90                   	nop
 804f150:	55                   	push   %ebp
 804f151:	89 e5                	mov    %esp,%ebp
 804f153:	83 ec 08             	sub    $0x8,%esp
 804f156:	c9                   	leave  
 804f157:	e9 48 a6 ff ff       	jmp    80497a4 <realloc@plt>
 804f15c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804f160:	55                   	push   %ebp
 804f161:	89 e5                	mov    %esp,%ebp
 804f163:	53                   	push   %ebx
 804f164:	83 ec 14             	sub    $0x14,%esp
 804f167:	8b 15 64 8e 05 08    	mov    0x8058e64,%edx
 804f16d:	85 d2                	test   %edx,%edx
 804f16f:	8d 5c 02 1e          	lea    0x1e(%edx,%eax,1),%ebx
 804f173:	75 03                	jne    804f178 <main+0x5558>
 804f175:	8d 58 1f             	lea    0x1f(%eax),%ebx
 804f178:	3b 1d 58 8e 05 08    	cmp    0x8058e58,%ebx
 804f17e:	b8 01 00 00 00       	mov    $0x1,%eax
 804f183:	77 0b                	ja     804f190 <main+0x5570>
 804f185:	83 c4 14             	add    $0x14,%esp
 804f188:	5b                   	pop    %ebx
 804f189:	5d                   	pop    %ebp
 804f18a:	c3                   	ret    
 804f18b:	90                   	nop
 804f18c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804f190:	a1 54 8e 05 08       	mov    0x8058e54,%eax
 804f195:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 804f199:	89 04 24             	mov    %eax,(%esp)
 804f19c:	e8 03 a6 ff ff       	call   80497a4 <realloc@plt>
 804f1a1:	89 c2                	mov    %eax,%edx
 804f1a3:	31 c0                	xor    %eax,%eax
 804f1a5:	85 d2                	test   %edx,%edx
 804f1a7:	74 dc                	je     804f185 <main+0x5565>
 804f1a9:	89 1d 58 8e 05 08    	mov    %ebx,0x8058e58
 804f1af:	b0 01                	mov    $0x1,%al
 804f1b1:	89 15 54 8e 05 08    	mov    %edx,0x8058e54
 804f1b7:	83 c4 14             	add    $0x14,%esp
 804f1ba:	5b                   	pop    %ebx
 804f1bb:	5d                   	pop    %ebp
 804f1bc:	c3                   	ret    
 804f1bd:	8d 76 00             	lea    0x0(%esi),%esi
 804f1c0:	55                   	push   %ebp
 804f1c1:	89 e5                	mov    %esp,%ebp
 804f1c3:	53                   	push   %ebx
 804f1c4:	89 c3                	mov    %eax,%ebx
 804f1c6:	83 ec 04             	sub    $0x4,%esp
 804f1c9:	b8 01 00 00 00       	mov    $0x1,%eax
 804f1ce:	e8 8d ff ff ff       	call   804f160 <main+0x5540>
 804f1d3:	89 c2                	mov    %eax,%edx
 804f1d5:	31 c0                	xor    %eax,%eax
 804f1d7:	85 d2                	test   %edx,%edx
 804f1d9:	74 1b                	je     804f1f6 <main+0x55d6>
 804f1db:	a1 64 8e 05 08       	mov    0x8058e64,%eax
 804f1e0:	8b 15 54 8e 05 08    	mov    0x8058e54,%edx
 804f1e6:	88 1c 02             	mov    %bl,(%edx,%eax,1)
 804f1e9:	83 c0 01             	add    $0x1,%eax
 804f1ec:	a3 64 8e 05 08       	mov    %eax,0x8058e64
 804f1f1:	b8 01 00 00 00       	mov    $0x1,%eax
 804f1f6:	83 c4 04             	add    $0x4,%esp
 804f1f9:	5b                   	pop    %ebx
 804f1fa:	5d                   	pop    %ebp
 804f1fb:	c3                   	ret    
 804f1fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804f200:	55                   	push   %ebp
 804f201:	89 e5                	mov    %esp,%ebp
 804f203:	83 ec 08             	sub    $0x8,%esp
 804f206:	c9                   	leave  
 804f207:	e9 a8 a3 ff ff       	jmp    80495b4 <malloc@plt>
 804f20c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804f210:	55                   	push   %ebp
 804f211:	89 e5                	mov    %esp,%ebp
 804f213:	83 ec 18             	sub    $0x18,%esp
 804f216:	89 44 24 08          	mov    %eax,0x8(%esp)
 804f21a:	c7 44 24 04 04 4d 05 	movl   $0x8054d04,0x4(%esp)
 804f221:	08 
 804f222:	c7 04 24 80 79 05 08 	movl   $0x8057980,(%esp)
 804f229:	e8 76 a4 ff ff       	call   80496a4 <fprintf@plt>
 804f22e:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 804f235:	e8 3a a7 ff ff       	call   8049974 <exit@plt>
 804f23a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804f240:	55                   	push   %ebp
 804f241:	89 e5                	mov    %esp,%ebp
 804f243:	83 ec 18             	sub    $0x18,%esp
 804f246:	a1 14 8e 05 08       	mov    0x8058e14,%eax
 804f24b:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 804f24e:	89 75 fc             	mov    %esi,-0x4(%ebp)
 804f251:	85 c0                	test   %eax,%eax
 804f253:	0f 84 a7 00 00 00    	je     804f300 <main+0x56e0>
 804f259:	8b 1d 1c 8e 05 08    	mov    0x8058e1c,%ebx
 804f25f:	8d 53 ff             	lea    -0x1(%ebx),%edx
 804f262:	3b 15 18 8e 05 08    	cmp    0x8058e18,%edx
 804f268:	76 16                	jbe    804f280 <main+0x5660>
 804f26a:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 804f26d:	8b 75 fc             	mov    -0x4(%ebp),%esi
 804f270:	89 ec                	mov    %ebp,%esp
 804f272:	5d                   	pop    %ebp
 804f273:	c3                   	ret    
 804f274:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804f27a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 804f280:	83 c3 08             	add    $0x8,%ebx
 804f283:	8d 14 9d 00 00 00 00 	lea    0x0(,%ebx,4),%edx
 804f28a:	89 54 24 04          	mov    %edx,0x4(%esp)
 804f28e:	89 04 24             	mov    %eax,(%esp)
 804f291:	e8 ba fe ff ff       	call   804f150 <main+0x5530>
 804f296:	85 c0                	test   %eax,%eax
 804f298:	a3 14 8e 05 08       	mov    %eax,0x8058e14
 804f29d:	0f 84 bd 00 00 00    	je     804f360 <main+0x5740>
 804f2a3:	8b 15 1c 8e 05 08    	mov    0x8058e1c,%edx
 804f2a9:	b9 20 00 00 00       	mov    $0x20,%ecx
 804f2ae:	8d 14 90             	lea    (%eax,%edx,4),%edx
 804f2b1:	f6 c2 01             	test   $0x1,%dl
 804f2b4:	0f 85 86 00 00 00    	jne    804f340 <main+0x5720>
 804f2ba:	f6 c2 02             	test   $0x2,%dl
 804f2bd:	0f 85 8d 00 00 00    	jne    804f350 <main+0x5730>
 804f2c3:	89 ce                	mov    %ecx,%esi
 804f2c5:	31 c0                	xor    %eax,%eax
 804f2c7:	83 e6 fc             	and    $0xfffffffc,%esi
 804f2ca:	c7 04 02 00 00 00 00 	movl   $0x0,(%edx,%eax,1)
 804f2d1:	83 c0 04             	add    $0x4,%eax
 804f2d4:	39 f0                	cmp    %esi,%eax
 804f2d6:	72 f2                	jb     804f2ca <main+0x56aa>
 804f2d8:	01 c2                	add    %eax,%edx
 804f2da:	f6 c1 02             	test   $0x2,%cl
 804f2dd:	74 08                	je     804f2e7 <main+0x56c7>
 804f2df:	66 c7 02 00 00       	movw   $0x0,(%edx)
 804f2e4:	83 c2 02             	add    $0x2,%edx
 804f2e7:	83 e1 01             	and    $0x1,%ecx
 804f2ea:	74 03                	je     804f2ef <main+0x56cf>
 804f2ec:	c6 02 00             	movb   $0x0,(%edx)
 804f2ef:	89 1d 1c 8e 05 08    	mov    %ebx,0x8058e1c
 804f2f5:	e9 70 ff ff ff       	jmp    804f26a <main+0x564a>
 804f2fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804f300:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 804f307:	e8 f4 fe ff ff       	call   804f200 <main+0x55e0>
 804f30c:	85 c0                	test   %eax,%eax
 804f30e:	a3 14 8e 05 08       	mov    %eax,0x8058e14
 804f313:	74 5f                	je     804f374 <main+0x5754>
 804f315:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 804f31b:	c7 05 1c 8e 05 08 01 	movl   $0x1,0x8058e1c
 804f322:	00 00 00 
 804f325:	c7 05 18 8e 05 08 00 	movl   $0x0,0x8058e18
 804f32c:	00 00 00 
 804f32f:	e9 36 ff ff ff       	jmp    804f26a <main+0x564a>
 804f334:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804f33a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 804f340:	c6 02 00             	movb   $0x0,(%edx)
 804f343:	b1 1f                	mov    $0x1f,%cl
 804f345:	83 c2 01             	add    $0x1,%edx
 804f348:	e9 6d ff ff ff       	jmp    804f2ba <main+0x569a>
 804f34d:	8d 76 00             	lea    0x0(%esi),%esi
 804f350:	66 c7 02 00 00       	movw   $0x0,(%edx)
 804f355:	83 e9 02             	sub    $0x2,%ecx
 804f358:	83 c2 02             	add    $0x2,%edx
 804f35b:	e9 63 ff ff ff       	jmp    804f2c3 <main+0x56a3>
 804f360:	b8 88 4f 05 08       	mov    $0x8054f88,%eax
 804f365:	e8 a6 fe ff ff       	call   804f210 <main+0x55f0>
 804f36a:	a1 14 8e 05 08       	mov    0x8058e14,%eax
 804f36f:	e9 2f ff ff ff       	jmp    804f2a3 <main+0x5683>
 804f374:	b8 88 4f 05 08       	mov    $0x8054f88,%eax
 804f379:	e8 92 fe ff ff       	call   804f210 <main+0x55f0>
 804f37e:	a1 14 8e 05 08       	mov    0x8058e14,%eax
 804f383:	eb 90                	jmp    804f315 <main+0x56f5>
 804f385:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804f389:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804f390:	55                   	push   %ebp
 804f391:	89 e5                	mov    %esp,%ebp
 804f393:	83 ec 28             	sub    $0x28,%esp
 804f396:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 804f399:	8b 5d 08             	mov    0x8(%ebp),%ebx
 804f39c:	89 75 f8             	mov    %esi,-0x8(%ebp)
 804f39f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 804f3a2:	85 db                	test   %ebx,%ebx
 804f3a4:	0f 84 87 00 00 00    	je     804f431 <main+0x5811>
 804f3aa:	e8 91 fe ff ff       	call   804f240 <main+0x5620>
 804f3af:	8b 15 14 8e 05 08    	mov    0x8058e14,%edx
 804f3b5:	85 d2                	test   %edx,%edx
 804f3b7:	0f 84 83 00 00 00    	je     804f440 <main+0x5820>
 804f3bd:	a1 18 8e 05 08       	mov    0x8058e18,%eax
 804f3c2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 804f3c5:	8d 04 82             	lea    (%edx,%eax,4),%eax
 804f3c8:	8b 08                	mov    (%eax),%ecx
 804f3ca:	85 c9                	test   %ecx,%ecx
 804f3cc:	74 32                	je     804f400 <main+0x57e0>
 804f3ce:	0f b6 35 28 8e 05 08 	movzbl 0x8058e28,%esi
 804f3d5:	8b 3d 20 8e 05 08    	mov    0x8058e20,%edi
 804f3db:	89 f1                	mov    %esi,%ecx
 804f3dd:	88 0f                	mov    %cl,(%edi)
 804f3df:	8b 30                	mov    (%eax),%esi
 804f3e1:	89 7e 08             	mov    %edi,0x8(%esi)
 804f3e4:	8b 3d 2c 8e 05 08    	mov    0x8058e2c,%edi
 804f3ea:	85 f6                	test   %esi,%esi
 804f3ec:	89 7e 10             	mov    %edi,0x10(%esi)
 804f3ef:	74 0f                	je     804f400 <main+0x57e0>
 804f3f1:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 804f3f4:	83 c1 01             	add    $0x1,%ecx
 804f3f7:	89 0d 18 8e 05 08    	mov    %ecx,0x8058e18
 804f3fd:	8d 04 8a             	lea    (%edx,%ecx,4),%eax
 804f400:	89 18                	mov    %ebx,(%eax)
 804f402:	8b 43 10             	mov    0x10(%ebx),%eax
 804f405:	8b 13                	mov    (%ebx),%edx
 804f407:	a3 2c 8e 05 08       	mov    %eax,0x8058e2c
 804f40c:	8b 43 08             	mov    0x8(%ebx),%eax
 804f40f:	89 15 04 8e 05 08    	mov    %edx,0x8058e04
 804f415:	a3 20 8e 05 08       	mov    %eax,0x8058e20
 804f41a:	a3 5c 8e 05 08       	mov    %eax,0x8058e5c
 804f41f:	0f b6 00             	movzbl (%eax),%eax
 804f422:	c7 05 30 8e 05 08 01 	movl   $0x1,0x8058e30
 804f429:	00 00 00 
 804f42c:	a2 28 8e 05 08       	mov    %al,0x8058e28
 804f431:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 804f434:	8b 75 f8             	mov    -0x8(%ebp),%esi
 804f437:	8b 7d fc             	mov    -0x4(%ebp),%edi
 804f43a:	89 ec                	mov    %ebp,%esp
 804f43c:	5d                   	pop    %ebp
 804f43d:	c3                   	ret    
 804f43e:	66 90                	xchg   %ax,%ax
 804f440:	a1 18 8e 05 08       	mov    0x8058e18,%eax
 804f445:	c1 e0 02             	shl    $0x2,%eax
 804f448:	eb b6                	jmp    804f400 <main+0x57e0>
 804f44a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804f450:	55                   	push   %ebp
 804f451:	89 e5                	mov    %esp,%ebp
 804f453:	53                   	push   %ebx
 804f454:	83 ec 04             	sub    $0x4,%esp
 804f457:	8b 5d 08             	mov    0x8(%ebp),%ebx
 804f45a:	e8 e1 fd ff ff       	call   804f240 <main+0x5620>
 804f45f:	a1 14 8e 05 08       	mov    0x8058e14,%eax
 804f464:	31 d2                	xor    %edx,%edx
 804f466:	85 c0                	test   %eax,%eax
 804f468:	74 09                	je     804f473 <main+0x5853>
 804f46a:	8b 15 18 8e 05 08    	mov    0x8058e18,%edx
 804f470:	8b 14 90             	mov    (%eax,%edx,4),%edx
 804f473:	39 da                	cmp    %ebx,%edx
 804f475:	74 61                	je     804f4d8 <main+0x58b8>
 804f477:	85 c0                	test   %eax,%eax
 804f479:	74 65                	je     804f4e0 <main+0x58c0>
 804f47b:	8b 15 18 8e 05 08    	mov    0x8058e18,%edx
 804f481:	8d 04 90             	lea    (%eax,%edx,4),%eax
 804f484:	8b 10                	mov    (%eax),%edx
 804f486:	85 d2                	test   %edx,%edx
 804f488:	74 1d                	je     804f4a7 <main+0x5887>
 804f48a:	0f b6 15 28 8e 05 08 	movzbl 0x8058e28,%edx
 804f491:	8b 0d 20 8e 05 08    	mov    0x8058e20,%ecx
 804f497:	88 11                	mov    %dl,(%ecx)
 804f499:	8b 10                	mov    (%eax),%edx
 804f49b:	89 4a 08             	mov    %ecx,0x8(%edx)
 804f49e:	8b 0d 2c 8e 05 08    	mov    0x8058e2c,%ecx
 804f4a4:	89 4a 10             	mov    %ecx,0x10(%edx)
 804f4a7:	89 18                	mov    %ebx,(%eax)
 804f4a9:	8b 43 10             	mov    0x10(%ebx),%eax
 804f4ac:	8b 13                	mov    (%ebx),%edx
 804f4ae:	a3 2c 8e 05 08       	mov    %eax,0x8058e2c
 804f4b3:	8b 43 08             	mov    0x8(%ebx),%eax
 804f4b6:	89 15 04 8e 05 08    	mov    %edx,0x8058e04
 804f4bc:	a3 20 8e 05 08       	mov    %eax,0x8058e20
 804f4c1:	a3 5c 8e 05 08       	mov    %eax,0x8058e5c
 804f4c6:	0f b6 00             	movzbl (%eax),%eax
 804f4c9:	c7 05 30 8e 05 08 01 	movl   $0x1,0x8058e30
 804f4d0:	00 00 00 
 804f4d3:	a2 28 8e 05 08       	mov    %al,0x8058e28
 804f4d8:	83 c4 04             	add    $0x4,%esp
 804f4db:	5b                   	pop    %ebx
 804f4dc:	5d                   	pop    %ebp
 804f4dd:	c3                   	ret    
 804f4de:	66 90                	xchg   %ax,%ax
 804f4e0:	a1 18 8e 05 08       	mov    0x8058e18,%eax
 804f4e5:	c1 e0 02             	shl    $0x2,%eax
 804f4e8:	eb bd                	jmp    804f4a7 <main+0x5887>
 804f4ea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804f4f0:	55                   	push   %ebp
 804f4f1:	89 e5                	mov    %esp,%ebp
 804f4f3:	83 ec 28             	sub    $0x28,%esp
 804f4f6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 804f4f9:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 804f4fc:	89 7d fc             	mov    %edi,-0x4(%ebp)
 804f4ff:	8b 7d 08             	mov    0x8(%ebp),%edi
 804f502:	89 75 f8             	mov    %esi,-0x8(%ebp)
 804f505:	83 fb 01             	cmp    $0x1,%ebx
 804f508:	77 16                	ja     804f520 <main+0x5900>
 804f50a:	31 f6                	xor    %esi,%esi
 804f50c:	89 f0                	mov    %esi,%eax
 804f50e:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 804f511:	8b 75 f8             	mov    -0x8(%ebp),%esi
 804f514:	8b 7d fc             	mov    -0x4(%ebp),%edi
 804f517:	89 ec                	mov    %ebp,%esp
 804f519:	5d                   	pop    %ebp
 804f51a:	c3                   	ret    
 804f51b:	90                   	nop
 804f51c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804f520:	80 7c 1f fe 00       	cmpb   $0x0,-0x2(%edi,%ebx,1)
 804f525:	75 e3                	jne    804f50a <main+0x58ea>
 804f527:	80 7c 1f ff 00       	cmpb   $0x0,-0x1(%edi,%ebx,1)
 804f52c:	75 dc                	jne    804f50a <main+0x58ea>
 804f52e:	c7 04 24 30 00 00 00 	movl   $0x30,(%esp)
 804f535:	e8 c6 fc ff ff       	call   804f200 <main+0x55e0>
 804f53a:	85 c0                	test   %eax,%eax
 804f53c:	89 c6                	mov    %eax,%esi
 804f53e:	74 42                	je     804f582 <main+0x5962>
 804f540:	83 eb 02             	sub    $0x2,%ebx
 804f543:	89 5e 0c             	mov    %ebx,0xc(%esi)
 804f546:	89 7e 04             	mov    %edi,0x4(%esi)
 804f549:	89 7e 08             	mov    %edi,0x8(%esi)
 804f54c:	c7 46 14 00 00 00 00 	movl   $0x0,0x14(%esi)
 804f553:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 804f559:	89 5e 10             	mov    %ebx,0x10(%esi)
 804f55c:	c7 46 18 00 00 00 00 	movl   $0x0,0x18(%esi)
 804f563:	c7 46 1c 01 00 00 00 	movl   $0x1,0x1c(%esi)
 804f56a:	c7 46 28 00 00 00 00 	movl   $0x0,0x28(%esi)
 804f571:	c7 46 2c 00 00 00 00 	movl   $0x0,0x2c(%esi)
 804f578:	89 34 24             	mov    %esi,(%esp)
 804f57b:	e8 d0 fe ff ff       	call   804f450 <main+0x5830>
 804f580:	eb 8a                	jmp    804f50c <main+0x58ec>
 804f582:	b8 bc 4f 05 08       	mov    $0x8054fbc,%eax
 804f587:	e8 84 fc ff ff       	call   804f210 <main+0x55f0>
 804f58c:	eb b2                	jmp    804f540 <main+0x5920>
 804f58e:	66 90                	xchg   %ax,%ax
 804f590:	55                   	push   %ebp
 804f591:	89 e5                	mov    %esp,%ebp
 804f593:	57                   	push   %edi
 804f594:	56                   	push   %esi
 804f595:	53                   	push   %ebx
 804f596:	83 ec 2c             	sub    $0x2c,%esp
 804f599:	8b 75 0c             	mov    0xc(%ebp),%esi
 804f59c:	8b 7d 08             	mov    0x8(%ebp),%edi
 804f59f:	8d 56 02             	lea    0x2(%esi),%edx
 804f5a2:	89 14 24             	mov    %edx,(%esp)
 804f5a5:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 804f5a8:	e8 53 fc ff ff       	call   804f200 <main+0x55e0>
 804f5ad:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 804f5b0:	85 c0                	test   %eax,%eax
 804f5b2:	89 c3                	mov    %eax,%ebx
 804f5b4:	74 50                	je     804f606 <main+0x59e6>
 804f5b6:	85 f6                	test   %esi,%esi
 804f5b8:	7e 14                	jle    804f5ce <main+0x59ae>
 804f5ba:	31 c0                	xor    %eax,%eax
 804f5bc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804f5c0:	0f b6 0c 07          	movzbl (%edi,%eax,1),%ecx
 804f5c4:	88 0c 03             	mov    %cl,(%ebx,%eax,1)
 804f5c7:	83 c0 01             	add    $0x1,%eax
 804f5ca:	39 f0                	cmp    %esi,%eax
 804f5cc:	75 f2                	jne    804f5c0 <main+0x59a0>
 804f5ce:	c6 44 33 01 00       	movb   $0x0,0x1(%ebx,%esi,1)
 804f5d3:	c6 04 33 00          	movb   $0x0,(%ebx,%esi,1)
 804f5d7:	89 1c 24             	mov    %ebx,(%esp)
 804f5da:	89 54 24 04          	mov    %edx,0x4(%esp)
 804f5de:	e8 0d ff ff ff       	call   804f4f0 <main+0x58d0>
 804f5e3:	85 c0                	test   %eax,%eax
 804f5e5:	89 c3                	mov    %eax,%ebx
 804f5e7:	74 11                	je     804f5fa <main+0x59da>
 804f5e9:	c7 43 14 01 00 00 00 	movl   $0x1,0x14(%ebx)
 804f5f0:	89 d8                	mov    %ebx,%eax
 804f5f2:	83 c4 2c             	add    $0x2c,%esp
 804f5f5:	5b                   	pop    %ebx
 804f5f6:	5e                   	pop    %esi
 804f5f7:	5f                   	pop    %edi
 804f5f8:	5d                   	pop    %ebp
 804f5f9:	c3                   	ret    
 804f5fa:	b8 38 4f 05 08       	mov    $0x8054f38,%eax
 804f5ff:	e8 0c fc ff ff       	call   804f210 <main+0x55f0>
 804f604:	eb e3                	jmp    804f5e9 <main+0x59c9>
 804f606:	b8 e8 4f 05 08       	mov    $0x8054fe8,%eax
 804f60b:	e8 00 fc ff ff       	call   804f210 <main+0x55f0>
 804f610:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 804f613:	eb a1                	jmp    804f5b6 <main+0x5996>
 804f615:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804f619:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804f620:	55                   	push   %ebp
 804f621:	89 e5                	mov    %esp,%ebp
 804f623:	53                   	push   %ebx
 804f624:	83 ec 14             	sub    $0x14,%esp
 804f627:	8b 5d 08             	mov    0x8(%ebp),%ebx
 804f62a:	89 1c 24             	mov    %ebx,(%esp)
 804f62d:	e8 92 a3 ff ff       	call   80499c4 <strlen@plt>
 804f632:	89 1c 24             	mov    %ebx,(%esp)
 804f635:	89 44 24 04          	mov    %eax,0x4(%esp)
 804f639:	e8 52 ff ff ff       	call   804f590 <main+0x5970>
 804f63e:	83 c4 14             	add    $0x14,%esp
 804f641:	5b                   	pop    %ebx
 804f642:	5d                   	pop    %ebp
 804f643:	c3                   	ret    
 804f644:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804f64a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 804f650:	55                   	push   %ebp
 804f651:	89 e5                	mov    %esp,%ebp
 804f653:	83 ec 38             	sub    $0x38,%esp
 804f656:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 804f659:	89 c3                	mov    %eax,%ebx
 804f65b:	89 75 f8             	mov    %esi,-0x8(%ebp)
 804f65e:	89 d6                	mov    %edx,%esi
 804f660:	89 7d fc             	mov    %edi,-0x4(%ebp)
 804f663:	e8 9c a0 ff ff       	call   8049704 <__get_errno_ptr@plt>
 804f668:	89 c7                	mov    %eax,%edi
 804f66a:	8b 00                	mov    (%eax),%eax
 804f66c:	89 1c 24             	mov    %ebx,(%esp)
 804f66f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 804f672:	e8 d9 f7 ff ff       	call   804ee50 <main+0x5230>
 804f677:	8b 15 14 8e 05 08    	mov    0x8058e14,%edx
 804f67d:	31 c0                	xor    %eax,%eax
 804f67f:	89 33                	mov    %esi,(%ebx)
 804f681:	c7 43 28 01 00 00 00 	movl   $0x1,0x28(%ebx)
 804f688:	85 d2                	test   %edx,%edx
 804f68a:	74 08                	je     804f694 <main+0x5a74>
 804f68c:	a1 18 8e 05 08       	mov    0x8058e18,%eax
 804f691:	8b 04 82             	mov    (%edx,%eax,4),%eax
 804f694:	39 d8                	cmp    %ebx,%eax
 804f696:	74 0e                	je     804f6a6 <main+0x5a86>
 804f698:	c7 43 20 01 00 00 00 	movl   $0x1,0x20(%ebx)
 804f69f:	c7 43 24 00 00 00 00 	movl   $0x0,0x24(%ebx)
 804f6a6:	85 f6                	test   %esi,%esi
 804f6a8:	74 36                	je     804f6e0 <main+0x5ac0>
 804f6aa:	89 34 24             	mov    %esi,(%esp)
 804f6ad:	e8 f2 a2 ff ff       	call   80499a4 <fileno@plt>
 804f6b2:	89 04 24             	mov    %eax,(%esp)
 804f6b5:	e8 0a 9f ff ff       	call   80495c4 <isatty@plt>
 804f6ba:	ba 01 00 00 00       	mov    $0x1,%edx
 804f6bf:	85 c0                	test   %eax,%eax
 804f6c1:	7e 1d                	jle    804f6e0 <main+0x5ac0>
 804f6c3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 804f6c6:	89 53 18             	mov    %edx,0x18(%ebx)
 804f6c9:	89 07                	mov    %eax,(%edi)
 804f6cb:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 804f6ce:	8b 75 f8             	mov    -0x8(%ebp),%esi
 804f6d1:	8b 7d fc             	mov    -0x4(%ebp),%edi
 804f6d4:	89 ec                	mov    %ebp,%esp
 804f6d6:	5d                   	pop    %ebp
 804f6d7:	c3                   	ret    
 804f6d8:	90                   	nop
 804f6d9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804f6e0:	31 d2                	xor    %edx,%edx
 804f6e2:	eb df                	jmp    804f6c3 <main+0x5aa3>
 804f6e4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804f6ea:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 804f6f0:	55                   	push   %ebp
 804f6f1:	89 e5                	mov    %esp,%ebp
 804f6f3:	56                   	push   %esi
 804f6f4:	53                   	push   %ebx
 804f6f5:	83 ec 10             	sub    $0x10,%esp
 804f6f8:	8b 75 0c             	mov    0xc(%ebp),%esi
 804f6fb:	c7 04 24 30 00 00 00 	movl   $0x30,(%esp)
 804f702:	e8 f9 fa ff ff       	call   804f200 <main+0x55e0>
 804f707:	85 c0                	test   %eax,%eax
 804f709:	89 c3                	mov    %eax,%ebx
 804f70b:	74 43                	je     804f750 <main+0x5b30>
 804f70d:	89 73 0c             	mov    %esi,0xc(%ebx)
 804f710:	83 c6 02             	add    $0x2,%esi
 804f713:	89 34 24             	mov    %esi,(%esp)
 804f716:	e8 e5 fa ff ff       	call   804f200 <main+0x55e0>
 804f71b:	85 c0                	test   %eax,%eax
 804f71d:	89 43 04             	mov    %eax,0x4(%ebx)
 804f720:	74 1e                	je     804f740 <main+0x5b20>
 804f722:	8b 55 08             	mov    0x8(%ebp),%edx
 804f725:	89 d8                	mov    %ebx,%eax
 804f727:	c7 43 14 01 00 00 00 	movl   $0x1,0x14(%ebx)
 804f72e:	e8 1d ff ff ff       	call   804f650 <main+0x5a30>
 804f733:	83 c4 10             	add    $0x10,%esp
 804f736:	89 d8                	mov    %ebx,%eax
 804f738:	5b                   	pop    %ebx
 804f739:	5e                   	pop    %esi
 804f73a:	5d                   	pop    %ebp
 804f73b:	c3                   	ret    
 804f73c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804f740:	b8 14 50 05 08       	mov    $0x8055014,%eax
 804f745:	e8 c6 fa ff ff       	call   804f210 <main+0x55f0>
 804f74a:	eb d6                	jmp    804f722 <main+0x5b02>
 804f74c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804f750:	b8 14 50 05 08       	mov    $0x8055014,%eax
 804f755:	e8 b6 fa ff ff       	call   804f210 <main+0x55f0>
 804f75a:	eb b1                	jmp    804f70d <main+0x5aed>
 804f75c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804f760:	55                   	push   %ebp
 804f761:	89 e5                	mov    %esp,%ebp
 804f763:	53                   	push   %ebx
 804f764:	83 ec 14             	sub    $0x14,%esp
 804f767:	a1 14 8e 05 08       	mov    0x8058e14,%eax
 804f76c:	85 c0                	test   %eax,%eax
 804f76e:	74 50                	je     804f7c0 <main+0x5ba0>
 804f770:	8b 15 18 8e 05 08    	mov    0x8058e18,%edx
 804f776:	8b 04 90             	mov    (%eax,%edx,4),%eax
 804f779:	85 c0                	test   %eax,%eax
 804f77b:	74 43                	je     804f7c0 <main+0x5ba0>
 804f77d:	8b 55 08             	mov    0x8(%ebp),%edx
 804f780:	e8 cb fe ff ff       	call   804f650 <main+0x5a30>
 804f785:	a1 14 8e 05 08       	mov    0x8058e14,%eax
 804f78a:	8b 15 18 8e 05 08    	mov    0x8058e18,%edx
 804f790:	8b 14 90             	mov    (%eax,%edx,4),%edx
 804f793:	8b 42 10             	mov    0x10(%edx),%eax
 804f796:	a3 2c 8e 05 08       	mov    %eax,0x8058e2c
 804f79b:	8b 42 08             	mov    0x8(%edx),%eax
 804f79e:	8b 12                	mov    (%edx),%edx
 804f7a0:	a3 20 8e 05 08       	mov    %eax,0x8058e20
 804f7a5:	a3 5c 8e 05 08       	mov    %eax,0x8058e5c
 804f7aa:	89 15 04 8e 05 08    	mov    %edx,0x8058e04
 804f7b0:	0f b6 00             	movzbl (%eax),%eax
 804f7b3:	a2 28 8e 05 08       	mov    %al,0x8058e28
 804f7b8:	83 c4 14             	add    $0x14,%esp
 804f7bb:	5b                   	pop    %ebx
 804f7bc:	5d                   	pop    %ebp
 804f7bd:	c3                   	ret    
 804f7be:	66 90                	xchg   %ax,%ax
 804f7c0:	e8 7b fa ff ff       	call   804f240 <main+0x5620>
 804f7c5:	8b 1d 18 8e 05 08    	mov    0x8058e18,%ebx
 804f7cb:	a1 04 8e 05 08       	mov    0x8058e04,%eax
 804f7d0:	c7 44 24 04 00 40 00 	movl   $0x4000,0x4(%esp)
 804f7d7:	00 
 804f7d8:	c1 e3 02             	shl    $0x2,%ebx
 804f7db:	89 04 24             	mov    %eax,(%esp)
 804f7de:	03 1d 14 8e 05 08    	add    0x8058e14,%ebx
 804f7e4:	e8 07 ff ff ff       	call   804f6f0 <main+0x5ad0>
 804f7e9:	8b 15 14 8e 05 08    	mov    0x8058e14,%edx
 804f7ef:	89 03                	mov    %eax,(%ebx)
 804f7f1:	31 c0                	xor    %eax,%eax
 804f7f3:	85 d2                	test   %edx,%edx
 804f7f5:	74 86                	je     804f77d <main+0x5b5d>
 804f7f7:	a1 18 8e 05 08       	mov    0x8058e18,%eax
 804f7fc:	8b 04 82             	mov    (%edx,%eax,4),%eax
 804f7ff:	e9 79 ff ff ff       	jmp    804f77d <main+0x5b5d>
 804f804:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804f80a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 804f810:	55                   	push   %ebp
 804f811:	89 e5                	mov    %esp,%ebp
 804f813:	83 ec 18             	sub    $0x18,%esp
 804f816:	a1 54 8e 05 08       	mov    0x8058e54,%eax
 804f81b:	c7 05 48 8e 05 08 00 	movl   $0x0,0x8058e48
 804f822:	00 00 00 
 804f825:	c7 05 4c 8e 05 08 00 	movl   $0x0,0x8058e4c
 804f82c:	00 00 00 
 804f82f:	89 04 24             	mov    %eax,(%esp)
 804f832:	e8 1d a2 ff ff       	call   8049a54 <free@plt>
 804f837:	8b 45 08             	mov    0x8(%ebp),%eax
 804f83a:	c7 05 54 8e 05 08 00 	movl   $0x0,0x8058e54
 804f841:	00 00 00 
 804f844:	c7 05 58 8e 05 08 00 	movl   $0x0,0x8058e58
 804f84b:	00 00 00 
 804f84e:	c7 05 64 8e 05 08 00 	movl   $0x0,0x8058e64
 804f855:	00 00 00 
 804f858:	c7 05 10 8e 05 08 01 	movl   $0x1,0x8058e10
 804f85f:	00 00 00 
 804f862:	89 04 24             	mov    %eax,(%esp)
 804f865:	e8 f6 fe ff ff       	call   804f760 <main+0x5b40>
 804f86a:	e8 a1 10 00 00       	call   8050910 <main+0x6cf0>
 804f86f:	85 c0                	test   %eax,%eax
 804f871:	75 0d                	jne    804f880 <main+0x5c60>
 804f873:	a1 4c 8e 05 08       	mov    0x8058e4c,%eax
 804f878:	c9                   	leave  
 804f879:	c3                   	ret    
 804f87a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804f880:	a1 4c 8e 05 08       	mov    0x8058e4c,%eax
 804f885:	89 04 24             	mov    %eax,(%esp)
 804f888:	e8 93 0d 00 00       	call   8050620 <main+0x6a00>
 804f88d:	31 c0                	xor    %eax,%eax
 804f88f:	c9                   	leave  
 804f890:	c3                   	ret    
 804f891:	eb 0d                	jmp    804f8a0 <main+0x5c80>
 804f893:	90                   	nop
 804f894:	90                   	nop
 804f895:	90                   	nop
 804f896:	90                   	nop
 804f897:	90                   	nop
 804f898:	90                   	nop
 804f899:	90                   	nop
 804f89a:	90                   	nop
 804f89b:	90                   	nop
 804f89c:	90                   	nop
 804f89d:	90                   	nop
 804f89e:	90                   	nop
 804f89f:	90                   	nop
 804f8a0:	55                   	push   %ebp
 804f8a1:	89 e5                	mov    %esp,%ebp
 804f8a3:	83 ec 18             	sub    $0x18,%esp
 804f8a6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 804f8a9:	89 c3                	mov    %eax,%ebx
 804f8ab:	89 d0                	mov    %edx,%eax
 804f8ad:	89 75 fc             	mov    %esi,-0x4(%ebp)
 804f8b0:	89 d6                	mov    %edx,%esi
 804f8b2:	e8 a9 f8 ff ff       	call   804f160 <main+0x5540>
 804f8b7:	89 c2                	mov    %eax,%edx
 804f8b9:	31 c0                	xor    %eax,%eax
 804f8bb:	85 d2                	test   %edx,%edx
 804f8bd:	74 26                	je     804f8e5 <main+0x5cc5>
 804f8bf:	a1 54 8e 05 08       	mov    0x8058e54,%eax
 804f8c4:	03 05 64 8e 05 08    	add    0x8058e64,%eax
 804f8ca:	89 74 24 08          	mov    %esi,0x8(%esp)
 804f8ce:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 804f8d2:	89 04 24             	mov    %eax,(%esp)
 804f8d5:	e8 9a 9c ff ff       	call   8049574 <memcpy@plt>
 804f8da:	b8 01 00 00 00       	mov    $0x1,%eax
 804f8df:	01 35 64 8e 05 08    	add    %esi,0x8058e64
 804f8e5:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 804f8e8:	8b 75 fc             	mov    -0x4(%ebp),%esi
 804f8eb:	89 ec                	mov    %ebp,%esp
 804f8ed:	5d                   	pop    %ebp
 804f8ee:	c3                   	ret    
 804f8ef:	90                   	nop
 804f8f0:	55                   	push   %ebp
 804f8f1:	89 e5                	mov    %esp,%ebp
 804f8f3:	57                   	push   %edi
 804f8f4:	56                   	push   %esi
 804f8f5:	53                   	push   %ebx
 804f8f6:	83 ec 5c             	sub    $0x5c,%esp
 804f8f9:	a1 24 8e 05 08       	mov    0x8058e24,%eax
 804f8fe:	85 c0                	test   %eax,%eax
 804f900:	0f 85 e7 00 00 00    	jne    804f9ed <main+0x5dcd>
 804f906:	8b 3d 10 8e 05 08    	mov    0x8058e10,%edi
 804f90c:	c7 05 24 8e 05 08 01 	movl   $0x1,0x8058e24
 804f913:	00 00 00 
 804f916:	85 ff                	test   %edi,%edi
 804f918:	75 0a                	jne    804f924 <main+0x5d04>
 804f91a:	c7 05 10 8e 05 08 01 	movl   $0x1,0x8058e10
 804f921:	00 00 00 
 804f924:	8b 35 04 8e 05 08    	mov    0x8058e04,%esi
 804f92a:	85 f6                	test   %esi,%esi
 804f92c:	0f 84 94 01 00 00    	je     804fac6 <main+0x5ea6>
 804f932:	8b 1d 08 8e 05 08    	mov    0x8058e08,%ebx
 804f938:	85 db                	test   %ebx,%ebx
 804f93a:	0f 84 77 01 00 00    	je     804fab7 <main+0x5e97>
 804f940:	a1 14 8e 05 08       	mov    0x8058e14,%eax
 804f945:	85 c0                	test   %eax,%eax
 804f947:	0f 84 b2 01 00 00    	je     804faff <main+0x5edf>
 804f94d:	8b 15 18 8e 05 08    	mov    0x8058e18,%edx
 804f953:	8b 0c 90             	mov    (%eax,%edx,4),%ecx
 804f956:	85 c9                	test   %ecx,%ecx
 804f958:	0f 84 a1 01 00 00    	je     804faff <main+0x5edf>
 804f95e:	8b 04 90             	mov    (%eax,%edx,4),%eax
 804f961:	8b 49 10             	mov    0x10(%ecx),%ecx
 804f964:	8b 58 08             	mov    0x8(%eax),%ebx
 804f967:	8b 00                	mov    (%eax),%eax
 804f969:	89 0d 2c 8e 05 08    	mov    %ecx,0x8058e2c
 804f96f:	89 1d 20 8e 05 08    	mov    %ebx,0x8058e20
 804f975:	89 1d 5c 8e 05 08    	mov    %ebx,0x8058e5c
 804f97b:	a3 04 8e 05 08       	mov    %eax,0x8058e04
 804f980:	0f b6 13             	movzbl (%ebx),%edx
 804f983:	88 15 28 8e 05 08    	mov    %dl,0x8058e28
 804f989:	eb 6f                	jmp    804f9fa <main+0x5dda>
 804f98b:	90                   	nop
 804f98c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 804f990:	0f b7 94 00 c0 55 05 	movzwl 0x80555c0(%eax,%eax,1),%edx
 804f997:	08 
 804f998:	89 fb                	mov    %edi,%ebx
 804f99a:	0f bf c2             	movswl %dx,%eax
 804f99d:	85 c0                	test   %eax,%eax
 804f99f:	75 13                	jne    804f9b4 <main+0x5d94>
 804f9a1:	a1 34 8e 05 08       	mov    0x8058e34,%eax
 804f9a6:	8b 1d 38 8e 05 08    	mov    0x8058e38,%ebx
 804f9ac:	0f bf 84 00 c0 55 05 	movswl 0x80555c0(%eax,%eax,1),%eax
 804f9b3:	08 
 804f9b4:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 804f9b7:	89 15 5c 8e 05 08    	mov    %edx,0x8058e5c
 804f9bd:	89 da                	mov    %ebx,%edx
 804f9bf:	2b 55 d4             	sub    -0x2c(%ebp),%edx
 804f9c2:	89 15 60 8e 05 08    	mov    %edx,0x8058e60
 804f9c8:	0f b6 13             	movzbl (%ebx),%edx
 804f9cb:	88 15 28 8e 05 08    	mov    %dl,0x8058e28
 804f9d1:	c6 03 00             	movb   $0x0,(%ebx)
 804f9d4:	89 1d 20 8e 05 08    	mov    %ebx,0x8058e20
 804f9da:	83 f8 27             	cmp    $0x27,%eax
 804f9dd:	0f 86 b4 00 00 00    	jbe    804fa97 <main+0x5e77>
 804f9e3:	b8 d4 50 05 08       	mov    $0x80550d4,%eax
 804f9e8:	e8 23 f8 ff ff       	call   804f210 <main+0x55f0>
 804f9ed:	8b 1d 20 8e 05 08    	mov    0x8058e20,%ebx
 804f9f3:	0f b6 15 28 8e 05 08 	movzbl 0x8058e28,%edx
 804f9fa:	88 13                	mov    %dl,(%ebx)
 804f9fc:	a1 10 8e 05 08       	mov    0x8058e10,%eax
 804fa01:	89 5d d4             	mov    %ebx,-0x2c(%ebp)
 804fa04:	0f b7 8c 00 60 57 05 	movzwl 0x8055760(%eax,%eax,1),%ecx
 804fa0b:	08 
 804fa0c:	89 df                	mov    %ebx,%edi
 804fa0e:	66 90                	xchg   %ax,%ax
 804fa10:	66 83 bc 00 c0 55 05 	cmpw   $0x0,0x80555c0(%eax,%eax,1)
 804fa17:	08 00 
 804fa19:	0f b6 d2             	movzbl %dl,%edx
 804fa1c:	8b 1c 95 c0 51 05 08 	mov    0x80551c0(,%edx,4),%ebx
 804fa23:	74 38                	je     804fa5d <main+0x5e3d>
 804fa25:	a3 34 8e 05 08       	mov    %eax,0x8058e34
 804fa2a:	89 3d 38 8e 05 08    	mov    %edi,0x8058e38
 804fa30:	eb 2b                	jmp    804fa5d <main+0x5e3d>
 804fa32:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804fa39:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 804fa40:	0f bf 84 00 40 56 05 	movswl 0x8055640(%eax,%eax,1),%eax
 804fa47:	08 
 804fa48:	83 f8 3c             	cmp    $0x3c,%eax
 804fa4b:	7e 08                	jle    804fa55 <main+0x5e35>
 804fa4d:	0f b6 1c 95 e0 56 05 	movzbl 0x80556e0(,%edx,4),%ebx
 804fa54:	08 
 804fa55:	0f b7 8c 00 60 57 05 	movzwl 0x8055760(%eax,%eax,1),%ecx
 804fa5c:	08 
 804fa5d:	0f b6 d3             	movzbl %bl,%edx
 804fa60:	0f bf c9             	movswl %cx,%ecx
 804fa63:	8d 0c 0a             	lea    (%edx,%ecx,1),%ecx
 804fa66:	0f bf b4 09 00 58 05 	movswl 0x8055800(%ecx,%ecx,1),%esi
 804fa6d:	08 
 804fa6e:	39 c6                	cmp    %eax,%esi
 804fa70:	75 ce                	jne    804fa40 <main+0x5e20>
 804fa72:	0f bf 84 09 20 59 05 	movswl 0x8055920(%ecx,%ecx,1),%eax
 804fa79:	08 
 804fa7a:	83 c7 01             	add    $0x1,%edi
 804fa7d:	0f b7 8c 00 60 57 05 	movzwl 0x8055760(%eax,%eax,1),%ecx
 804fa84:	08 
 804fa85:	66 83 f9 6f          	cmp    $0x6f,%cx
 804fa89:	0f 84 01 ff ff ff    	je     804f990 <main+0x5d70>
 804fa8f:	0f b6 17             	movzbl (%edi),%edx
 804fa92:	e9 79 ff ff ff       	jmp    804fa10 <main+0x5df0>
 804fa97:	ff 24 85 20 51 05 08 	jmp    *0x8055120(,%eax,4)
 804fa9e:	b8 0a 00 00 00       	mov    $0xa,%eax
 804faa3:	e8 18 f7 ff ff       	call   804f1c0 <main+0x55a0>
 804faa8:	85 c0                	test   %eax,%eax
 804faaa:	0f 85 3d ff ff ff    	jne    804f9ed <main+0x5dcd>
 804fab0:	b8 07 01 00 00       	mov    $0x107,%eax
 804fab5:	eb 40                	jmp    804faf7 <main+0x5ed7>
 804fab7:	c7 05 08 8e 05 08 a0 	movl   $0x80578a0,0x8058e08
 804fabe:	78 05 08 
 804fac1:	e9 7a fe ff ff       	jmp    804f940 <main+0x5d20>
 804fac6:	c7 05 04 8e 05 08 20 	movl   $0x8057920,0x8058e04
 804facd:	79 05 08 
 804fad0:	e9 5d fe ff ff       	jmp    804f932 <main+0x5d12>
 804fad5:	8b 15 60 8e 05 08    	mov    0x8058e60,%edx
 804fadb:	a1 5c 8e 05 08       	mov    0x8058e5c,%eax
 804fae0:	e8 bb fd ff ff       	call   804f8a0 <main+0x5c80>
 804fae5:	85 c0                	test   %eax,%eax
 804fae7:	0f 85 00 ff ff ff    	jne    804f9ed <main+0x5dcd>
 804faed:	eb c1                	jmp    804fab0 <main+0x5e90>
 804faef:	a1 5c 8e 05 08       	mov    0x8058e5c,%eax
 804faf4:	0f be 00             	movsbl (%eax),%eax
 804faf7:	83 c4 5c             	add    $0x5c,%esp
 804fafa:	5b                   	pop    %ebx
 804fafb:	5e                   	pop    %esi
 804fafc:	5f                   	pop    %edi
 804fafd:	5d                   	pop    %ebp
 804fafe:	c3                   	ret    
 804faff:	e8 3c f7 ff ff       	call   804f240 <main+0x5620>
 804fb04:	8b 1d 18 8e 05 08    	mov    0x8058e18,%ebx
 804fb0a:	a1 04 8e 05 08       	mov    0x8058e04,%eax
 804fb0f:	c7 44 24 04 00 40 00 	movl   $0x4000,0x4(%esp)
 804fb16:	00 
 804fb17:	c1 e3 02             	shl    $0x2,%ebx
 804fb1a:	89 04 24             	mov    %eax,(%esp)
 804fb1d:	03 1d 14 8e 05 08    	add    0x8058e14,%ebx
 804fb23:	e8 c8 fb ff ff       	call   804f6f0 <main+0x5ad0>
 804fb28:	8b 15 18 8e 05 08    	mov    0x8058e18,%edx
 804fb2e:	89 03                	mov    %eax,(%ebx)
 804fb30:	a1 14 8e 05 08       	mov    0x8058e14,%eax
 804fb35:	8b 0c 90             	mov    (%eax,%edx,4),%ecx
 804fb38:	e9 21 fe ff ff       	jmp    804f95e <main+0x5d3e>
 804fb3d:	c7 05 10 8e 05 08 01 	movl   $0x1,0x8058e10
 804fb44:	00 00 00 
 804fb47:	e9 a1 fe ff ff       	jmp    804f9ed <main+0x5dcd>
 804fb4c:	a1 5c 8e 05 08       	mov    0x8058e5c,%eax
 804fb51:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 804fb58:	00 
 804fb59:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 804fb60:	00 
 804fb61:	89 04 24             	mov    %eax,(%esp)
 804fb64:	e8 cb 9a ff ff       	call   8049634 <strtol@plt>
 804fb69:	a3 6c 8e 05 08       	mov    %eax,0x8058e6c
 804fb6e:	b8 02 01 00 00       	mov    $0x102,%eax
 804fb73:	eb 82                	jmp    804faf7 <main+0x5ed7>
 804fb75:	c7 05 10 8e 05 08 05 	movl   $0x5,0x8058e10
 804fb7c:	00 00 00 
 804fb7f:	e9 69 fe ff ff       	jmp    804f9ed <main+0x5dcd>
 804fb84:	8b 1d 5c 8e 05 08    	mov    0x8058e5c,%ebx
 804fb8a:	c7 44 24 04 56 4f 05 	movl   $0x8054f56,0x4(%esp)
 804fb91:	08 
 804fb92:	89 1c 24             	mov    %ebx,(%esp)
 804fb95:	e8 3a 9d ff ff       	call   80498d4 <strcmp@plt>
 804fb9a:	89 c2                	mov    %eax,%edx
 804fb9c:	b8 09 01 00 00       	mov    $0x109,%eax
 804fba1:	85 d2                	test   %edx,%edx
 804fba3:	0f 84 4e ff ff ff    	je     804faf7 <main+0x5ed7>
 804fba9:	c7 44 24 04 5a 4f 05 	movl   $0x8054f5a,0x4(%esp)
 804fbb0:	08 
 804fbb1:	89 1c 24             	mov    %ebx,(%esp)
 804fbb4:	e8 1b 9d ff ff       	call   80498d4 <strcmp@plt>
 804fbb9:	89 c2                	mov    %eax,%edx
 804fbbb:	b8 0a 01 00 00       	mov    $0x10a,%eax
 804fbc0:	85 d2                	test   %edx,%edx
 804fbc2:	0f 84 2f ff ff ff    	je     804faf7 <main+0x5ed7>
 804fbc8:	c7 44 24 04 60 4f 05 	movl   $0x8054f60,0x4(%esp)
 804fbcf:	08 
 804fbd0:	89 1c 24             	mov    %ebx,(%esp)
 804fbd3:	e8 fc 9c ff ff       	call   80498d4 <strcmp@plt>
 804fbd8:	89 c2                	mov    %eax,%edx
 804fbda:	b8 0b 01 00 00       	mov    $0x10b,%eax
 804fbdf:	85 d2                	test   %edx,%edx
 804fbe1:	0f 84 10 ff ff ff    	je     804faf7 <main+0x5ed7>
 804fbe7:	c7 44 24 04 63 4f 05 	movl   $0x8054f63,0x4(%esp)
 804fbee:	08 
 804fbef:	89 1c 24             	mov    %ebx,(%esp)
 804fbf2:	e8 dd 9c ff ff       	call   80498d4 <strcmp@plt>
 804fbf7:	89 c2                	mov    %eax,%edx
 804fbf9:	b8 0c 01 00 00       	mov    $0x10c,%eax
 804fbfe:	85 d2                	test   %edx,%edx
 804fc00:	0f 84 f1 fe ff ff    	je     804faf7 <main+0x5ed7>
 804fc06:	89 1c 24             	mov    %ebx,(%esp)
 804fc09:	e8 f6 9b ff ff       	call   8049804 <strdup@plt>
 804fc0e:	a3 6c 8e 05 08       	mov    %eax,0x8058e6c
 804fc13:	b8 06 01 00 00       	mov    $0x106,%eax
 804fc18:	e9 da fe ff ff       	jmp    804faf7 <main+0x5ed7>
 804fc1d:	b8 13 01 00 00       	mov    $0x113,%eax
 804fc22:	e9 d0 fe ff ff       	jmp    804faf7 <main+0x5ed7>
 804fc27:	b8 12 01 00 00       	mov    $0x112,%eax
 804fc2c:	e9 c6 fe ff ff       	jmp    804faf7 <main+0x5ed7>
 804fc31:	b8 11 01 00 00       	mov    $0x111,%eax
 804fc36:	e9 bc fe ff ff       	jmp    804faf7 <main+0x5ed7>
 804fc3b:	b8 3c 00 00 00       	mov    $0x3c,%eax
 804fc40:	e9 b2 fe ff ff       	jmp    804faf7 <main+0x5ed7>
 804fc45:	a1 54 8e 05 08       	mov    0x8058e54,%eax
 804fc4a:	85 c0                	test   %eax,%eax
 804fc4c:	0f 84 00 03 00 00    	je     804ff52 <main+0x6332>
 804fc52:	8b 15 64 8e 05 08    	mov    0x8058e64,%edx
 804fc58:	c6 04 10 00          	movb   $0x0,(%eax,%edx,1)
 804fc5c:	a1 54 8e 05 08       	mov    0x8058e54,%eax
 804fc61:	c7 05 58 8e 05 08 00 	movl   $0x0,0x8058e58
 804fc68:	00 00 00 
 804fc6b:	c7 05 54 8e 05 08 00 	movl   $0x0,0x8058e54
 804fc72:	00 00 00 
 804fc75:	c7 05 64 8e 05 08 00 	movl   $0x0,0x8058e64
 804fc7c:	00 00 00 
 804fc7f:	a3 6c 8e 05 08       	mov    %eax,0x8058e6c
 804fc84:	b8 05 01 00 00       	mov    $0x105,%eax
 804fc89:	e9 69 fe ff ff       	jmp    804faf7 <main+0x5ed7>
 804fc8e:	0f b6 05 28 8e 05 08 	movzbl 0x8058e28,%eax
 804fc95:	88 03                	mov    %al,(%ebx)
 804fc97:	a1 34 8e 05 08       	mov    0x8058e34,%eax
 804fc9c:	8b 1d 38 8e 05 08    	mov    0x8058e38,%ebx
 804fca2:	0f b7 94 00 c0 55 05 	movzwl 0x80555c0(%eax,%eax,1),%edx
 804fca9:	08 
 804fcaa:	e9 eb fc ff ff       	jmp    804f99a <main+0x5d7a>
 804fcaf:	83 c8 ff             	or     $0xffffffff,%eax
 804fcb2:	2b 05 5c 8e 05 08    	sub    0x8058e5c,%eax
 804fcb8:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 804fcbb:	89 45 c8             	mov    %eax,-0x38(%ebp)
 804fcbe:	0f b6 05 28 8e 05 08 	movzbl 0x8058e28,%eax
 804fcc5:	88 03                	mov    %al,(%ebx)
 804fcc7:	8b 35 14 8e 05 08    	mov    0x8058e14,%esi
 804fccd:	a1 18 8e 05 08       	mov    0x8058e18,%eax
 804fcd2:	8b 04 86             	mov    (%esi,%eax,4),%eax
 804fcd5:	83 78 2c 00          	cmpl   $0x0,0x2c(%eax)
 804fcd9:	0f 84 56 02 00 00    	je     804ff35 <main+0x6315>
 804fcdf:	8b 0d 2c 8e 05 08    	mov    0x8058e2c,%ecx
 804fce5:	8b 78 04             	mov    0x4(%eax),%edi
 804fce8:	89 7d b4             	mov    %edi,-0x4c(%ebp)
 804fceb:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 804fcee:	8b 3d 20 8e 05 08    	mov    0x8058e20,%edi
 804fcf4:	01 ca                	add    %ecx,%edx
 804fcf6:	39 d7                	cmp    %edx,%edi
 804fcf8:	0f 86 5b 07 00 00    	jbe    8050459 <main+0x6839>
 804fcfe:	8b 15 5c 8e 05 08    	mov    0x8058e5c,%edx
 804fd04:	89 55 d0             	mov    %edx,-0x30(%ebp)
 804fd07:	89 55 cc             	mov    %edx,-0x34(%ebp)
 804fd0a:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 804fd0d:	8d 4c 0a 01          	lea    0x1(%edx,%ecx,1),%ecx
 804fd11:	39 cf                	cmp    %ecx,%edi
 804fd13:	0f 87 82 06 00 00    	ja     805039b <main+0x677b>
 804fd19:	83 78 28 00          	cmpl   $0x0,0x28(%eax)
 804fd1d:	0f 85 60 02 00 00    	jne    804ff83 <main+0x6363>
 804fd23:	2b 7d d0             	sub    -0x30(%ebp),%edi
 804fd26:	83 ff 01             	cmp    $0x1,%edi
 804fd29:	0f 84 28 05 00 00    	je     8050257 <main+0x6637>
 804fd2f:	8b 40 04             	mov    0x4(%eax),%eax
 804fd32:	8b 1d 2c 8e 05 08    	mov    0x8058e2c,%ebx
 804fd38:	8b 7d d0             	mov    -0x30(%ebp),%edi
 804fd3b:	01 c3                	add    %eax,%ebx
 804fd3d:	a1 10 8e 05 08       	mov    0x8058e10,%eax
 804fd42:	39 fb                	cmp    %edi,%ebx
 804fd44:	89 1d 20 8e 05 08    	mov    %ebx,0x8058e20
 804fd4a:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 804fd4d:	0f 86 23 02 00 00    	jbe    804ff76 <main+0x6356>
 804fd53:	89 df                	mov    %ebx,%edi
 804fd55:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 804fd58:	bb 01 00 00 00       	mov    $0x1,%ebx
 804fd5d:	0f b6 11             	movzbl (%ecx),%edx
 804fd60:	84 d2                	test   %dl,%dl
 804fd62:	74 0b                	je     804fd6f <main+0x614f>
 804fd64:	0f b6 d2             	movzbl %dl,%edx
 804fd67:	0f b6 1c 95 c0 51 05 	movzbl 0x80551c0(,%edx,4),%ebx
 804fd6e:	08 
 804fd6f:	66 83 bc 00 c0 55 05 	cmpw   $0x0,0x80555c0(%eax,%eax,1)
 804fd76:	08 00 
 804fd78:	74 16                	je     804fd90 <main+0x6170>
 804fd7a:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 804fd7d:	a3 34 8e 05 08       	mov    %eax,0x8058e34
 804fd82:	89 15 38 8e 05 08    	mov    %edx,0x8058e38
 804fd88:	90                   	nop
 804fd89:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804fd90:	0f bf 8c 00 60 57 05 	movswl 0x8055760(%eax,%eax,1),%ecx
 804fd97:	08 
 804fd98:	0f b6 d3             	movzbl %bl,%edx
 804fd9b:	01 d1                	add    %edx,%ecx
 804fd9d:	0f bf b4 09 00 58 05 	movswl 0x8055800(%ecx,%ecx,1),%esi
 804fda4:	08 
 804fda5:	39 f0                	cmp    %esi,%eax
 804fda7:	0f 84 ac 01 00 00    	je     804ff59 <main+0x6339>
 804fdad:	0f bf 84 00 40 56 05 	movswl 0x8055640(%eax,%eax,1),%eax
 804fdb4:	08 
 804fdb5:	83 f8 3c             	cmp    $0x3c,%eax
 804fdb8:	7e d6                	jle    804fd90 <main+0x6170>
 804fdba:	0f b6 1c 95 e0 56 05 	movzbl 0x80556e0(,%edx,4),%ebx
 804fdc1:	08 
 804fdc2:	eb cc                	jmp    804fd90 <main+0x6170>
 804fdc4:	a1 54 8e 05 08       	mov    0x8058e54,%eax
 804fdc9:	c7 05 10 8e 05 08 03 	movl   $0x3,0x8058e10
 804fdd0:	00 00 00 
 804fdd3:	85 c0                	test   %eax,%eax
 804fdd5:	0f 84 12 fc ff ff    	je     804f9ed <main+0x5dcd>
 804fddb:	8b 15 64 8e 05 08    	mov    0x8058e64,%edx
 804fde1:	c6 04 10 00          	movb   $0x0,(%eax,%edx,1)
 804fde5:	a1 54 8e 05 08       	mov    0x8058e54,%eax
 804fdea:	c7 05 58 8e 05 08 00 	movl   $0x0,0x8058e58
 804fdf1:	00 00 00 
 804fdf4:	c7 05 54 8e 05 08 00 	movl   $0x0,0x8058e54
 804fdfb:	00 00 00 
 804fdfe:	c7 05 64 8e 05 08 00 	movl   $0x0,0x8058e64
 804fe05:	00 00 00 
 804fe08:	a3 6c 8e 05 08       	mov    %eax,0x8058e6c
 804fe0d:	b8 04 01 00 00       	mov    $0x104,%eax
 804fe12:	e9 e0 fc ff ff       	jmp    804faf7 <main+0x5ed7>
 804fe17:	a1 54 8e 05 08       	mov    0x8058e54,%eax
 804fe1c:	c7 05 10 8e 05 08 03 	movl   $0x3,0x8058e10
 804fe23:	00 00 00 
 804fe26:	85 c0                	test   %eax,%eax
 804fe28:	0f 84 ba 05 00 00    	je     80503e8 <main+0x67c8>
 804fe2e:	8b 15 64 8e 05 08    	mov    0x8058e64,%edx
 804fe34:	c6 04 10 00          	movb   $0x0,(%eax,%edx,1)
 804fe38:	a1 54 8e 05 08       	mov    0x8058e54,%eax
 804fe3d:	c7 05 58 8e 05 08 00 	movl   $0x0,0x8058e58
 804fe44:	00 00 00 
 804fe47:	c7 05 54 8e 05 08 00 	movl   $0x0,0x8058e54
 804fe4e:	00 00 00 
 804fe51:	c7 05 64 8e 05 08 00 	movl   $0x0,0x8058e64
 804fe58:	00 00 00 
 804fe5b:	a3 6c 8e 05 08       	mov    %eax,0x8058e6c
 804fe60:	b8 03 01 00 00       	mov    $0x103,%eax
 804fe65:	e9 8d fc ff ff       	jmp    804faf7 <main+0x5ed7>
 804fe6a:	b8 08 01 00 00       	mov    $0x108,%eax
 804fe6f:	e9 83 fc ff ff       	jmp    804faf7 <main+0x5ed7>
 804fe74:	a1 5c 8e 05 08       	mov    0x8058e5c,%eax
 804fe79:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 804fe7c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 804fe80:	c7 44 24 04 60 65 05 	movl   $0x8056560,0x4(%esp)
 804fe87:	08 
 804fe88:	83 c0 02             	add    $0x2,%eax
 804fe8b:	89 04 24             	mov    %eax,(%esp)
 804fe8e:	e8 41 99 ff ff       	call   80497d4 <sscanf@plt>
 804fe93:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 804fe96:	e8 25 f3 ff ff       	call   804f1c0 <main+0x55a0>
 804fe9b:	85 c0                	test   %eax,%eax
 804fe9d:	0f 85 4a fb ff ff    	jne    804f9ed <main+0x5dcd>
 804fea3:	e9 08 fc ff ff       	jmp    804fab0 <main+0x5e90>
 804fea8:	a1 5c 8e 05 08       	mov    0x8058e5c,%eax
 804fead:	0f be 40 01          	movsbl 0x1(%eax),%eax
 804feb1:	e8 0a f3 ff ff       	call   804f1c0 <main+0x55a0>
 804feb6:	85 c0                	test   %eax,%eax
 804feb8:	0f 85 2f fb ff ff    	jne    804f9ed <main+0x5dcd>
 804febe:	e9 ed fb ff ff       	jmp    804fab0 <main+0x5e90>
 804fec3:	b8 3e 00 00 00       	mov    $0x3e,%eax
 804fec8:	e9 2a fc ff ff       	jmp    804faf7 <main+0x5ed7>
 804fecd:	b8 15 01 00 00       	mov    $0x115,%eax
 804fed2:	e9 20 fc ff ff       	jmp    804faf7 <main+0x5ed7>
 804fed7:	b8 16 01 00 00       	mov    $0x116,%eax
 804fedc:	e9 16 fc ff ff       	jmp    804faf7 <main+0x5ed7>
 804fee1:	a1 08 8e 05 08       	mov    0x8058e08,%eax
 804fee6:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 804feed:	00 
 804feee:	89 44 24 0c          	mov    %eax,0xc(%esp)
 804fef2:	a1 60 8e 05 08       	mov    0x8058e60,%eax
 804fef7:	89 44 24 04          	mov    %eax,0x4(%esp)
 804fefb:	a1 5c 8e 05 08       	mov    0x8058e5c,%eax
 804ff00:	89 04 24             	mov    %eax,(%esp)
 804ff03:	e8 4c 9a ff ff       	call   8049954 <fwrite@plt>
 804ff08:	e9 e0 fa ff ff       	jmp    804f9ed <main+0x5dcd>
 804ff0d:	b8 10 01 00 00       	mov    $0x110,%eax
 804ff12:	e9 e0 fb ff ff       	jmp    804faf7 <main+0x5ed7>
 804ff17:	b8 0f 01 00 00       	mov    $0x10f,%eax
 804ff1c:	e9 d6 fb ff ff       	jmp    804faf7 <main+0x5ed7>
 804ff21:	b8 3d 00 00 00       	mov    $0x3d,%eax
 804ff26:	e9 cc fb ff ff       	jmp    804faf7 <main+0x5ed7>
 804ff2b:	b8 3b 00 00 00       	mov    $0x3b,%eax
 804ff30:	e9 c2 fb ff ff       	jmp    804faf7 <main+0x5ed7>
 804ff35:	8b 48 10             	mov    0x10(%eax),%ecx
 804ff38:	8b 15 04 8e 05 08    	mov    0x8058e04,%edx
 804ff3e:	89 0d 2c 8e 05 08    	mov    %ecx,0x8058e2c
 804ff44:	89 10                	mov    %edx,(%eax)
 804ff46:	c7 40 2c 01 00 00 00 	movl   $0x1,0x2c(%eax)
 804ff4d:	e9 93 fd ff ff       	jmp    804fce5 <main+0x60c5>
 804ff52:	31 c0                	xor    %eax,%eax
 804ff54:	e9 9e fb ff ff       	jmp    804faf7 <main+0x5ed7>
 804ff59:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 804ff5d:	3b 7d d4             	cmp    -0x2c(%ebp),%edi
 804ff60:	0f bf 84 09 20 59 05 	movswl 0x8055920(%ecx,%ecx,1),%eax
 804ff67:	08 
 804ff68:	0f 87 e7 fd ff ff    	ja     804fd55 <main+0x6135>
 804ff6e:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 804ff71:	89 fb                	mov    %edi,%ebx
 804ff73:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 804ff76:	0f b7 94 00 c0 55 05 	movzwl 0x80555c0(%eax,%eax,1),%edx
 804ff7d:	08 
 804ff7e:	e9 17 fa ff ff       	jmp    804f99a <main+0x5d7a>
 804ff83:	83 ef 01             	sub    $0x1,%edi
 804ff86:	2b 7d d0             	sub    -0x30(%ebp),%edi
 804ff89:	85 ff                	test   %edi,%edi
 804ff8b:	7e 24                	jle    804ffb1 <main+0x6391>
 804ff8d:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 804ff90:	31 c0                	xor    %eax,%eax
 804ff92:	8b 75 cc             	mov    -0x34(%ebp),%esi
 804ff95:	0f b6 0c 06          	movzbl (%esi,%eax,1),%ecx
 804ff99:	88 0c 02             	mov    %cl,(%edx,%eax,1)
 804ff9c:	83 c0 01             	add    $0x1,%eax
 804ff9f:	39 f8                	cmp    %edi,%eax
 804ffa1:	75 f2                	jne    804ff95 <main+0x6375>
 804ffa3:	8b 35 14 8e 05 08    	mov    0x8058e14,%esi
 804ffa9:	a1 18 8e 05 08       	mov    0x8058e18,%eax
 804ffae:	8b 04 86             	mov    (%esi,%eax,4),%eax
 804ffb1:	83 78 2c 02          	cmpl   $0x2,0x2c(%eax)
 804ffb5:	0f 84 13 03 00 00    	je     80502ce <main+0x66ae>
 804ffbb:	89 fa                	mov    %edi,%edx
 804ffbd:	f7 d2                	not    %edx
 804ffbf:	03 50 0c             	add    0xc(%eax),%edx
 804ffc2:	85 d2                	test   %edx,%edx
 804ffc4:	0f 8f 9a 00 00 00    	jg     8050064 <main+0x6444>
 804ffca:	a1 20 8e 05 08       	mov    0x8058e20,%eax
 804ffcf:	89 5d cc             	mov    %ebx,-0x34(%ebp)
 804ffd2:	89 45 d0             	mov    %eax,-0x30(%ebp)
 804ffd5:	eb 50                	jmp    8050027 <main+0x6407>
 804ffd7:	8b 53 0c             	mov    0xc(%ebx),%edx
 804ffda:	8d 04 12             	lea    (%edx,%edx,1),%eax
 804ffdd:	85 c0                	test   %eax,%eax
 804ffdf:	7e 74                	jle    8050055 <main+0x6435>
 804ffe1:	89 43 0c             	mov    %eax,0xc(%ebx)
 804ffe4:	83 c0 02             	add    $0x2,%eax
 804ffe7:	89 44 24 04          	mov    %eax,0x4(%esp)
 804ffeb:	8b 43 04             	mov    0x4(%ebx),%eax
 804ffee:	89 04 24             	mov    %eax,(%esp)
 804fff1:	e8 5a f1 ff ff       	call   804f150 <main+0x5530>
 804fff6:	85 c0                	test   %eax,%eax
 804fff8:	89 43 04             	mov    %eax,0x4(%ebx)
 804fffb:	74 49                	je     8050046 <main+0x6426>
 804fffd:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8050000:	29 f2                	sub    %esi,%edx
 8050002:	8d 34 10             	lea    (%eax,%edx,1),%esi
 8050005:	a1 18 8e 05 08       	mov    0x8058e18,%eax
 805000a:	89 fa                	mov    %edi,%edx
 805000c:	89 75 d0             	mov    %esi,-0x30(%ebp)
 805000f:	f7 d2                	not    %edx
 8050011:	89 35 20 8e 05 08    	mov    %esi,0x8058e20
 8050017:	8b 35 14 8e 05 08    	mov    0x8058e14,%esi
 805001d:	8b 04 86             	mov    (%esi,%eax,4),%eax
 8050020:	03 50 0c             	add    0xc(%eax),%edx
 8050023:	85 d2                	test   %edx,%edx
 8050025:	7f 3a                	jg     8050061 <main+0x6441>
 8050027:	31 db                	xor    %ebx,%ebx
 8050029:	85 f6                	test   %esi,%esi
 805002b:	74 08                	je     8050035 <main+0x6415>
 805002d:	a1 18 8e 05 08       	mov    0x8058e18,%eax
 8050032:	8b 1c 86             	mov    (%esi,%eax,4),%ebx
 8050035:	8b 4b 14             	mov    0x14(%ebx),%ecx
 8050038:	8b 73 04             	mov    0x4(%ebx),%esi
 805003b:	85 c9                	test   %ecx,%ecx
 805003d:	75 98                	jne    804ffd7 <main+0x63b7>
 805003f:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 8050046:	b8 78 50 05 08       	mov    $0x8055078,%eax
 805004b:	e8 c0 f1 ff ff       	call   804f210 <main+0x55f0>
 8050050:	8b 43 04             	mov    0x4(%ebx),%eax
 8050053:	eb a8                	jmp    804fffd <main+0x63dd>
 8050055:	89 d0                	mov    %edx,%eax
 8050057:	c1 e8 03             	shr    $0x3,%eax
 805005a:	01 d0                	add    %edx,%eax
 805005c:	89 43 0c             	mov    %eax,0xc(%ebx)
 805005f:	eb 83                	jmp    804ffe4 <main+0x63c4>
 8050061:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 8050064:	81 fa 00 20 00 00    	cmp    $0x2000,%edx
 805006a:	89 55 d0             	mov    %edx,-0x30(%ebp)
 805006d:	7e 07                	jle    8050076 <main+0x6456>
 805006f:	c7 45 d0 00 20 00 00 	movl   $0x2000,-0x30(%ebp)
 8050076:	83 78 18 00          	cmpl   $0x0,0x18(%eax)
 805007a:	0f 84 8b 02 00 00    	je     805030b <main+0x66eb>
 8050080:	31 d2                	xor    %edx,%edx
 8050082:	b8 2a 00 00 00       	mov    $0x2a,%eax
 8050087:	89 d6                	mov    %edx,%esi
 8050089:	eb 2c                	jmp    80500b7 <main+0x6497>
 805008b:	0f b6 01             	movzbl (%ecx),%eax
 805008e:	83 c1 01             	add    $0x1,%ecx
 8050091:	89 4a 10             	mov    %ecx,0x10(%edx)
 8050094:	83 f8 0a             	cmp    $0xa,%eax
 8050097:	0f 84 2a 03 00 00    	je     80503c7 <main+0x67a7>
 805009d:	8b 15 14 8e 05 08    	mov    0x8058e14,%edx
 80500a3:	8b 0d 18 8e 05 08    	mov    0x8058e18,%ecx
 80500a9:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
 80500ac:	8b 52 04             	mov    0x4(%edx),%edx
 80500af:	01 fa                	add    %edi,%edx
 80500b1:	88 04 32             	mov    %al,(%edx,%esi,1)
 80500b4:	83 c6 01             	add    $0x1,%esi
 80500b7:	3b 75 d0             	cmp    -0x30(%ebp),%esi
 80500ba:	0f 83 40 03 00 00    	jae    8050400 <main+0x67e0>
 80500c0:	83 3d 10 79 05 08 00 	cmpl   $0x0,0x8057910
 80500c7:	8b 15 04 8e 05 08    	mov    0x8058e04,%edx
 80500cd:	75 08                	jne    80500d7 <main+0x64b7>
 80500cf:	8b 4a 10             	mov    0x10(%edx),%ecx
 80500d2:	3b 4a 14             	cmp    0x14(%edx),%ecx
 80500d5:	72 b4                	jb     805008b <main+0x646b>
 80500d7:	89 14 24             	mov    %edx,(%esp)
 80500da:	e8 15 98 ff ff       	call   80498f4 <fgetc@plt>
 80500df:	83 f8 ff             	cmp    $0xffffffff,%eax
 80500e2:	75 b0                	jne    8050094 <main+0x6474>
 80500e4:	89 f2                	mov    %esi,%edx
 80500e6:	a1 04 8e 05 08       	mov    0x8058e04,%eax
 80500eb:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 80500ee:	89 04 24             	mov    %eax,(%esp)
 80500f1:	e8 1e 96 ff ff       	call   8049714 <ferror@plt>
 80500f6:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 80500f9:	85 c0                	test   %eax,%eax
 80500fb:	74 0d                	je     805010a <main+0x64ea>
 80500fd:	b8 68 4f 05 08       	mov    $0x8054f68,%eax
 8050102:	e8 09 f1 ff ff       	call   804f210 <main+0x55f0>
 8050107:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 805010a:	89 15 2c 8e 05 08    	mov    %edx,0x8058e2c
 8050110:	a1 18 8e 05 08       	mov    0x8058e18,%eax
 8050115:	8b 35 14 8e 05 08    	mov    0x8058e14,%esi
 805011b:	8b 0d 2c 8e 05 08    	mov    0x8058e2c,%ecx
 8050121:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8050128:	8b 04 86             	mov    (%esi,%eax,4),%eax
 805012b:	85 c9                	test   %ecx,%ecx
 805012d:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 8050130:	89 50 10             	mov    %edx,0x10(%eax)
 8050133:	0f 84 a6 01 00 00    	je     80502df <main+0x66bf>
 8050139:	8b 15 18 8e 05 08    	mov    0x8058e18,%edx
 805013f:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8050142:	8b 0c 96             	mov    (%esi,%edx,4),%ecx
 8050145:	01 f8                	add    %edi,%eax
 8050147:	3b 41 0c             	cmp    0xc(%ecx),%eax
 805014a:	89 4d cc             	mov    %ecx,-0x34(%ebp)
 805014d:	0f 87 36 01 00 00    	ja     8050289 <main+0x6669>
 8050153:	8b 14 96             	mov    (%esi,%edx,4),%edx
 8050156:	a3 2c 8e 05 08       	mov    %eax,0x8058e2c
 805015b:	8b 52 04             	mov    0x4(%edx),%edx
 805015e:	c6 04 02 00          	movb   $0x0,(%edx,%eax,1)
 8050162:	8b 15 18 8e 05 08    	mov    0x8058e18,%edx
 8050168:	a1 14 8e 05 08       	mov    0x8058e14,%eax
 805016d:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8050170:	8b 50 04             	mov    0x4(%eax),%edx
 8050173:	a1 2c 8e 05 08       	mov    0x8058e2c,%eax
 8050178:	c6 44 02 01 00       	movb   $0x0,0x1(%edx,%eax,1)
 805017d:	a1 14 8e 05 08       	mov    0x8058e14,%eax
 8050182:	8b 15 18 8e 05 08    	mov    0x8058e18,%edx
 8050188:	83 7d d0 01          	cmpl   $0x1,-0x30(%ebp)
 805018c:	8b 04 90             	mov    (%eax,%edx,4),%eax
 805018f:	8b 40 04             	mov    0x4(%eax),%eax
 8050192:	a3 5c 8e 05 08       	mov    %eax,0x8058e5c
 8050197:	0f 84 b7 00 00 00    	je     8050254 <main+0x6634>
 805019d:	83 7d d0 02          	cmpl   $0x2,-0x30(%ebp)
 80501a1:	0f 84 ba 03 00 00    	je     8050561 <main+0x6941>
 80501a7:	8b 5d c8             	mov    -0x38(%ebp),%ebx
 80501aa:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80501ad:	01 c3                	add    %eax,%ebx
 80501af:	a1 10 8e 05 08       	mov    0x8058e10,%eax
 80501b4:	3b 5d d4             	cmp    -0x2c(%ebp),%ebx
 80501b7:	89 1d 20 8e 05 08    	mov    %ebx,0x8058e20
 80501bd:	0f 86 89 00 00 00    	jbe    805024c <main+0x662c>
 80501c3:	89 df                	mov    %ebx,%edi
 80501c5:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 80501c8:	bb 01 00 00 00       	mov    $0x1,%ebx
 80501cd:	0f b6 11             	movzbl (%ecx),%edx
 80501d0:	84 d2                	test   %dl,%dl
 80501d2:	74 0b                	je     80501df <main+0x65bf>
 80501d4:	0f b6 d2             	movzbl %dl,%edx
 80501d7:	0f b6 1c 95 c0 51 05 	movzbl 0x80551c0(,%edx,4),%ebx
 80501de:	08 
 80501df:	66 83 bc 00 c0 55 05 	cmpw   $0x0,0x80555c0(%eax,%eax,1)
 80501e6:	08 00 
 80501e8:	74 16                	je     8050200 <main+0x65e0>
 80501ea:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 80501ed:	a3 34 8e 05 08       	mov    %eax,0x8058e34
 80501f2:	89 15 38 8e 05 08    	mov    %edx,0x8058e38
 80501f8:	90                   	nop
 80501f9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8050200:	0f bf 8c 00 60 57 05 	movswl 0x8055760(%eax,%eax,1),%ecx
 8050207:	08 
 8050208:	0f b6 d3             	movzbl %bl,%edx
 805020b:	01 d1                	add    %edx,%ecx
 805020d:	0f bf b4 09 00 58 05 	movswl 0x8055800(%ecx,%ecx,1),%esi
 8050214:	08 
 8050215:	39 f0                	cmp    %esi,%eax
 8050217:	74 17                	je     8050230 <main+0x6610>
 8050219:	0f bf 84 00 40 56 05 	movswl 0x8055640(%eax,%eax,1),%eax
 8050220:	08 
 8050221:	83 f8 3c             	cmp    $0x3c,%eax
 8050224:	7e da                	jle    8050200 <main+0x65e0>
 8050226:	0f b6 1c 95 e0 56 05 	movzbl 0x80556e0(,%edx,4),%ebx
 805022d:	08 
 805022e:	eb d0                	jmp    8050200 <main+0x65e0>
 8050230:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 8050234:	3b 7d d4             	cmp    -0x2c(%ebp),%edi
 8050237:	0f bf 84 09 20 59 05 	movswl 0x8055920(%ecx,%ecx,1),%eax
 805023e:	08 
 805023f:	77 84                	ja     80501c5 <main+0x65a5>
 8050241:	8b 0d 5c 8e 05 08    	mov    0x8058e5c,%ecx
 8050247:	89 fb                	mov    %edi,%ebx
 8050249:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 805024c:	0f b6 13             	movzbl (%ebx),%edx
 805024f:	e9 b0 f7 ff ff       	jmp    804fa04 <main+0x5de4>
 8050254:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8050257:	8b 15 10 8e 05 08    	mov    0x8058e10,%edx
 805025d:	b8 02 00 00 00       	mov    $0x2,%eax
 8050262:	89 c1                	mov    %eax,%ecx
 8050264:	8b 7d d0             	mov    -0x30(%ebp),%edi
 8050267:	c7 05 30 8e 05 08 00 	movl   $0x0,0x8058e30
 805026e:	00 00 00 
 8050271:	83 ea 01             	sub    $0x1,%edx
 8050274:	89 d0                	mov    %edx,%eax
 8050276:	c1 fa 1f             	sar    $0x1f,%edx
 8050279:	f7 f9                	idiv   %ecx
 805027b:	89 3d 20 8e 05 08    	mov    %edi,0x8058e20
 8050281:	83 c0 25             	add    $0x25,%eax
 8050284:	e9 51 f7 ff ff       	jmp    804f9da <main+0x5dba>
 8050289:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 805028c:	8b 55 cc             	mov    -0x34(%ebp),%edx
 805028f:	d1 f9                	sar    %ecx
 8050291:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8050294:	89 44 24 04          	mov    %eax,0x4(%esp)
 8050298:	8b 42 04             	mov    0x4(%edx),%eax
 805029b:	89 04 24             	mov    %eax,(%esp)
 805029e:	e8 ad ee ff ff       	call   804f150 <main+0x5530>
 80502a3:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 80502a6:	8b 15 18 8e 05 08    	mov    0x8058e18,%edx
 80502ac:	8b 35 14 8e 05 08    	mov    0x8058e14,%esi
 80502b2:	89 41 04             	mov    %eax,0x4(%ecx)
 80502b5:	8b 04 96             	mov    (%esi,%edx,4),%eax
 80502b8:	83 78 04 00          	cmpl   $0x0,0x4(%eax)
 80502bc:	0f 84 75 01 00 00    	je     8050437 <main+0x6817>
 80502c2:	a1 2c 8e 05 08       	mov    0x8058e2c,%eax
 80502c7:	01 f8                	add    %edi,%eax
 80502c9:	e9 85 fe ff ff       	jmp    8050153 <main+0x6533>
 80502ce:	c7 05 2c 8e 05 08 00 	movl   $0x0,0x8058e2c
 80502d5:	00 00 00 
 80502d8:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 80502df:	85 ff                	test   %edi,%edi
 80502e1:	0f 84 29 01 00 00    	je     8050410 <main+0x67f0>
 80502e7:	a1 18 8e 05 08       	mov    0x8058e18,%eax
 80502ec:	8b 15 2c 8e 05 08    	mov    0x8058e2c,%edx
 80502f2:	c7 45 d0 02 00 00 00 	movl   $0x2,-0x30(%ebp)
 80502f9:	8b 04 86             	mov    (%esi,%eax,4),%eax
 80502fc:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 80502ff:	c7 40 2c 02 00 00 00 	movl   $0x2,0x2c(%eax)
 8050306:	e9 2e fe ff ff       	jmp    8050139 <main+0x6519>
 805030b:	e8 f4 93 ff ff       	call   8049704 <__get_errno_ptr@plt>
 8050310:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8050313:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8050319:	eb 28                	jmp    8050343 <main+0x6723>
 805031b:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 805031e:	83 39 04             	cmpl   $0x4,(%ecx)
 8050321:	0f 85 42 02 00 00    	jne    8050569 <main+0x6949>
 8050327:	8b 45 cc             	mov    -0x34(%ebp),%eax
 805032a:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8050330:	a1 04 8e 05 08       	mov    0x8058e04,%eax
 8050335:	89 04 24             	mov    %eax,(%esp)
 8050338:	e8 37 95 ff ff       	call   8049874 <clearerr@plt>
 805033d:	8b 35 14 8e 05 08    	mov    0x8058e14,%esi
 8050343:	a1 04 8e 05 08       	mov    0x8058e04,%eax
 8050348:	8b 55 d0             	mov    -0x30(%ebp),%edx
 805034b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8050352:	00 
 8050353:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8050357:	a1 18 8e 05 08       	mov    0x8058e18,%eax
 805035c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8050360:	8b 04 86             	mov    (%esi,%eax,4),%eax
 8050363:	8b 40 04             	mov    0x4(%eax),%eax
 8050366:	01 f8                	add    %edi,%eax
 8050368:	89 04 24             	mov    %eax,(%esp)
 805036b:	e8 74 94 ff ff       	call   80497e4 <fread@plt>
 8050370:	85 c0                	test   %eax,%eax
 8050372:	89 c2                	mov    %eax,%edx
 8050374:	a3 2c 8e 05 08       	mov    %eax,0x8058e2c
 8050379:	0f 85 91 fd ff ff    	jne    8050110 <main+0x64f0>
 805037f:	a1 04 8e 05 08       	mov    0x8058e04,%eax
 8050384:	89 04 24             	mov    %eax,(%esp)
 8050387:	e8 88 93 ff ff       	call   8049714 <ferror@plt>
 805038c:	85 c0                	test   %eax,%eax
 805038e:	75 8b                	jne    805031b <main+0x66fb>
 8050390:	8b 15 2c 8e 05 08    	mov    0x8058e2c,%edx
 8050396:	e9 75 fd ff ff       	jmp    8050110 <main+0x64f0>
 805039b:	b8 40 50 05 08       	mov    $0x8055040,%eax
 80503a0:	e8 6b ee ff ff       	call   804f210 <main+0x55f0>
 80503a5:	8b 35 14 8e 05 08    	mov    0x8058e14,%esi
 80503ab:	a1 18 8e 05 08       	mov    0x8058e18,%eax
 80503b0:	8b 0d 5c 8e 05 08    	mov    0x8058e5c,%ecx
 80503b6:	8b 3d 20 8e 05 08    	mov    0x8058e20,%edi
 80503bc:	8b 04 86             	mov    (%esi,%eax,4),%eax
 80503bf:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 80503c2:	e9 52 f9 ff ff       	jmp    804fd19 <main+0x60f9>
 80503c7:	a1 14 8e 05 08       	mov    0x8058e14,%eax
 80503cc:	89 f2                	mov    %esi,%edx
 80503ce:	8b 0d 18 8e 05 08    	mov    0x8058e18,%ecx
 80503d4:	83 c2 01             	add    $0x1,%edx
 80503d7:	8b 04 88             	mov    (%eax,%ecx,4),%eax
 80503da:	8b 40 04             	mov    0x4(%eax),%eax
 80503dd:	01 f8                	add    %edi,%eax
 80503df:	c6 04 30 0a          	movb   $0xa,(%eax,%esi,1)
 80503e3:	e9 22 fd ff ff       	jmp    805010a <main+0x64ea>
 80503e8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80503ef:	e8 c0 91 ff ff       	call   80495b4 <malloc@plt>
 80503f4:	31 d2                	xor    %edx,%edx
 80503f6:	a3 54 8e 05 08       	mov    %eax,0x8058e54
 80503fb:	e9 34 fa ff ff       	jmp    804fe34 <main+0x6214>
 8050400:	83 f8 ff             	cmp    $0xffffffff,%eax
 8050403:	89 f2                	mov    %esi,%edx
 8050405:	0f 85 ff fc ff ff    	jne    805010a <main+0x64ea>
 805040b:	e9 d6 fc ff ff       	jmp    80500e6 <main+0x64c6>
 8050410:	a1 04 8e 05 08       	mov    0x8058e04,%eax
 8050415:	89 04 24             	mov    %eax,(%esp)
 8050418:	e8 43 f3 ff ff       	call   804f760 <main+0x5b40>
 805041d:	a1 2c 8e 05 08       	mov    0x8058e2c,%eax
 8050422:	c7 45 d0 01 00 00 00 	movl   $0x1,-0x30(%ebp)
 8050429:	8b 35 14 8e 05 08    	mov    0x8058e14,%esi
 805042f:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8050432:	e9 02 fd ff ff       	jmp    8050139 <main+0x6519>
 8050437:	b8 a4 50 05 08       	mov    $0x80550a4,%eax
 805043c:	e8 cf ed ff ff       	call   804f210 <main+0x55f0>
 8050441:	a1 2c 8e 05 08       	mov    0x8058e2c,%eax
 8050446:	8b 35 14 8e 05 08    	mov    0x8058e14,%esi
 805044c:	8b 15 18 8e 05 08    	mov    0x8058e18,%edx
 8050452:	01 f8                	add    %edi,%eax
 8050454:	e9 fa fc ff ff       	jmp    8050153 <main+0x6533>
 8050459:	8b 0d 5c 8e 05 08    	mov    0x8058e5c,%ecx
 805045f:	8b 5d c8             	mov    -0x38(%ebp),%ebx
 8050462:	03 1d 5c 8e 05 08    	add    0x8058e5c,%ebx
 8050468:	a1 10 8e 05 08       	mov    0x8058e10,%eax
 805046d:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 8050470:	89 ca                	mov    %ecx,%edx
 8050472:	89 1d 20 8e 05 08    	mov    %ebx,0x8058e20
 8050478:	39 d3                	cmp    %edx,%ebx
 805047a:	76 79                	jbe    80504f5 <main+0x68d5>
 805047c:	0f b6 32             	movzbl (%edx),%esi
 805047f:	bf 01 00 00 00       	mov    $0x1,%edi
 8050484:	89 f1                	mov    %esi,%ecx
 8050486:	84 c9                	test   %cl,%cl
 8050488:	74 0e                	je     8050498 <main+0x6878>
 805048a:	81 e6 ff 00 00 00    	and    $0xff,%esi
 8050490:	0f b6 3c b5 c0 51 05 	movzbl 0x80551c0(,%esi,4),%edi
 8050497:	08 
 8050498:	66 83 bc 00 c0 55 05 	cmpw   $0x0,0x80555c0(%eax,%eax,1)
 805049f:	08 00 
 80504a1:	89 f9                	mov    %edi,%ecx
 80504a3:	74 0d                	je     80504b2 <main+0x6892>
 80504a5:	a3 34 8e 05 08       	mov    %eax,0x8058e34
 80504aa:	89 f9                	mov    %edi,%ecx
 80504ac:	89 15 38 8e 05 08    	mov    %edx,0x8058e38
 80504b2:	0f bf bc 00 60 57 05 	movswl 0x8055760(%eax,%eax,1),%edi
 80504b9:	08 
 80504ba:	0f b6 f1             	movzbl %cl,%esi
 80504bd:	01 f7                	add    %esi,%edi
 80504bf:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 80504c2:	0f bf bc 3f 00 58 05 	movswl 0x8055800(%edi,%edi,1),%edi
 80504c9:	08 
 80504ca:	39 f8                	cmp    %edi,%eax
 80504cc:	74 17                	je     80504e5 <main+0x68c5>
 80504ce:	0f bf 84 00 40 56 05 	movswl 0x8055640(%eax,%eax,1),%eax
 80504d5:	08 
 80504d6:	83 f8 3c             	cmp    $0x3c,%eax
 80504d9:	7e d7                	jle    80504b2 <main+0x6892>
 80504db:	0f b6 0c b5 e0 56 05 	movzbl 0x80556e0(,%esi,4),%ecx
 80504e2:	08 
 80504e3:	eb cd                	jmp    80504b2 <main+0x6892>
 80504e5:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 80504e8:	83 c2 01             	add    $0x1,%edx
 80504eb:	0f bf 84 09 20 59 05 	movswl 0x8055920(%ecx,%ecx,1),%eax
 80504f2:	08 
 80504f3:	eb 83                	jmp    8050478 <main+0x6858>
 80504f5:	0f b7 94 00 c0 55 05 	movzwl 0x80555c0(%eax,%eax,1),%edx
 80504fc:	08 
 80504fd:	66 85 d2             	test   %dx,%dx
 8050500:	74 1b                	je     805051d <main+0x68fd>
 8050502:	89 1d 38 8e 05 08    	mov    %ebx,0x8058e38
 8050508:	8b 1d 20 8e 05 08    	mov    0x8058e20,%ebx
 805050e:	a3 34 8e 05 08       	mov    %eax,0x8058e34
 8050513:	eb 08                	jmp    805051d <main+0x68fd>
 8050515:	0f bf 84 00 40 56 05 	movswl 0x8055640(%eax,%eax,1),%eax
 805051c:	08 
 805051d:	0f bf 8c 00 60 57 05 	movswl 0x8055760(%eax,%eax,1),%ecx
 8050524:	08 
 8050525:	83 c1 01             	add    $0x1,%ecx
 8050528:	0f bf b4 09 00 58 05 	movswl 0x8055800(%ecx,%ecx,1),%esi
 805052f:	08 
 8050530:	39 f0                	cmp    %esi,%eax
 8050532:	75 e1                	jne    8050515 <main+0x68f5>
 8050534:	0f bf 84 09 20 59 05 	movswl 0x8055920(%ecx,%ecx,1),%eax
 805053b:	08 
 805053c:	8b 7d d0             	mov    -0x30(%ebp),%edi
 805053f:	83 f8 3c             	cmp    $0x3c,%eax
 8050542:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 8050545:	0f 84 4f f4 ff ff    	je     804f99a <main+0x5d7a>
 805054b:	85 c0                	test   %eax,%eax
 805054d:	0f 84 47 f4 ff ff    	je     804f99a <main+0x5d7a>
 8050553:	83 c3 01             	add    $0x1,%ebx
 8050556:	89 1d 20 8e 05 08    	mov    %ebx,0x8058e20
 805055c:	e9 eb fc ff ff       	jmp    805024c <main+0x662c>
 8050561:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8050564:	e9 c9 f7 ff ff       	jmp    804fd32 <main+0x6112>
 8050569:	b8 68 4f 05 08       	mov    $0x8054f68,%eax
 805056e:	e8 9d ec ff ff       	call   804f210 <main+0x55f0>
 8050573:	8b 15 2c 8e 05 08    	mov    0x8058e2c,%edx
 8050579:	e9 92 fb ff ff       	jmp    8050110 <main+0x64f0>
 805057e:	90                   	nop
 805057f:	90                   	nop
 8050580:	55                   	push   %ebp
 8050581:	89 e5                	mov    %esp,%ebp
 8050583:	56                   	push   %esi
 8050584:	53                   	push   %ebx
 8050585:	83 ec 10             	sub    $0x10,%esp
 8050588:	8b 5d 08             	mov    0x8(%ebp),%ebx
 805058b:	85 db                	test   %ebx,%ebx
 805058d:	74 2d                	je     80505bc <main+0x699c>
 805058f:	90                   	nop
 8050590:	83 3b 05             	cmpl   $0x5,(%ebx)
 8050593:	77 16                	ja     80505ab <main+0x698b>
 8050595:	8b 03                	mov    (%ebx),%eax
 8050597:	ff 24 85 40 5a 05 08 	jmp    *0x8055a40(,%eax,4)
 805059e:	66 90                	xchg   %ax,%ax
 80505a0:	8b 43 08             	mov    0x8(%ebx),%eax
 80505a3:	89 04 24             	mov    %eax,(%esp)
 80505a6:	e8 a9 94 ff ff       	call   8049a54 <free@plt>
 80505ab:	8b 73 04             	mov    0x4(%ebx),%esi
 80505ae:	89 1c 24             	mov    %ebx,(%esp)
 80505b1:	e8 9e 94 ff ff       	call   8049a54 <free@plt>
 80505b6:	85 f6                	test   %esi,%esi
 80505b8:	89 f3                	mov    %esi,%ebx
 80505ba:	75 d4                	jne    8050590 <main+0x6970>
 80505bc:	83 c4 10             	add    $0x10,%esp
 80505bf:	5b                   	pop    %ebx
 80505c0:	5e                   	pop    %esi
 80505c1:	5d                   	pop    %ebp
 80505c2:	c3                   	ret    
 80505c3:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 80505c9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 80505d0:	8b 43 0c             	mov    0xc(%ebx),%eax
 80505d3:	89 04 24             	mov    %eax,(%esp)
 80505d6:	e8 a5 ff ff ff       	call   8050580 <main+0x6960>
 80505db:	eb ce                	jmp    80505ab <main+0x698b>
 80505dd:	8d 76 00             	lea    0x0(%esi),%esi
 80505e0:	8b 43 0c             	mov    0xc(%ebx),%eax
 80505e3:	89 04 24             	mov    %eax,(%esp)
 80505e6:	e8 95 ff ff ff       	call   8050580 <main+0x6960>
 80505eb:	8b 43 10             	mov    0x10(%ebx),%eax
 80505ee:	89 04 24             	mov    %eax,(%esp)
 80505f1:	e8 8a ff ff ff       	call   8050580 <main+0x6960>
 80505f6:	eb b3                	jmp    80505ab <main+0x698b>
 80505f8:	90                   	nop
 80505f9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8050600:	8b 43 08             	mov    0x8(%ebx),%eax
 8050603:	89 04 24             	mov    %eax,(%esp)
 8050606:	e8 49 94 ff ff       	call   8049a54 <free@plt>
 805060b:	8b 43 0c             	mov    0xc(%ebx),%eax
 805060e:	89 04 24             	mov    %eax,(%esp)
 8050611:	e8 6a ff ff ff       	call   8050580 <main+0x6960>
 8050616:	eb 93                	jmp    80505ab <main+0x698b>
 8050618:	90                   	nop
 8050619:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8050620:	55                   	push   %ebp
 8050621:	89 e5                	mov    %esp,%ebp
 8050623:	56                   	push   %esi
 8050624:	53                   	push   %ebx
 8050625:	83 ec 10             	sub    $0x10,%esp
 8050628:	8b 5d 08             	mov    0x8(%ebp),%ebx
 805062b:	85 db                	test   %ebx,%ebx
 805062d:	75 2d                	jne    805065c <main+0x6a3c>
 805062f:	e9 8c 00 00 00       	jmp    80506c0 <main+0x6aa0>
 8050634:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 805063a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 8050640:	8b 43 08             	mov    0x8(%ebx),%eax
 8050643:	89 04 24             	mov    %eax,(%esp)
 8050646:	e8 35 ff ff ff       	call   8050580 <main+0x6960>
 805064b:	8b 73 04             	mov    0x4(%ebx),%esi
 805064e:	89 1c 24             	mov    %ebx,(%esp)
 8050651:	e8 fe 93 ff ff       	call   8049a54 <free@plt>
 8050656:	85 f6                	test   %esi,%esi
 8050658:	89 f3                	mov    %esi,%ebx
 805065a:	74 64                	je     80506c0 <main+0x6aa0>
 805065c:	8b 03                	mov    (%ebx),%eax
 805065e:	83 f8 01             	cmp    $0x1,%eax
 8050661:	74 2d                	je     8050690 <main+0x6a70>
 8050663:	72 db                	jb     8050640 <main+0x6a20>
 8050665:	83 f8 02             	cmp    $0x2,%eax
 8050668:	75 e1                	jne    805064b <main+0x6a2b>
 805066a:	8b 43 08             	mov    0x8(%ebx),%eax
 805066d:	89 04 24             	mov    %eax,(%esp)
 8050670:	e8 0b ff ff ff       	call   8050580 <main+0x6960>
 8050675:	8b 43 0c             	mov    0xc(%ebx),%eax
 8050678:	89 04 24             	mov    %eax,(%esp)
 805067b:	e8 a0 ff ff ff       	call   8050620 <main+0x6a00>
 8050680:	8b 43 10             	mov    0x10(%ebx),%eax
 8050683:	89 04 24             	mov    %eax,(%esp)
 8050686:	e8 95 ff ff ff       	call   8050620 <main+0x6a00>
 805068b:	eb be                	jmp    805064b <main+0x6a2b>
 805068d:	8d 76 00             	lea    0x0(%esi),%esi
 8050690:	8b 43 08             	mov    0x8(%ebx),%eax
 8050693:	89 04 24             	mov    %eax,(%esp)
 8050696:	e8 e5 fe ff ff       	call   8050580 <main+0x6960>
 805069b:	8b 43 0c             	mov    0xc(%ebx),%eax
 805069e:	89 04 24             	mov    %eax,(%esp)
 80506a1:	e8 da fe ff ff       	call   8050580 <main+0x6960>
 80506a6:	8b 43 10             	mov    0x10(%ebx),%eax
 80506a9:	89 04 24             	mov    %eax,(%esp)
 80506ac:	e8 cf fe ff ff       	call   8050580 <main+0x6960>
 80506b1:	8b 43 14             	mov    0x14(%ebx),%eax
 80506b4:	89 04 24             	mov    %eax,(%esp)
 80506b7:	e8 64 ff ff ff       	call   8050620 <main+0x6a00>
 80506bc:	eb 8d                	jmp    805064b <main+0x6a2b>
 80506be:	66 90                	xchg   %ax,%ax
 80506c0:	83 c4 10             	add    $0x10,%esp
 80506c3:	5b                   	pop    %ebx
 80506c4:	5e                   	pop    %esi
 80506c5:	5d                   	pop    %ebp
 80506c6:	c3                   	ret    
 80506c7:	89 f6                	mov    %esi,%esi
 80506c9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 80506d0:	55                   	push   %ebp
 80506d1:	83 ea 04             	sub    $0x4,%edx
 80506d4:	89 e5                	mov    %esp,%ebp
 80506d6:	83 ec 18             	sub    $0x18,%esp
 80506d9:	83 fa 2f             	cmp    $0x2f,%edx
 80506dc:	77 1c                	ja     80506fa <main+0x6ada>
 80506de:	ff 24 95 58 5a 05 08 	jmp    *0x8055a58(,%edx,4)
 80506e5:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 80506e9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 80506f0:	8b 01                	mov    (%ecx),%eax
 80506f2:	89 04 24             	mov    %eax,(%esp)
 80506f5:	e8 86 fe ff ff       	call   8050580 <main+0x6960>
 80506fa:	c9                   	leave  
 80506fb:	c3                   	ret    
 80506fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8050700:	8b 01                	mov    (%ecx),%eax
 8050702:	89 04 24             	mov    %eax,(%esp)
 8050705:	e8 4a 93 ff ff       	call   8049a54 <free@plt>
 805070a:	c9                   	leave  
 805070b:	c3                   	ret    
 805070c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8050710:	8b 01                	mov    (%ecx),%eax
 8050712:	89 04 24             	mov    %eax,(%esp)
 8050715:	e8 06 ff ff ff       	call   8050620 <main+0x6a00>
 805071a:	c9                   	leave  
 805071b:	c3                   	ret    
 805071c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8050720:	55                   	push   %ebp
 8050721:	89 e5                	mov    %esp,%ebp
 8050723:	83 ec 28             	sub    $0x28,%esp
 8050726:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 805072d:	00 
 805072e:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8050731:	89 c3                	mov    %eax,%ebx
 8050733:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8050736:	89 d6                	mov    %edx,%esi
 8050738:	89 7d fc             	mov    %edi,-0x4(%ebp)
 805073b:	89 cf                	mov    %ecx,%edi
 805073d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8050744:	e8 1b 8f ff ff       	call   8049664 <calloc@plt>
 8050749:	85 c0                	test   %eax,%eax
 805074b:	74 0f                	je     805075c <main+0x6b3c>
 805074d:	c7 00 04 00 00 00    	movl   $0x4,(%eax)
 8050753:	89 58 08             	mov    %ebx,0x8(%eax)
 8050756:	89 70 0c             	mov    %esi,0xc(%eax)
 8050759:	89 78 10             	mov    %edi,0x10(%eax)
 805075c:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 805075f:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8050762:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8050765:	89 ec                	mov    %ebp,%esp
 8050767:	5d                   	pop    %ebp
 8050768:	c3                   	ret    
 8050769:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8050770:	55                   	push   %ebp
 8050771:	89 e5                	mov    %esp,%ebp
 8050773:	83 ec 18             	sub    $0x18,%esp
 8050776:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 805077d:	00 
 805077e:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8050781:	89 c3                	mov    %eax,%ebx
 8050783:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8050786:	89 d6                	mov    %edx,%esi
 8050788:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 805078f:	e8 d0 8e ff ff       	call   8049664 <calloc@plt>
 8050794:	85 c0                	test   %eax,%eax
 8050796:	74 0c                	je     80507a4 <main+0x6b84>
 8050798:	c7 00 05 00 00 00    	movl   $0x5,(%eax)
 805079e:	89 58 08             	mov    %ebx,0x8(%eax)
 80507a1:	89 70 0c             	mov    %esi,0xc(%eax)
 80507a4:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 80507a7:	8b 75 fc             	mov    -0x4(%ebp),%esi
 80507aa:	89 ec                	mov    %ebp,%esp
 80507ac:	5d                   	pop    %ebp
 80507ad:	c3                   	ret    
 80507ae:	66 90                	xchg   %ax,%ax
 80507b0:	55                   	push   %ebp
 80507b1:	89 e5                	mov    %esp,%ebp
 80507b3:	83 ec 38             	sub    $0x38,%esp
 80507b6:	c7 04 24 ee 4d 05 08 	movl   $0x8054dee,(%esp)
 80507bd:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 80507c0:	89 c3                	mov    %eax,%ebx
 80507c2:	89 7d fc             	mov    %edi,-0x4(%ebp)
 80507c5:	89 75 f8             	mov    %esi,-0x8(%ebp)
 80507c8:	e8 37 90 ff ff       	call   8049804 <strdup@plt>
 80507cd:	85 c0                	test   %eax,%eax
 80507cf:	89 c7                	mov    %eax,%edi
 80507d1:	0f 84 83 00 00 00    	je     805085a <main+0x6c3a>
 80507d7:	85 db                	test   %ebx,%ebx
 80507d9:	74 7f                	je     805085a <main+0x6c3a>
 80507db:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 80507e2:	00 
 80507e3:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80507ea:	e8 75 8e ff ff       	call   8049664 <calloc@plt>
 80507ef:	85 c0                	test   %eax,%eax
 80507f1:	89 c6                	mov    %eax,%esi
 80507f3:	74 65                	je     805085a <main+0x6c3a>
 80507f5:	89 58 08             	mov    %ebx,0x8(%eax)
 80507f8:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 80507fe:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 8050805:	00 
 8050806:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 805080d:	e8 52 8e ff ff       	call   8049664 <calloc@plt>
 8050812:	85 c0                	test   %eax,%eax
 8050814:	89 c3                	mov    %eax,%ebx
 8050816:	74 48                	je     8050860 <main+0x6c40>
 8050818:	89 70 0c             	mov    %esi,0xc(%eax)
 805081b:	89 de                	mov    %ebx,%esi
 805081d:	89 78 08             	mov    %edi,0x8(%eax)
 8050820:	c7 00 03 00 00 00    	movl   $0x3,(%eax)
 8050826:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8050829:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 8050830:	00 
 8050831:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8050838:	e8 27 8e ff ff       	call   8049664 <calloc@plt>
 805083d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8050840:	85 c0                	test   %eax,%eax
 8050842:	74 1c                	je     8050860 <main+0x6c40>
 8050844:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 805084a:	89 50 08             	mov    %edx,0x8(%eax)
 805084d:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8050850:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8050853:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8050856:	89 ec                	mov    %ebp,%esp
 8050858:	5d                   	pop    %ebp
 8050859:	c3                   	ret    
 805085a:	31 db                	xor    %ebx,%ebx
 805085c:	31 f6                	xor    %esi,%esi
 805085e:	66 90                	xchg   %ax,%ax
 8050860:	89 3c 24             	mov    %edi,(%esp)
 8050863:	e8 ec 91 ff ff       	call   8049a54 <free@plt>
 8050868:	89 34 24             	mov    %esi,(%esp)
 805086b:	e8 10 fd ff ff       	call   8050580 <main+0x6960>
 8050870:	89 1c 24             	mov    %ebx,(%esp)
 8050873:	e8 08 fd ff ff       	call   8050580 <main+0x6960>
 8050878:	31 c0                	xor    %eax,%eax
 805087a:	eb d1                	jmp    805084d <main+0x6c2d>
 805087c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8050880:	55                   	push   %ebp
 8050881:	89 e5                	mov    %esp,%ebp
 8050883:	56                   	push   %esi
 8050884:	89 c6                	mov    %eax,%esi
 8050886:	53                   	push   %ebx
 8050887:	83 ec 10             	sub    $0x10,%esp
 805088a:	89 04 24             	mov    %eax,(%esp)
 805088d:	e8 32 91 ff ff       	call   80499c4 <strlen@plt>
 8050892:	83 c0 0b             	add    $0xb,%eax
 8050895:	89 04 24             	mov    %eax,(%esp)
 8050898:	e8 17 8d ff ff       	call   80495b4 <malloc@plt>
 805089d:	85 c0                	test   %eax,%eax
 805089f:	89 c3                	mov    %eax,%ebx
 80508a1:	74 31                	je     80508d4 <main+0x6cb4>
 80508a3:	89 74 24 08          	mov    %esi,0x8(%esp)
 80508a7:	c7 44 24 04 6a 4d 05 	movl   $0x8054d6a,0x4(%esp)
 80508ae:	08 
 80508af:	89 04 24             	mov    %eax,(%esp)
 80508b2:	e8 4d 90 ff ff       	call   8049904 <sprintf@plt>
 80508b7:	89 d8                	mov    %ebx,%eax
 80508b9:	e8 f2 fe ff ff       	call   80507b0 <main+0x6b90>
 80508be:	85 c0                	test   %eax,%eax
 80508c0:	74 3e                	je     8050900 <main+0x6ce0>
 80508c2:	8b 15 48 8e 05 08    	mov    0x8058e48,%edx
 80508c8:	85 d2                	test   %edx,%edx
 80508ca:	74 14                	je     80508e0 <main+0x6cc0>
 80508cc:	89 42 04             	mov    %eax,0x4(%edx)
 80508cf:	a3 48 8e 05 08       	mov    %eax,0x8058e48
 80508d4:	83 c4 10             	add    $0x10,%esp
 80508d7:	5b                   	pop    %ebx
 80508d8:	5e                   	pop    %esi
 80508d9:	5d                   	pop    %ebp
 80508da:	c3                   	ret    
 80508db:	90                   	nop
 80508dc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 80508e0:	a3 48 8e 05 08       	mov    %eax,0x8058e48
 80508e5:	a3 4c 8e 05 08       	mov    %eax,0x8058e4c
 80508ea:	83 c4 10             	add    $0x10,%esp
 80508ed:	5b                   	pop    %ebx
 80508ee:	5e                   	pop    %esi
 80508ef:	5d                   	pop    %ebp
 80508f0:	c3                   	ret    
 80508f1:	eb 0d                	jmp    8050900 <main+0x6ce0>
 80508f3:	90                   	nop
 80508f4:	90                   	nop
 80508f5:	90                   	nop
 80508f6:	90                   	nop
 80508f7:	90                   	nop
 80508f8:	90                   	nop
 80508f9:	90                   	nop
 80508fa:	90                   	nop
 80508fb:	90                   	nop
 80508fc:	90                   	nop
 80508fd:	90                   	nop
 80508fe:	90                   	nop
 80508ff:	90                   	nop
 8050900:	89 1c 24             	mov    %ebx,(%esp)
 8050903:	e8 4c 91 ff ff       	call   8049a54 <free@plt>
 8050908:	eb ca                	jmp    80508d4 <main+0x6cb4>
 805090a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8050910:	55                   	push   %ebp
 8050911:	89 e5                	mov    %esp,%ebp
 8050913:	57                   	push   %edi
 8050914:	56                   	push   %esi
 8050915:	31 f6                	xor    %esi,%esi
 8050917:	8d 8d 58 fe ff ff    	lea    -0x1a8(%ebp),%ecx
 805091d:	53                   	push   %ebx
 805091e:	89 cb                	mov    %ecx,%ebx
 8050920:	8d 85 38 fb ff ff    	lea    -0x4c8(%ebp),%eax
 8050926:	81 ec 1c 05 00 00    	sub    $0x51c,%esp
 805092c:	89 c2                	mov    %eax,%edx
 805092e:	c7 05 68 8e 05 08 00 	movl   $0x0,0x8058e68
 8050935:	00 00 00 
 8050938:	c7 05 70 8e 05 08 fe 	movl   $0xfffffffe,0x8058e70
 805093f:	ff ff ff 
 8050942:	c7 85 1c fb ff ff 00 	movl   $0x0,-0x4e4(%ebp)
 8050949:	00 00 00 
 805094c:	c7 85 34 fb ff ff c8 	movl   $0xc8,-0x4cc(%ebp)
 8050953:	00 00 00 
 8050956:	89 85 28 fb ff ff    	mov    %eax,-0x4d8(%ebp)
 805095c:	89 8d f4 fa ff ff    	mov    %ecx,-0x50c(%ebp)
 8050962:	89 8d 30 fb ff ff    	mov    %ecx,-0x4d0(%ebp)
 8050968:	c7 85 18 fb ff ff 00 	movl   $0x0,-0x4e8(%ebp)
 805096f:	00 00 00 
 8050972:	c7 85 20 fb ff ff c7 	movl   $0xc7,-0x4e0(%ebp)
 8050979:	00 00 00 
 805097c:	8b 8d 20 fb ff ff    	mov    -0x4e0(%ebp),%ecx
 8050982:	8b bd 30 fb ff ff    	mov    -0x4d0(%ebp),%edi
 8050988:	66 89 33             	mov    %si,(%ebx)
 805098b:	89 95 24 fb ff ff    	mov    %edx,-0x4dc(%ebp)
 8050991:	8d 04 4f             	lea    (%edi,%ecx,2),%eax
 8050994:	39 c3                	cmp    %eax,%ebx
 8050996:	0f 82 09 01 00 00    	jb     8050aa5 <main+0x6e85>
 805099c:	81 bd 34 fb ff ff 0f 	cmpl   $0x270f,-0x4cc(%ebp)
 80509a3:	27 00 00 
 80509a6:	0f 87 70 0d 00 00    	ja     805171c <main+0x7afc>
 80509ac:	d1 a5 34 fb ff ff    	shll   -0x4cc(%ebp)
 80509b2:	81 bd 34 fb ff ff 10 	cmpl   $0x2710,-0x4cc(%ebp)
 80509b9:	27 00 00 
 80509bc:	76 0a                	jbe    80509c8 <main+0x6da8>
 80509be:	c7 85 34 fb ff ff 10 	movl   $0x2710,-0x4cc(%ebp)
 80509c5:	27 00 00 
 80509c8:	8b 85 34 fb ff ff    	mov    -0x4cc(%ebp),%eax
 80509ce:	89 95 04 fb ff ff    	mov    %edx,-0x4fc(%ebp)
 80509d4:	01 c0                	add    %eax,%eax
 80509d6:	89 85 2c fb ff ff    	mov    %eax,-0x4d4(%ebp)
 80509dc:	03 85 34 fb ff ff    	add    -0x4cc(%ebp),%eax
 80509e2:	8d 44 00 03          	lea    0x3(%eax,%eax,1),%eax
 80509e6:	89 04 24             	mov    %eax,(%esp)
 80509e9:	e8 c6 8b ff ff       	call   80495b4 <malloc@plt>
 80509ee:	85 c0                	test   %eax,%eax
 80509f0:	89 c7                	mov    %eax,%edi
 80509f2:	0f 84 24 0d 00 00    	je     805171c <main+0x7afc>
 80509f8:	2b 9d 30 fb ff ff    	sub    -0x4d0(%ebp),%ebx
 80509fe:	8b 8d 30 fb ff ff    	mov    -0x4d0(%ebp),%ecx
 8050a04:	89 3c 24             	mov    %edi,(%esp)
 8050a07:	d1 fb                	sar    %ebx
 8050a09:	83 c3 01             	add    $0x1,%ebx
 8050a0c:	8d 04 1b             	lea    (%ebx,%ebx,1),%eax
 8050a0f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8050a13:	89 44 24 08          	mov    %eax,0x8(%esp)
 8050a17:	e8 58 8b ff ff       	call   8049574 <memcpy@plt>
 8050a1c:	8b 85 2c fb ff ff    	mov    -0x4d4(%ebp),%eax
 8050a22:	8b 95 04 fb ff ff    	mov    -0x4fc(%ebp),%edx
 8050a28:	83 c0 03             	add    $0x3,%eax
 8050a2b:	83 e0 fc             	and    $0xfffffffc,%eax
 8050a2e:	8d 04 07             	lea    (%edi,%eax,1),%eax
 8050a31:	89 85 24 fb ff ff    	mov    %eax,-0x4dc(%ebp)
 8050a37:	8d 04 9d 00 00 00 00 	lea    0x0(,%ebx,4),%eax
 8050a3e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8050a42:	8b 85 24 fb ff ff    	mov    -0x4dc(%ebp),%eax
 8050a48:	89 54 24 04          	mov    %edx,0x4(%esp)
 8050a4c:	89 04 24             	mov    %eax,(%esp)
 8050a4f:	e8 20 8b ff ff       	call   8049574 <memcpy@plt>
 8050a54:	8b 95 f4 fa ff ff    	mov    -0x50c(%ebp),%edx
 8050a5a:	39 95 30 fb ff ff    	cmp    %edx,-0x4d0(%ebp)
 8050a60:	74 0e                	je     8050a70 <main+0x6e50>
 8050a62:	8b 8d 30 fb ff ff    	mov    -0x4d0(%ebp),%ecx
 8050a68:	89 0c 24             	mov    %ecx,(%esp)
 8050a6b:	e8 e4 8f ff ff       	call   8049a54 <free@plt>
 8050a70:	8b 95 24 fb ff ff    	mov    -0x4dc(%ebp),%edx
 8050a76:	8d 43 ff             	lea    -0x1(%ebx),%eax
 8050a79:	8b 8d 34 fb ff ff    	mov    -0x4cc(%ebp),%ecx
 8050a7f:	8d 1c 47             	lea    (%edi,%eax,2),%ebx
 8050a82:	8d 04 82             	lea    (%edx,%eax,4),%eax
 8050a85:	83 e9 01             	sub    $0x1,%ecx
 8050a88:	89 85 28 fb ff ff    	mov    %eax,-0x4d8(%ebp)
 8050a8e:	8d 04 4f             	lea    (%edi,%ecx,2),%eax
 8050a91:	39 c3                	cmp    %eax,%ebx
 8050a93:	89 8d 20 fb ff ff    	mov    %ecx,-0x4e0(%ebp)
 8050a99:	0f 83 c2 0c 00 00    	jae    8051761 <main+0x7b41>
 8050a9f:	89 bd 30 fb ff ff    	mov    %edi,-0x4d0(%ebp)
 8050aa5:	83 fe 02             	cmp    $0x2,%esi
 8050aa8:	0f 84 95 0c 00 00    	je     8051743 <main+0x7b23>
 8050aae:	0f bf bc 36 e0 5b 05 	movswl 0x8055be0(%esi,%esi,1),%edi
 8050ab5:	08 
 8050ab6:	83 ff b4             	cmp    $0xffffffb4,%edi
 8050ab9:	74 4e                	je     8050b09 <main+0x6ee9>
 8050abb:	a1 70 8e 05 08       	mov    0x8058e70,%eax
 8050ac0:	83 f8 fe             	cmp    $0xfffffffe,%eax
 8050ac3:	0f 84 47 03 00 00    	je     8050e10 <main+0x71f0>
 8050ac9:	85 c0                	test   %eax,%eax
 8050acb:	0f 8e ef 02 00 00    	jle    8050dc0 <main+0x71a0>
 8050ad1:	3d 16 01 00 00       	cmp    $0x116,%eax
 8050ad6:	ba 02 00 00 00       	mov    $0x2,%edx
 8050adb:	77 07                	ja     8050ae4 <main+0x6ec4>
 8050add:	0f b6 90 c0 5c 05 08 	movzbl 0x8055cc0(%eax),%edx
 8050ae4:	8d 04 3a             	lea    (%edx,%edi,1),%eax
 8050ae7:	3d 76 01 00 00       	cmp    $0x176,%eax
 8050aec:	77 15                	ja     8050b03 <main+0x6ee3>
 8050aee:	0f be 88 e0 5d 05 08 	movsbl 0x8055de0(%eax),%ecx
 8050af5:	39 d1                	cmp    %edx,%ecx
 8050af7:	89 8d 1c fb ff ff    	mov    %ecx,-0x4e4(%ebp)
 8050afd:	0f 84 ad 00 00 00    	je     8050bb0 <main+0x6f90>
 8050b03:	89 95 1c fb ff ff    	mov    %edx,-0x4e4(%ebp)
 8050b09:	0f b6 86 e0 60 05 08 	movzbl 0x80560e0(%esi),%eax
 8050b10:	85 c0                	test   %eax,%eax
 8050b12:	89 85 2c fb ff ff    	mov    %eax,-0x4d4(%ebp)
 8050b18:	0f 84 b2 00 00 00    	je     8050bd0 <main+0x6fb0>
 8050b1e:	8b 95 2c fb ff ff    	mov    -0x4d4(%ebp),%edx
 8050b24:	b8 01 00 00 00       	mov    $0x1,%eax
 8050b29:	8b 8d 28 fb ff ff    	mov    -0x4d8(%ebp),%ecx
 8050b2f:	0f b6 ba 60 61 05 08 	movzbl 0x8056160(%edx),%edi
 8050b36:	29 f8                	sub    %edi,%eax
 8050b38:	8b 34 81             	mov    (%ecx,%eax,4),%esi
 8050b3b:	89 d0                	mov    %edx,%eax
 8050b3d:	83 e8 03             	sub    $0x3,%eax
 8050b40:	83 f8 31             	cmp    $0x31,%eax
 8050b43:	0f 86 f7 01 00 00    	jbe    8050d40 <main+0x7120>
 8050b49:	8b 95 28 fb ff ff    	mov    -0x4d8(%ebp),%edx
 8050b4f:	8d 04 bd 00 00 00 00 	lea    0x0(,%edi,4),%eax
 8050b56:	29 c2                	sub    %eax,%edx
 8050b58:	89 d0                	mov    %edx,%eax
 8050b5a:	8d 14 3f             	lea    (%edi,%edi,1),%edx
 8050b5d:	8b bd 2c fb ff ff    	mov    -0x4d4(%ebp),%edi
 8050b63:	8d 48 04             	lea    0x4(%eax),%ecx
 8050b66:	29 d3                	sub    %edx,%ebx
 8050b68:	89 70 04             	mov    %esi,0x4(%eax)
 8050b6b:	0f b7 33             	movzwl (%ebx),%esi
 8050b6e:	89 8d 28 fb ff ff    	mov    %ecx,-0x4d8(%ebp)
 8050b74:	0f b6 87 a0 61 05 08 	movzbl 0x80561a0(%edi),%eax
 8050b7b:	0f bf ce             	movswl %si,%ecx
 8050b7e:	83 e8 2b             	sub    $0x2b,%eax
 8050b81:	0f be 90 d5 61 05 08 	movsbl 0x80561d5(%eax),%edx
 8050b88:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8050b8b:	81 fa 76 01 00 00    	cmp    $0x176,%edx
 8050b91:	0f 86 b9 01 00 00    	jbe    8050d50 <main+0x7130>
 8050b97:	0f be b0 de 61 05 08 	movsbl 0x80561de(%eax),%esi
 8050b9e:	83 c3 02             	add    $0x2,%ebx
 8050ba1:	8b 95 24 fb ff ff    	mov    -0x4dc(%ebp),%edx
 8050ba7:	e9 d0 fd ff ff       	jmp    805097c <main+0x6d5c>
 8050bac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8050bb0:	0f be 80 60 5f 05 08 	movsbl 0x8055f60(%eax),%eax
 8050bb7:	85 c0                	test   %eax,%eax
 8050bb9:	0f 8f 60 02 00 00    	jg     8050e1f <main+0x71ff>
 8050bbf:	83 f8 f7             	cmp    $0xfffffff7,%eax
 8050bc2:	0f 85 bf 02 00 00    	jne    8050e87 <main+0x7267>
 8050bc8:	90                   	nop
 8050bc9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8050bd0:	8b 85 18 fb ff ff    	mov    -0x4e8(%ebp),%eax
 8050bd6:	85 c0                	test   %eax,%eax
 8050bd8:	0f 84 02 02 00 00    	je     8050de0 <main+0x71c0>
 8050bde:	83 bd 18 fb ff ff 03 	cmpl   $0x3,-0x4e8(%ebp)
 8050be5:	0f 84 85 01 00 00    	je     8050d70 <main+0x7150>
 8050beb:	89 f2                	mov    %esi,%edx
 8050bed:	89 f8                	mov    %edi,%eax
 8050bef:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 8050bf5:	8b bd 30 fb ff ff    	mov    -0x4d0(%ebp),%edi
 8050bfb:	eb 2b                	jmp    8050c28 <main+0x7008>
 8050bfd:	8d 76 00             	lea    0x0(%esi),%esi
 8050c00:	39 fb                	cmp    %edi,%ebx
 8050c02:	74 7c                	je     8050c80 <main+0x7060>
 8050c04:	0f b6 92 00 62 05 08 	movzbl 0x8056200(%edx),%edx
 8050c0b:	89 f1                	mov    %esi,%ecx
 8050c0d:	b8 83 62 05 08       	mov    $0x8056283,%eax
 8050c12:	83 eb 02             	sub    $0x2,%ebx
 8050c15:	83 ee 04             	sub    $0x4,%esi
 8050c18:	e8 b3 fa ff ff       	call   80506d0 <main+0x6ab0>
 8050c1d:	0f bf 13             	movswl (%ebx),%edx
 8050c20:	0f bf 84 12 e0 5b 05 	movswl 0x8055be0(%edx,%edx,1),%eax
 8050c27:	08 
 8050c28:	83 f8 b4             	cmp    $0xffffffb4,%eax
 8050c2b:	74 d3                	je     8050c00 <main+0x6fe0>
 8050c2d:	83 c0 01             	add    $0x1,%eax
 8050c30:	3d 76 01 00 00       	cmp    $0x176,%eax
 8050c35:	77 c9                	ja     8050c00 <main+0x6fe0>
 8050c37:	80 b8 e0 5d 05 08 01 	cmpb   $0x1,0x8055de0(%eax)
 8050c3e:	75 c0                	jne    8050c00 <main+0x6fe0>
 8050c40:	0f be 80 60 5f 05 08 	movsbl 0x8055f60(%eax),%eax
 8050c47:	85 c0                	test   %eax,%eax
 8050c49:	7e b5                	jle    8050c00 <main+0x6fe0>
 8050c4b:	89 b5 28 fb ff ff    	mov    %esi,-0x4d8(%ebp)
 8050c51:	8b 15 6c 8e 05 08    	mov    0x8058e6c,%edx
 8050c57:	89 c6                	mov    %eax,%esi
 8050c59:	83 85 28 fb ff ff 04 	addl   $0x4,-0x4d8(%ebp)
 8050c60:	8b 8d 28 fb ff ff    	mov    -0x4d8(%ebp),%ecx
 8050c66:	c7 85 18 fb ff ff 03 	movl   $0x3,-0x4e8(%ebp)
 8050c6d:	00 00 00 
 8050c70:	89 11                	mov    %edx,(%ecx)
 8050c72:	e9 27 ff ff ff       	jmp    8050b9e <main+0x6f7e>
 8050c77:	89 f6                	mov    %esi,%esi
 8050c79:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8050c80:	89 b5 28 fb ff ff    	mov    %esi,-0x4d8(%ebp)
 8050c86:	31 ff                	xor    %edi,%edi
 8050c88:	31 f6                	xor    %esi,%esi
 8050c8a:	c7 85 34 fb ff ff 00 	movl   $0x0,-0x4cc(%ebp)
 8050c91:	00 00 00 
 8050c94:	c7 85 2c fb ff ff 01 	movl   $0x1,-0x4d4(%ebp)
 8050c9b:	00 00 00 
 8050c9e:	83 3d 70 8e 05 08 fe 	cmpl   $0xfffffffe,0x8058e70
 8050ca5:	74 29                	je     8050cd0 <main+0x70b0>
 8050ca7:	8d 3c b5 00 00 00 00 	lea    0x0(,%esi,4),%edi
 8050cae:	f7 df                	neg    %edi
 8050cb0:	89 bd 34 fb ff ff    	mov    %edi,-0x4cc(%ebp)
 8050cb6:	8d 3c 36             	lea    (%esi,%esi,1),%edi
 8050cb9:	f7 df                	neg    %edi
 8050cbb:	8b 95 1c fb ff ff    	mov    -0x4e4(%ebp),%edx
 8050cc1:	b9 6c 8e 05 08       	mov    $0x8058e6c,%ecx
 8050cc6:	b8 a3 62 05 08       	mov    $0x80562a3,%eax
 8050ccb:	e8 00 fa ff ff       	call   80506d0 <main+0x6ab0>
 8050cd0:	01 fb                	add    %edi,%ebx
 8050cd2:	39 9d 30 fb ff ff    	cmp    %ebx,-0x4d0(%ebp)
 8050cd8:	74 36                	je     8050d10 <main+0x70f0>
 8050cda:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 8050ce0:	8b bd 30 fb ff ff    	mov    -0x4d0(%ebp),%edi
 8050ce6:	03 b5 34 fb ff ff    	add    -0x4cc(%ebp),%esi
 8050cec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8050cf0:	0f bf 03             	movswl (%ebx),%eax
 8050cf3:	89 f1                	mov    %esi,%ecx
 8050cf5:	83 eb 02             	sub    $0x2,%ebx
 8050cf8:	83 ee 04             	sub    $0x4,%esi
 8050cfb:	0f b6 90 00 62 05 08 	movzbl 0x8056200(%eax),%edx
 8050d02:	b8 c1 62 05 08       	mov    $0x80562c1,%eax
 8050d07:	e8 c4 f9 ff ff       	call   80506d0 <main+0x6ab0>
 8050d0c:	39 df                	cmp    %ebx,%edi
 8050d0e:	75 e0                	jne    8050cf0 <main+0x70d0>
 8050d10:	8b 85 f4 fa ff ff    	mov    -0x50c(%ebp),%eax
 8050d16:	39 85 30 fb ff ff    	cmp    %eax,-0x4d0(%ebp)
 8050d1c:	74 0e                	je     8050d2c <main+0x710c>
 8050d1e:	8b 95 30 fb ff ff    	mov    -0x4d0(%ebp),%edx
 8050d24:	89 14 24             	mov    %edx,(%esp)
 8050d27:	e8 28 8d ff ff       	call   8049a54 <free@plt>
 8050d2c:	8b 85 2c fb ff ff    	mov    -0x4d4(%ebp),%eax
 8050d32:	81 c4 1c 05 00 00    	add    $0x51c,%esp
 8050d38:	5b                   	pop    %ebx
 8050d39:	5e                   	pop    %esi
 8050d3a:	5f                   	pop    %edi
 8050d3b:	5d                   	pop    %ebp
 8050d3c:	c3                   	ret    
 8050d3d:	8d 76 00             	lea    0x0(%esi),%esi
 8050d40:	ff 24 85 18 5b 05 08 	jmp    *0x8055b18(,%eax,4)
 8050d47:	89 f6                	mov    %esi,%esi
 8050d49:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8050d50:	66 0f be 8a e0 5d 05 	movsbw 0x8055de0(%edx),%cx
 8050d57:	08 
 8050d58:	66 39 ce             	cmp    %cx,%si
 8050d5b:	0f 85 36 fe ff ff    	jne    8050b97 <main+0x6f77>
 8050d61:	0f be b2 60 5f 05 08 	movsbl 0x8055f60(%edx),%esi
 8050d68:	e9 31 fe ff ff       	jmp    8050b9e <main+0x6f7e>
 8050d6d:	8d 76 00             	lea    0x0(%esi),%esi
 8050d70:	83 3d 70 8e 05 08 00 	cmpl   $0x0,0x8058e70
 8050d77:	0f 8e d6 00 00 00    	jle    8050e53 <main+0x7233>
 8050d7d:	8b 95 1c fb ff ff    	mov    -0x4e4(%ebp),%edx
 8050d83:	b8 71 62 05 08       	mov    $0x8056271,%eax
 8050d88:	b9 6c 8e 05 08       	mov    $0x8058e6c,%ecx
 8050d8d:	e8 3e f9 ff ff       	call   80506d0 <main+0x6ab0>
 8050d92:	89 f2                	mov    %esi,%edx
 8050d94:	89 f8                	mov    %edi,%eax
 8050d96:	c7 05 70 8e 05 08 fe 	movl   $0xfffffffe,0x8058e70
 8050d9d:	ff ff ff 
 8050da0:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 8050da6:	8b bd 30 fb ff ff    	mov    -0x4d0(%ebp),%edi
 8050dac:	e9 77 fe ff ff       	jmp    8050c28 <main+0x7008>
 8050db1:	eb 0d                	jmp    8050dc0 <main+0x71a0>
 8050db3:	90                   	nop
 8050db4:	90                   	nop
 8050db5:	90                   	nop
 8050db6:	90                   	nop
 8050db7:	90                   	nop
 8050db8:	90                   	nop
 8050db9:	90                   	nop
 8050dba:	90                   	nop
 8050dbb:	90                   	nop
 8050dbc:	90                   	nop
 8050dbd:	90                   	nop
 8050dbe:	90                   	nop
 8050dbf:	90                   	nop
 8050dc0:	c7 05 70 8e 05 08 00 	movl   $0x0,0x8058e70
 8050dc7:	00 00 00 
 8050dca:	31 d2                	xor    %edx,%edx
 8050dcc:	e9 13 fd ff ff       	jmp    8050ae4 <main+0x6ec4>
 8050dd1:	eb 0d                	jmp    8050de0 <main+0x71c0>
 8050dd3:	90                   	nop
 8050dd4:	90                   	nop
 8050dd5:	90                   	nop
 8050dd6:	90                   	nop
 8050dd7:	90                   	nop
 8050dd8:	90                   	nop
 8050dd9:	90                   	nop
 8050dda:	90                   	nop
 8050ddb:	90                   	nop
 8050ddc:	90                   	nop
 8050ddd:	90                   	nop
 8050dde:	90                   	nop
 8050ddf:	90                   	nop
 8050de0:	b8 64 62 05 08       	mov    $0x8056264,%eax
 8050de5:	83 05 68 8e 05 08 01 	addl   $0x1,0x8058e68
 8050dec:	e8 8f fa ff ff       	call   8050880 <main+0x6c60>
 8050df1:	89 f2                	mov    %esi,%edx
 8050df3:	89 f8                	mov    %edi,%eax
 8050df5:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 8050dfb:	8b bd 30 fb ff ff    	mov    -0x4d0(%ebp),%edi
 8050e01:	e9 22 fe ff ff       	jmp    8050c28 <main+0x7008>
 8050e06:	8d 76 00             	lea    0x0(%esi),%esi
 8050e09:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8050e10:	e8 db ea ff ff       	call   804f8f0 <main+0x5cd0>
 8050e15:	a3 70 8e 05 08       	mov    %eax,0x8058e70
 8050e1a:	e9 aa fc ff ff       	jmp    8050ac9 <main+0x6ea9>
 8050e1f:	83 bd 18 fb ff ff 01 	cmpl   $0x1,-0x4e8(%ebp)
 8050e26:	89 c6                	mov    %eax,%esi
 8050e28:	83 95 18 fb ff ff ff 	adcl   $0xffffffff,-0x4e8(%ebp)
 8050e2f:	83 85 28 fb ff ff 04 	addl   $0x4,-0x4d8(%ebp)
 8050e36:	8b 15 6c 8e 05 08    	mov    0x8058e6c,%edx
 8050e3c:	8b bd 28 fb ff ff    	mov    -0x4d8(%ebp),%edi
 8050e42:	c7 05 70 8e 05 08 fe 	movl   $0xfffffffe,0x8058e70
 8050e49:	ff ff ff 
 8050e4c:	89 17                	mov    %edx,(%edi)
 8050e4e:	e9 4b fd ff ff       	jmp    8050b9e <main+0x6f7e>
 8050e53:	0f 85 92 fd ff ff    	jne    8050beb <main+0x6fcb>
 8050e59:	31 ff                	xor    %edi,%edi
 8050e5b:	c7 85 34 fb ff ff 00 	movl   $0x0,-0x4cc(%ebp)
 8050e62:	00 00 00 
 8050e65:	c7 85 2c fb ff ff 01 	movl   $0x1,-0x4d4(%ebp)
 8050e6c:	00 00 00 
 8050e6f:	e9 47 fe ff ff       	jmp    8050cbb <main+0x709b>
 8050e74:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8050e7a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 8050e80:	31 f6                	xor    %esi,%esi
 8050e82:	e9 c2 fc ff ff       	jmp    8050b49 <main+0x6f29>
 8050e87:	85 c0                	test   %eax,%eax
 8050e89:	0f 84 41 fd ff ff    	je     8050bd0 <main+0x6fb0>
 8050e8f:	f7 d8                	neg    %eax
 8050e91:	89 85 2c fb ff ff    	mov    %eax,-0x4d4(%ebp)
 8050e97:	e9 82 fc ff ff       	jmp    8050b1e <main+0x6efe>
 8050e9c:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 8050ea2:	8b 70 fc             	mov    -0x4(%eax),%esi
 8050ea5:	e9 9f fc ff ff       	jmp    8050b49 <main+0x6f29>
 8050eaa:	8b 95 28 fb ff ff    	mov    -0x4d8(%ebp),%edx
 8050eb0:	8b 0a                	mov    (%edx),%ecx
 8050eb2:	89 d6                	mov    %edx,%esi
 8050eb4:	8b 52 f8             	mov    -0x8(%edx),%edx
 8050eb7:	83 ee 08             	sub    $0x8,%esi
 8050eba:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 8050ec1:	00 
 8050ec2:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8050ec9:	89 8d 00 fb ff ff    	mov    %ecx,-0x500(%ebp)
 8050ecf:	89 95 04 fb ff ff    	mov    %edx,-0x4fc(%ebp)
 8050ed5:	e8 8a 87 ff ff       	call   8049664 <calloc@plt>
 8050eda:	8b 95 04 fb ff ff    	mov    -0x4fc(%ebp),%edx
 8050ee0:	8b 8d 00 fb ff ff    	mov    -0x500(%ebp),%ecx
 8050ee6:	85 c0                	test   %eax,%eax
 8050ee8:	0f 84 96 08 00 00    	je     8051784 <main+0x7b64>
 8050eee:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8050ef4:	89 c6                	mov    %eax,%esi
 8050ef6:	89 50 08             	mov    %edx,0x8(%eax)
 8050ef9:	89 48 0c             	mov    %ecx,0xc(%eax)
 8050efc:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 8050f03:	e9 41 fc ff ff       	jmp    8050b49 <main+0x6f29>
 8050f08:	31 f6                	xor    %esi,%esi
 8050f0a:	c7 85 18 fb ff ff 00 	movl   $0x0,-0x4e8(%ebp)
 8050f11:	00 00 00 
 8050f14:	e9 30 fc ff ff       	jmp    8050b49 <main+0x6f29>
 8050f19:	8b 8d 28 fb ff ff    	mov    -0x4d8(%ebp),%ecx
 8050f1f:	8b 31                	mov    (%ecx),%esi
 8050f21:	85 f6                	test   %esi,%esi
 8050f23:	0f 84 aa 08 00 00    	je     80517d3 <main+0x7bb3>
 8050f29:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 8050f30:	00 
 8050f31:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8050f38:	e8 27 87 ff ff       	call   8049664 <calloc@plt>
 8050f3d:	85 c0                	test   %eax,%eax
 8050f3f:	0f 84 88 09 00 00    	je     80518cd <main+0x7cad>
 8050f45:	89 70 08             	mov    %esi,0x8(%eax)
 8050f48:	89 c6                	mov    %eax,%esi
 8050f4a:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8050f50:	e9 f4 fb ff ff       	jmp    8050b49 <main+0x6f29>
 8050f55:	8b 95 28 fb ff ff    	mov    -0x4d8(%ebp),%edx
 8050f5b:	8b 32                	mov    (%edx),%esi
 8050f5d:	85 f6                	test   %esi,%esi
 8050f5f:	0f 84 65 08 00 00    	je     80517ca <main+0x7baa>
 8050f65:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 8050f6c:	00 
 8050f6d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8050f74:	e8 eb 86 ff ff       	call   8049664 <calloc@plt>
 8050f79:	85 c0                	test   %eax,%eax
 8050f7b:	0f 84 8e 03 00 00    	je     805130f <main+0x76ef>
 8050f81:	89 70 08             	mov    %esi,0x8(%eax)
 8050f84:	89 c6                	mov    %eax,%esi
 8050f86:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8050f8c:	e9 b8 fb ff ff       	jmp    8050b49 <main+0x6f29>
 8050f91:	89 fe                	mov    %edi,%esi
 8050f93:	8d 3c b5 00 00 00 00 	lea    0x0(,%esi,4),%edi
 8050f9a:	f7 df                	neg    %edi
 8050f9c:	89 bd 34 fb ff ff    	mov    %edi,-0x4cc(%ebp)
 8050fa2:	8d 3c 36             	lea    (%esi,%esi,1),%edi
 8050fa5:	f7 df                	neg    %edi
 8050fa7:	c7 85 2c fb ff ff 01 	movl   $0x1,-0x4d4(%ebp)
 8050fae:	00 00 00 
 8050fb1:	e9 e8 fc ff ff       	jmp    8050c9e <main+0x707e>
 8050fb6:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 8050fbc:	8b 30                	mov    (%eax),%esi
 8050fbe:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 8050fc5:	00 
 8050fc6:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8050fcd:	e8 92 86 ff ff       	call   8049664 <calloc@plt>
 8050fd2:	85 c0                	test   %eax,%eax
 8050fd4:	0f 84 ef 08 00 00    	je     80518c9 <main+0x7ca9>
 8050fda:	89 70 08             	mov    %esi,0x8(%eax)
 8050fdd:	89 c6                	mov    %eax,%esi
 8050fdf:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8050fe5:	e9 5f fb ff ff       	jmp    8050b49 <main+0x6f29>
 8050fea:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 8050ff0:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 8050ff6:	8b 08                	mov    (%eax),%ecx
 8050ff8:	8b 50 f8             	mov    -0x8(%eax),%edx
 8050ffb:	31 c0                	xor    %eax,%eax
 8050ffd:	83 ee 08             	sub    $0x8,%esi
 8051000:	e8 1b f7 ff ff       	call   8050720 <main+0x6b00>
 8051005:	85 c0                	test   %eax,%eax
 8051007:	74 64                	je     805106d <main+0x744d>
 8051009:	89 c6                	mov    %eax,%esi
 805100b:	e9 39 fb ff ff       	jmp    8050b49 <main+0x6f29>
 8051010:	b8 64 62 05 08       	mov    $0x8056264,%eax
 8051015:	e8 66 f8 ff ff       	call   8050880 <main+0x6c60>
 805101a:	8d 04 bd 00 00 00 00 	lea    0x0(,%edi,4),%eax
 8051021:	01 ff                	add    %edi,%edi
 8051023:	29 fb                	sub    %edi,%ebx
 8051025:	0f bf 33             	movswl (%ebx),%esi
 8051028:	29 85 28 fb ff ff    	sub    %eax,-0x4d8(%ebp)
 805102e:	0f bf bc 36 e0 5b 05 	movswl 0x8055be0(%esi,%esi,1),%edi
 8051035:	08 
 8051036:	89 f2                	mov    %esi,%edx
 8051038:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 805103e:	89 f8                	mov    %edi,%eax
 8051040:	8b bd 30 fb ff ff    	mov    -0x4d0(%ebp),%edi
 8051046:	e9 dd fb ff ff       	jmp    8050c28 <main+0x7008>
 805104b:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 8051051:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 8051057:	8b 08                	mov    (%eax),%ecx
 8051059:	8b 50 f8             	mov    -0x8(%eax),%edx
 805105c:	b8 01 00 00 00       	mov    $0x1,%eax
 8051061:	83 ee 08             	sub    $0x8,%esi
 8051064:	e8 b7 f6 ff ff       	call   8050720 <main+0x6b00>
 8051069:	85 c0                	test   %eax,%eax
 805106b:	75 9c                	jne    8051009 <main+0x73e9>
 805106d:	89 f8                	mov    %edi,%eax
 805106f:	89 f7                	mov    %esi,%edi
 8051071:	89 c6                	mov    %eax,%esi
 8051073:	8b 07                	mov    (%edi),%eax
 8051075:	89 04 24             	mov    %eax,(%esp)
 8051078:	e8 03 f5 ff ff       	call   8050580 <main+0x6960>
 805107d:	8b 95 28 fb ff ff    	mov    -0x4d8(%ebp),%edx
 8051083:	8b 02                	mov    (%edx),%eax
 8051085:	89 04 24             	mov    %eax,(%esp)
 8051088:	e8 f3 f4 ff ff       	call   8050580 <main+0x6960>
 805108d:	8d 0c b5 00 00 00 00 	lea    0x0(,%esi,4),%ecx
 8051094:	f7 d9                	neg    %ecx
 8051096:	8d 3c 36             	lea    (%esi,%esi,1),%edi
 8051099:	89 8d 34 fb ff ff    	mov    %ecx,-0x4cc(%ebp)
 805109f:	f7 df                	neg    %edi
 80510a1:	c7 85 2c fb ff ff 01 	movl   $0x1,-0x4d4(%ebp)
 80510a8:	00 00 00 
 80510ab:	e9 ee fb ff ff       	jmp    8050c9e <main+0x707e>
 80510b0:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 80510b6:	8b 10                	mov    (%eax),%edx
 80510b8:	b8 10 00 00 00       	mov    $0x10,%eax
 80510bd:	e8 ae f6 ff ff       	call   8050770 <main+0x6b50>
 80510c2:	85 c0                	test   %eax,%eax
 80510c4:	0f 85 3f ff ff ff    	jne    8051009 <main+0x73e9>
 80510ca:	8b 95 28 fb ff ff    	mov    -0x4d8(%ebp),%edx
 80510d0:	89 fe                	mov    %edi,%esi
 80510d2:	8b 02                	mov    (%edx),%eax
 80510d4:	89 04 24             	mov    %eax,(%esp)
 80510d7:	e8 a4 f4 ff ff       	call   8050580 <main+0x6960>
 80510dc:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 80510e3:	e8 98 f4 ff ff       	call   8050580 <main+0x6960>
 80510e8:	eb a3                	jmp    805108d <main+0x746d>
 80510ea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 80510f0:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 80510f6:	8b 10                	mov    (%eax),%edx
 80510f8:	b8 11 00 00 00       	mov    $0x11,%eax
 80510fd:	e8 6e f6 ff ff       	call   8050770 <main+0x6b50>
 8051102:	85 c0                	test   %eax,%eax
 8051104:	74 c4                	je     80510ca <main+0x74aa>
 8051106:	89 c6                	mov    %eax,%esi
 8051108:	e9 3c fa ff ff       	jmp    8050b49 <main+0x6f29>
 805110d:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 8051113:	8b 10                	mov    (%eax),%edx
 8051115:	b8 12 00 00 00       	mov    $0x12,%eax
 805111a:	e8 51 f6 ff ff       	call   8050770 <main+0x6b50>
 805111f:	85 c0                	test   %eax,%eax
 8051121:	74 a7                	je     80510ca <main+0x74aa>
 8051123:	89 c6                	mov    %eax,%esi
 8051125:	e9 1f fa ff ff       	jmp    8050b49 <main+0x6f29>
 805112a:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 8051130:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 8051136:	8b 08                	mov    (%eax),%ecx
 8051138:	8b 50 f8             	mov    -0x8(%eax),%edx
 805113b:	b8 0d 00 00 00       	mov    $0xd,%eax
 8051140:	83 ee 08             	sub    $0x8,%esi
 8051143:	e8 d8 f5 ff ff       	call   8050720 <main+0x6b00>
 8051148:	85 c0                	test   %eax,%eax
 805114a:	0f 84 1d ff ff ff    	je     805106d <main+0x744d>
 8051150:	89 c6                	mov    %eax,%esi
 8051152:	e9 f2 f9 ff ff       	jmp    8050b49 <main+0x6f29>
 8051157:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 805115d:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 8051163:	8b 08                	mov    (%eax),%ecx
 8051165:	8b 50 f8             	mov    -0x8(%eax),%edx
 8051168:	b8 0e 00 00 00       	mov    $0xe,%eax
 805116d:	83 ee 08             	sub    $0x8,%esi
 8051170:	e8 ab f5 ff ff       	call   8050720 <main+0x6b00>
 8051175:	85 c0                	test   %eax,%eax
 8051177:	0f 84 f0 fe ff ff    	je     805106d <main+0x744d>
 805117d:	89 c6                	mov    %eax,%esi
 805117f:	e9 c5 f9 ff ff       	jmp    8050b49 <main+0x6f29>
 8051184:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 805118a:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 8051190:	8b 08                	mov    (%eax),%ecx
 8051192:	8b 50 f8             	mov    -0x8(%eax),%edx
 8051195:	b8 0f 00 00 00       	mov    $0xf,%eax
 805119a:	83 ee 08             	sub    $0x8,%esi
 805119d:	e8 7e f5 ff ff       	call   8050720 <main+0x6b00>
 80511a2:	85 c0                	test   %eax,%eax
 80511a4:	0f 84 c3 fe ff ff    	je     805106d <main+0x744d>
 80511aa:	89 c6                	mov    %eax,%esi
 80511ac:	e9 98 f9 ff ff       	jmp    8050b49 <main+0x6f29>
 80511b1:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 80511b7:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 80511bd:	8b 08                	mov    (%eax),%ecx
 80511bf:	8b 50 f8             	mov    -0x8(%eax),%edx
 80511c2:	b8 13 00 00 00       	mov    $0x13,%eax
 80511c7:	83 ee 08             	sub    $0x8,%esi
 80511ca:	e8 51 f5 ff ff       	call   8050720 <main+0x6b00>
 80511cf:	85 c0                	test   %eax,%eax
 80511d1:	0f 84 96 fe ff ff    	je     805106d <main+0x744d>
 80511d7:	89 c6                	mov    %eax,%esi
 80511d9:	e9 6b f9 ff ff       	jmp    8050b49 <main+0x6f29>
 80511de:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 80511e4:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 80511ea:	8b 50 fc             	mov    -0x4(%eax),%edx
 80511ed:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 80511f4:	00 
 80511f5:	83 ee 04             	sub    $0x4,%esi
 80511f8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80511ff:	89 95 04 fb ff ff    	mov    %edx,-0x4fc(%ebp)
 8051205:	e8 5a 84 ff ff       	call   8049664 <calloc@plt>
 805120a:	8b 95 04 fb ff ff    	mov    -0x4fc(%ebp),%edx
 8051210:	85 c0                	test   %eax,%eax
 8051212:	0f 84 2d 06 00 00    	je     8051845 <main+0x7c25>
 8051218:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 805121e:	89 c6                	mov    %eax,%esi
 8051220:	89 50 08             	mov    %edx,0x8(%eax)
 8051223:	e9 21 f9 ff ff       	jmp    8050b49 <main+0x6f29>
 8051228:	8b 8d 28 fb ff ff    	mov    -0x4d8(%ebp),%ecx
 805122e:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 8051234:	8b 95 28 fb ff ff    	mov    -0x4d8(%ebp),%edx
 805123a:	8b 09                	mov    (%ecx),%ecx
 805123c:	83 e8 08             	sub    $0x8,%eax
 805123f:	89 85 08 fb ff ff    	mov    %eax,-0x4f8(%ebp)
 8051245:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 805124b:	89 8d 14 fb ff ff    	mov    %ecx,-0x4ec(%ebp)
 8051251:	8b 8d 28 fb ff ff    	mov    -0x4d8(%ebp),%ecx
 8051257:	8b 52 f8             	mov    -0x8(%edx),%edx
 805125a:	89 c6                	mov    %eax,%esi
 805125c:	83 ee 18             	sub    $0x18,%esi
 805125f:	83 e9 10             	sub    $0x10,%ecx
 8051262:	89 95 0c fb ff ff    	mov    %edx,-0x4f4(%ebp)
 8051268:	89 8d 10 fb ff ff    	mov    %ecx,-0x4f0(%ebp)
 805126e:	8b 48 f0             	mov    -0x10(%eax),%ecx
 8051271:	8b 50 e8             	mov    -0x18(%eax),%edx
 8051274:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 805127b:	00 
 805127c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8051283:	89 8d 00 fb ff ff    	mov    %ecx,-0x500(%ebp)
 8051289:	89 95 04 fb ff ff    	mov    %edx,-0x4fc(%ebp)
 805128f:	e8 d0 83 ff ff       	call   8049664 <calloc@plt>
 8051294:	8b 95 04 fb ff ff    	mov    -0x4fc(%ebp),%edx
 805129a:	8b 8d 00 fb ff ff    	mov    -0x500(%ebp),%ecx
 80512a0:	85 c0                	test   %eax,%eax
 80512a2:	0f 84 d7 05 00 00    	je     805187f <main+0x7c5f>
 80512a8:	89 50 08             	mov    %edx,0x8(%eax)
 80512ab:	89 c6                	mov    %eax,%esi
 80512ad:	89 48 0c             	mov    %ecx,0xc(%eax)
 80512b0:	8b 95 0c fb ff ff    	mov    -0x4f4(%ebp),%edx
 80512b6:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 80512bc:	89 50 10             	mov    %edx,0x10(%eax)
 80512bf:	8b 8d 14 fb ff ff    	mov    -0x4ec(%ebp),%ecx
 80512c5:	89 48 14             	mov    %ecx,0x14(%eax)
 80512c8:	e9 7c f8 ff ff       	jmp    8050b49 <main+0x6f29>
 80512cd:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 80512d3:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 80512d9:	8b 08                	mov    (%eax),%ecx
 80512db:	8b 50 f8             	mov    -0x8(%eax),%edx
 80512de:	b8 09 00 00 00       	mov    $0x9,%eax
 80512e3:	83 ee 08             	sub    $0x8,%esi
 80512e6:	e8 35 f4 ff ff       	call   8050720 <main+0x6b00>
 80512eb:	85 c0                	test   %eax,%eax
 80512ed:	0f 84 7a fd ff ff    	je     805106d <main+0x744d>
 80512f3:	89 c6                	mov    %eax,%esi
 80512f5:	e9 4f f8 ff ff       	jmp    8050b49 <main+0x6f29>
 80512fa:	8b 95 28 fb ff ff    	mov    -0x4d8(%ebp),%edx
 8051300:	8b 02                	mov    (%edx),%eax
 8051302:	e8 a9 f4 ff ff       	call   80507b0 <main+0x6b90>
 8051307:	85 c0                	test   %eax,%eax
 8051309:	0f 85 fa fc ff ff    	jne    8051009 <main+0x73e9>
 805130f:	8b 8d 28 fb ff ff    	mov    -0x4d8(%ebp),%ecx
 8051315:	89 fe                	mov    %edi,%esi
 8051317:	8b 01                	mov    (%ecx),%eax
 8051319:	89 04 24             	mov    %eax,(%esp)
 805131c:	e8 33 87 ff ff       	call   8049a54 <free@plt>
 8051321:	e9 6d fc ff ff       	jmp    8050f93 <main+0x7373>
 8051326:	8b 95 28 fb ff ff    	mov    -0x4d8(%ebp),%edx
 805132c:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 8051332:	83 ea 04             	sub    $0x4,%edx
 8051335:	89 95 14 fb ff ff    	mov    %edx,-0x4ec(%ebp)
 805133b:	8b 50 f4             	mov    -0xc(%eax),%edx
 805133e:	89 c6                	mov    %eax,%esi
 8051340:	83 ee 0c             	sub    $0xc,%esi
 8051343:	8b 48 fc             	mov    -0x4(%eax),%ecx
 8051346:	85 d2                	test   %edx,%edx
 8051348:	0f 84 5b 04 00 00    	je     80517a9 <main+0x7b89>
 805134e:	89 95 04 fb ff ff    	mov    %edx,-0x4fc(%ebp)
 8051354:	89 8d 00 fb ff ff    	mov    %ecx,-0x500(%ebp)
 805135a:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 8051361:	00 
 8051362:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8051369:	e8 f6 82 ff ff       	call   8049664 <calloc@plt>
 805136e:	8b 95 04 fb ff ff    	mov    -0x4fc(%ebp),%edx
 8051374:	8b 8d 00 fb ff ff    	mov    -0x500(%ebp),%ecx
 805137a:	85 c0                	test   %eax,%eax
 805137c:	0f 84 5a 05 00 00    	je     80518dc <main+0x7cbc>
 8051382:	c7 00 03 00 00 00    	movl   $0x3,(%eax)
 8051388:	89 c6                	mov    %eax,%esi
 805138a:	89 50 08             	mov    %edx,0x8(%eax)
 805138d:	89 48 0c             	mov    %ecx,0xc(%eax)
 8051390:	e9 b4 f7 ff ff       	jmp    8050b49 <main+0x6f29>
 8051395:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 805139b:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 80513a1:	8b 08                	mov    (%eax),%ecx
 80513a3:	8b 50 f8             	mov    -0x8(%eax),%edx
 80513a6:	b8 0b 00 00 00       	mov    $0xb,%eax
 80513ab:	83 ee 08             	sub    $0x8,%esi
 80513ae:	e8 6d f3 ff ff       	call   8050720 <main+0x6b00>
 80513b3:	85 c0                	test   %eax,%eax
 80513b5:	0f 84 b2 fc ff ff    	je     805106d <main+0x744d>
 80513bb:	89 c6                	mov    %eax,%esi
 80513bd:	e9 87 f7 ff ff       	jmp    8050b49 <main+0x6f29>
 80513c2:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 80513c8:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 80513ce:	8b 08                	mov    (%eax),%ecx
 80513d0:	8b 50 f8             	mov    -0x8(%eax),%edx
 80513d3:	b8 0c 00 00 00       	mov    $0xc,%eax
 80513d8:	83 ee 08             	sub    $0x8,%esi
 80513db:	e8 40 f3 ff ff       	call   8050720 <main+0x6b00>
 80513e0:	85 c0                	test   %eax,%eax
 80513e2:	0f 84 85 fc ff ff    	je     805106d <main+0x744d>
 80513e8:	89 c6                	mov    %eax,%esi
 80513ea:	e9 5a f7 ff ff       	jmp    8050b49 <main+0x6f29>
 80513ef:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 80513f5:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 80513fb:	8b 08                	mov    (%eax),%ecx
 80513fd:	8b 50 f8             	mov    -0x8(%eax),%edx
 8051400:	b8 0a 00 00 00       	mov    $0xa,%eax
 8051405:	83 ee 08             	sub    $0x8,%esi
 8051408:	e8 13 f3 ff ff       	call   8050720 <main+0x6b00>
 805140d:	85 c0                	test   %eax,%eax
 805140f:	0f 84 58 fc ff ff    	je     805106d <main+0x744d>
 8051415:	89 c6                	mov    %eax,%esi
 8051417:	e9 2d f7 ff ff       	jmp    8050b49 <main+0x6f29>
 805141c:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 8051422:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 8051428:	8b 08                	mov    (%eax),%ecx
 805142a:	8b 50 f8             	mov    -0x8(%eax),%edx
 805142d:	b8 02 00 00 00       	mov    $0x2,%eax
 8051432:	83 ee 08             	sub    $0x8,%esi
 8051435:	e8 e6 f2 ff ff       	call   8050720 <main+0x6b00>
 805143a:	85 c0                	test   %eax,%eax
 805143c:	0f 84 2b fc ff ff    	je     805106d <main+0x744d>
 8051442:	89 c6                	mov    %eax,%esi
 8051444:	e9 00 f7 ff ff       	jmp    8050b49 <main+0x6f29>
 8051449:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 805144f:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 8051455:	8b 08                	mov    (%eax),%ecx
 8051457:	8b 50 f8             	mov    -0x8(%eax),%edx
 805145a:	b8 04 00 00 00       	mov    $0x4,%eax
 805145f:	83 ee 08             	sub    $0x8,%esi
 8051462:	e8 b9 f2 ff ff       	call   8050720 <main+0x6b00>
 8051467:	85 c0                	test   %eax,%eax
 8051469:	0f 84 fe fb ff ff    	je     805106d <main+0x744d>
 805146f:	89 c6                	mov    %eax,%esi
 8051471:	e9 d3 f6 ff ff       	jmp    8050b49 <main+0x6f29>
 8051476:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 805147c:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 8051482:	8b 08                	mov    (%eax),%ecx
 8051484:	8b 50 f8             	mov    -0x8(%eax),%edx
 8051487:	b8 03 00 00 00       	mov    $0x3,%eax
 805148c:	83 ee 08             	sub    $0x8,%esi
 805148f:	e8 8c f2 ff ff       	call   8050720 <main+0x6b00>
 8051494:	85 c0                	test   %eax,%eax
 8051496:	0f 84 d1 fb ff ff    	je     805106d <main+0x744d>
 805149c:	89 c6                	mov    %eax,%esi
 805149e:	e9 a6 f6 ff ff       	jmp    8050b49 <main+0x6f29>
 80514a3:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 80514a9:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 80514af:	8b 08                	mov    (%eax),%ecx
 80514b1:	8b 50 f8             	mov    -0x8(%eax),%edx
 80514b4:	b8 05 00 00 00       	mov    $0x5,%eax
 80514b9:	83 ee 08             	sub    $0x8,%esi
 80514bc:	e8 5f f2 ff ff       	call   8050720 <main+0x6b00>
 80514c1:	85 c0                	test   %eax,%eax
 80514c3:	0f 84 a4 fb ff ff    	je     805106d <main+0x744d>
 80514c9:	89 c6                	mov    %eax,%esi
 80514cb:	e9 79 f6 ff ff       	jmp    8050b49 <main+0x6f29>
 80514d0:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 80514d6:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 80514dc:	8b 08                	mov    (%eax),%ecx
 80514de:	8b 50 f8             	mov    -0x8(%eax),%edx
 80514e1:	b8 06 00 00 00       	mov    $0x6,%eax
 80514e6:	83 ee 08             	sub    $0x8,%esi
 80514e9:	e8 32 f2 ff ff       	call   8050720 <main+0x6b00>
 80514ee:	85 c0                	test   %eax,%eax
 80514f0:	0f 84 77 fb ff ff    	je     805106d <main+0x744d>
 80514f6:	89 c6                	mov    %eax,%esi
 80514f8:	e9 4c f6 ff ff       	jmp    8050b49 <main+0x6f29>
 80514fd:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 8051503:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 8051509:	8b 08                	mov    (%eax),%ecx
 805150b:	8b 50 f8             	mov    -0x8(%eax),%edx
 805150e:	b8 07 00 00 00       	mov    $0x7,%eax
 8051513:	83 ee 08             	sub    $0x8,%esi
 8051516:	e8 05 f2 ff ff       	call   8050720 <main+0x6b00>
 805151b:	85 c0                	test   %eax,%eax
 805151d:	0f 84 4a fb ff ff    	je     805106d <main+0x744d>
 8051523:	89 c6                	mov    %eax,%esi
 8051525:	e9 1f f6 ff ff       	jmp    8050b49 <main+0x6f29>
 805152a:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 8051530:	8b b5 28 fb ff ff    	mov    -0x4d8(%ebp),%esi
 8051536:	8b 08                	mov    (%eax),%ecx
 8051538:	8b 50 f8             	mov    -0x8(%eax),%edx
 805153b:	b8 08 00 00 00       	mov    $0x8,%eax
 8051540:	83 ee 08             	sub    $0x8,%esi
 8051543:	e8 d8 f1 ff ff       	call   8050720 <main+0x6b00>
 8051548:	85 c0                	test   %eax,%eax
 805154a:	0f 84 1d fb ff ff    	je     805106d <main+0x744d>
 8051550:	89 c6                	mov    %eax,%esi
 8051552:	e9 f2 f5 ff ff       	jmp    8050b49 <main+0x6f29>
 8051557:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 805155d:	8b 10                	mov    (%eax),%edx
 805155f:	85 d2                	test   %edx,%edx
 8051561:	0f 84 e2 f5 ff ff    	je     8050b49 <main+0x6f29>
 8051567:	a1 48 8e 05 08       	mov    0x8058e48,%eax
 805156c:	85 c0                	test   %eax,%eax
 805156e:	0f 84 8e 02 00 00    	je     8051802 <main+0x7be2>
 8051574:	89 50 04             	mov    %edx,0x4(%eax)
 8051577:	89 15 48 8e 05 08    	mov    %edx,0x8058e48
 805157d:	e9 c7 f5 ff ff       	jmp    8050b49 <main+0x6f29>
 8051582:	8b 95 28 fb ff ff    	mov    -0x4d8(%ebp),%edx
 8051588:	8b 02                	mov    (%edx),%eax
 805158a:	e8 21 f2 ff ff       	call   80507b0 <main+0x6b90>
 805158f:	85 c0                	test   %eax,%eax
 8051591:	89 c2                	mov    %eax,%edx
 8051593:	75 d2                	jne    8051567 <main+0x7947>
 8051595:	e9 75 fd ff ff       	jmp    805130f <main+0x76ef>
 805159a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 80515a0:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 80515a6:	8b 08                	mov    (%eax),%ecx
 80515a8:	89 c6                	mov    %eax,%esi
 80515aa:	8b 50 f8             	mov    -0x8(%eax),%edx
 80515ad:	83 ee 08             	sub    $0x8,%esi
 80515b0:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 80515b7:	00 
 80515b8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80515bf:	89 8d 00 fb ff ff    	mov    %ecx,-0x500(%ebp)
 80515c5:	89 95 04 fb ff ff    	mov    %edx,-0x4fc(%ebp)
 80515cb:	e8 94 80 ff ff       	call   8049664 <calloc@plt>
 80515d0:	8b 95 04 fb ff ff    	mov    -0x4fc(%ebp),%edx
 80515d6:	8b 8d 00 fb ff ff    	mov    -0x500(%ebp),%ecx
 80515dc:	85 c0                	test   %eax,%eax
 80515de:	0f 84 a0 01 00 00    	je     8051784 <main+0x7b64>
 80515e4:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 80515ea:	89 c6                	mov    %eax,%esi
 80515ec:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 80515f3:	89 50 0c             	mov    %edx,0xc(%eax)
 80515f6:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 80515fd:	89 48 14             	mov    %ecx,0x14(%eax)
 8051600:	e9 44 f5 ff ff       	jmp    8050b49 <main+0x6f29>
 8051605:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 805160c:	00 
 805160d:	89 fe                	mov    %edi,%esi
 805160f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8051616:	e8 49 80 ff ff       	call   8049664 <calloc@plt>
 805161b:	85 c0                	test   %eax,%eax
 805161d:	0f 84 70 f9 ff ff    	je     8050f93 <main+0x7373>
 8051623:	c7 00 03 00 00 00    	movl   $0x3,(%eax)
 8051629:	e9 65 f9 ff ff       	jmp    8050f93 <main+0x7373>
 805162e:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 8051635:	00 
 8051636:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 805163d:	e8 22 80 ff ff       	call   8049664 <calloc@plt>
 8051642:	85 c0                	test   %eax,%eax
 8051644:	0f 84 78 02 00 00    	je     80518c2 <main+0x7ca2>
 805164a:	c7 00 04 00 00 00    	movl   $0x4,(%eax)
 8051650:	89 c6                	mov    %eax,%esi
 8051652:	e9 f2 f4 ff ff       	jmp    8050b49 <main+0x6f29>
 8051657:	8b 95 28 fb ff ff    	mov    -0x4d8(%ebp),%edx
 805165d:	8b 8d 28 fb ff ff    	mov    -0x4d8(%ebp),%ecx
 8051663:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 8051669:	8b 12                	mov    (%edx),%edx
 805166b:	83 e9 08             	sub    $0x8,%ecx
 805166e:	89 8d 14 fb ff ff    	mov    %ecx,-0x4ec(%ebp)
 8051674:	89 c6                	mov    %eax,%esi
 8051676:	83 ee 10             	sub    $0x10,%esi
 8051679:	89 95 10 fb ff ff    	mov    %edx,-0x4f0(%ebp)
 805167f:	8b 48 f8             	mov    -0x8(%eax),%ecx
 8051682:	8b 50 f0             	mov    -0x10(%eax),%edx
 8051685:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 805168c:	00 
 805168d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8051694:	89 8d 00 fb ff ff    	mov    %ecx,-0x500(%ebp)
 805169a:	89 95 04 fb ff ff    	mov    %edx,-0x4fc(%ebp)
 80516a0:	e8 bf 7f ff ff       	call   8049664 <calloc@plt>
 80516a5:	8b 95 04 fb ff ff    	mov    -0x4fc(%ebp),%edx
 80516ab:	8b 8d 00 fb ff ff    	mov    -0x500(%ebp),%ecx
 80516b1:	85 c0                	test   %eax,%eax
 80516b3:	0f 84 5a 01 00 00    	je     8051813 <main+0x7bf3>
 80516b9:	89 50 08             	mov    %edx,0x8(%eax)
 80516bc:	89 c6                	mov    %eax,%esi
 80516be:	89 48 0c             	mov    %ecx,0xc(%eax)
 80516c1:	8b 95 10 fb ff ff    	mov    -0x4f0(%ebp),%edx
 80516c7:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 80516cd:	89 50 10             	mov    %edx,0x10(%eax)
 80516d0:	e9 74 f4 ff ff       	jmp    8050b49 <main+0x6f29>
 80516d5:	8b 85 28 fb ff ff    	mov    -0x4d8(%ebp),%eax
 80516db:	8b 30                	mov    (%eax),%esi
 80516dd:	e9 67 f4 ff ff       	jmp    8050b49 <main+0x6f29>
 80516e2:	8b 8d 28 fb ff ff    	mov    -0x4d8(%ebp),%ecx
 80516e8:	8b 51 f8             	mov    -0x8(%ecx),%edx
 80516eb:	8b 01                	mov    (%ecx),%eax
 80516ed:	89 42 04             	mov    %eax,0x4(%edx)
 80516f0:	8b 71 f8             	mov    -0x8(%ecx),%esi
 80516f3:	e9 51 f4 ff ff       	jmp    8050b49 <main+0x6f29>
 80516f8:	8b 95 28 fb ff ff    	mov    -0x4d8(%ebp),%edx
 80516fe:	8b 42 fc             	mov    -0x4(%edx),%eax
 8051701:	85 c0                	test   %eax,%eax
 8051703:	0f 84 6f 01 00 00    	je     8051878 <main+0x7c58>
 8051709:	8b 8d 28 fb ff ff    	mov    -0x4d8(%ebp),%ecx
 805170f:	8b 11                	mov    (%ecx),%edx
 8051711:	89 50 04             	mov    %edx,0x4(%eax)
 8051714:	8b 71 fc             	mov    -0x4(%ecx),%esi
 8051717:	e9 2d f4 ff ff       	jmp    8050b49 <main+0x6f29>
 805171c:	b8 92 62 05 08       	mov    $0x8056292,%eax
 8051721:	31 ff                	xor    %edi,%edi
 8051723:	e8 58 f1 ff ff       	call   8050880 <main+0x6c60>
 8051728:	31 f6                	xor    %esi,%esi
 805172a:	c7 85 34 fb ff ff 00 	movl   $0x0,-0x4cc(%ebp)
 8051731:	00 00 00 
 8051734:	c7 85 2c fb ff ff 02 	movl   $0x2,-0x4d4(%ebp)
 805173b:	00 00 00 
 805173e:	e9 5b f5 ff ff       	jmp    8050c9e <main+0x707e>
 8051743:	31 ff                	xor    %edi,%edi
 8051745:	66 31 f6             	xor    %si,%si
 8051748:	c7 85 34 fb ff ff 00 	movl   $0x0,-0x4cc(%ebp)
 805174f:	00 00 00 
 8051752:	c7 85 2c fb ff ff 00 	movl   $0x0,-0x4d4(%ebp)
 8051759:	00 00 00 
 805175c:	e9 3d f5 ff ff       	jmp    8050c9e <main+0x707e>
 8051761:	89 bd 30 fb ff ff    	mov    %edi,-0x4d0(%ebp)
 8051767:	31 f6                	xor    %esi,%esi
 8051769:	31 ff                	xor    %edi,%edi
 805176b:	c7 85 34 fb ff ff 00 	movl   $0x0,-0x4cc(%ebp)
 8051772:	00 00 00 
 8051775:	c7 85 2c fb ff ff 01 	movl   $0x1,-0x4d4(%ebp)
 805177c:	00 00 00 
 805177f:	e9 1a f5 ff ff       	jmp    8050c9e <main+0x707e>
 8051784:	89 f8                	mov    %edi,%eax
 8051786:	89 f7                	mov    %esi,%edi
 8051788:	89 c6                	mov    %eax,%esi
 805178a:	8b 07                	mov    (%edi),%eax
 805178c:	89 04 24             	mov    %eax,(%esp)
 805178f:	e8 ec ed ff ff       	call   8050580 <main+0x6960>
 8051794:	8b 95 28 fb ff ff    	mov    -0x4d8(%ebp),%edx
 805179a:	8b 02                	mov    (%edx),%eax
 805179c:	89 04 24             	mov    %eax,(%esp)
 805179f:	e8 7c ee ff ff       	call   8050620 <main+0x6a00>
 80517a4:	e9 e4 f8 ff ff       	jmp    805108d <main+0x746d>
 80517a9:	89 fe                	mov    %edi,%esi
 80517ab:	31 c0                	xor    %eax,%eax
 80517ad:	89 04 24             	mov    %eax,(%esp)
 80517b0:	e8 9f 82 ff ff       	call   8049a54 <free@plt>
 80517b5:	8b 95 14 fb ff ff    	mov    -0x4ec(%ebp),%edx
 80517bb:	8b 02                	mov    (%edx),%eax
 80517bd:	89 04 24             	mov    %eax,(%esp)
 80517c0:	e8 bb ed ff ff       	call   8050580 <main+0x6960>
 80517c5:	e9 c3 f8 ff ff       	jmp    805108d <main+0x746d>
 80517ca:	89 fe                	mov    %edi,%esi
 80517cc:	31 c0                	xor    %eax,%eax
 80517ce:	e9 46 fb ff ff       	jmp    8051319 <main+0x76f9>
 80517d3:	89 fe                	mov    %edi,%esi
 80517d5:	31 c0                	xor    %eax,%eax
 80517d7:	89 04 24             	mov    %eax,(%esp)
 80517da:	e8 75 82 ff ff       	call   8049a54 <free@plt>
 80517df:	8d 04 b5 00 00 00 00 	lea    0x0(,%esi,4),%eax
 80517e6:	f7 d8                	neg    %eax
 80517e8:	8d 3c 36             	lea    (%esi,%esi,1),%edi
 80517eb:	89 85 34 fb ff ff    	mov    %eax,-0x4cc(%ebp)
 80517f1:	f7 df                	neg    %edi
 80517f3:	c7 85 2c fb ff ff 01 	movl   $0x1,-0x4d4(%ebp)
 80517fa:	00 00 00 
 80517fd:	e9 9c f4 ff ff       	jmp    8050c9e <main+0x707e>
 8051802:	89 15 48 8e 05 08    	mov    %edx,0x8058e48
 8051808:	89 15 4c 8e 05 08    	mov    %edx,0x8058e4c
 805180e:	e9 36 f3 ff ff       	jmp    8050b49 <main+0x6f29>
 8051813:	89 f8                	mov    %edi,%eax
 8051815:	89 f7                	mov    %esi,%edi
 8051817:	89 c6                	mov    %eax,%esi
 8051819:	8b 07                	mov    (%edi),%eax
 805181b:	89 04 24             	mov    %eax,(%esp)
 805181e:	e8 5d ed ff ff       	call   8050580 <main+0x6960>
 8051823:	8b 8d 14 fb ff ff    	mov    -0x4ec(%ebp),%ecx
 8051829:	8b 01                	mov    (%ecx),%eax
 805182b:	89 04 24             	mov    %eax,(%esp)
 805182e:	e8 ed ed ff ff       	call   8050620 <main+0x6a00>
 8051833:	8b bd 28 fb ff ff    	mov    -0x4d8(%ebp),%edi
 8051839:	8b 07                	mov    (%edi),%eax
 805183b:	89 04 24             	mov    %eax,(%esp)
 805183e:	e8 dd ed ff ff       	call   8050620 <main+0x6a00>
 8051843:	eb 9a                	jmp    80517df <main+0x7bbf>
 8051845:	89 f8                	mov    %edi,%eax
 8051847:	89 f7                	mov    %esi,%edi
 8051849:	89 c6                	mov    %eax,%esi
 805184b:	8b 07                	mov    (%edi),%eax
 805184d:	89 04 24             	mov    %eax,(%esp)
 8051850:	e8 2b ed ff ff       	call   8050580 <main+0x6960>
 8051855:	8d 14 b5 00 00 00 00 	lea    0x0(,%esi,4),%edx
 805185c:	f7 da                	neg    %edx
 805185e:	8d 3c 36             	lea    (%esi,%esi,1),%edi
 8051861:	89 95 34 fb ff ff    	mov    %edx,-0x4cc(%ebp)
 8051867:	f7 df                	neg    %edi
 8051869:	c7 85 2c fb ff ff 01 	movl   $0x1,-0x4d4(%ebp)
 8051870:	00 00 00 
 8051873:	e9 26 f4 ff ff       	jmp    8050c9e <main+0x707e>
 8051878:	8b 32                	mov    (%edx),%esi
 805187a:	e9 ca f2 ff ff       	jmp    8050b49 <main+0x6f29>
 805187f:	89 f0                	mov    %esi,%eax
 8051881:	89 fe                	mov    %edi,%esi
 8051883:	8b 00                	mov    (%eax),%eax
 8051885:	89 04 24             	mov    %eax,(%esp)
 8051888:	e8 f3 ec ff ff       	call   8050580 <main+0x6960>
 805188d:	8b bd 10 fb ff ff    	mov    -0x4f0(%ebp),%edi
 8051893:	8b 07                	mov    (%edi),%eax
 8051895:	89 04 24             	mov    %eax,(%esp)
 8051898:	e8 e3 ec ff ff       	call   8050580 <main+0x6960>
 805189d:	8b 95 08 fb ff ff    	mov    -0x4f8(%ebp),%edx
 80518a3:	8b 02                	mov    (%edx),%eax
 80518a5:	89 04 24             	mov    %eax,(%esp)
 80518a8:	e8 d3 ec ff ff       	call   8050580 <main+0x6960>
 80518ad:	8b 8d 28 fb ff ff    	mov    -0x4d8(%ebp),%ecx
 80518b3:	8b 01                	mov    (%ecx),%eax
 80518b5:	89 04 24             	mov    %eax,(%esp)
 80518b8:	e8 63 ed ff ff       	call   8050620 <main+0x6a00>
 80518bd:	e9 d1 f6 ff ff       	jmp    8050f93 <main+0x7373>
 80518c2:	89 fe                	mov    %edi,%esi
 80518c4:	e9 16 ff ff ff       	jmp    80517df <main+0x7bbf>
 80518c9:	89 fe                	mov    %edi,%esi
 80518cb:	eb 88                	jmp    8051855 <main+0x7c35>
 80518cd:	89 fe                	mov    %edi,%esi
 80518cf:	8b bd 28 fb ff ff    	mov    -0x4d8(%ebp),%edi
 80518d5:	8b 07                	mov    (%edi),%eax
 80518d7:	e9 fb fe ff ff       	jmp    80517d7 <main+0x7bb7>
 80518dc:	89 f1                	mov    %esi,%ecx
 80518de:	89 fe                	mov    %edi,%esi
 80518e0:	8b 01                	mov    (%ecx),%eax
 80518e2:	e9 c6 fe ff ff       	jmp    80517ad <main+0x7b8d>
 80518e7:	90                   	nop
 80518e8:	90                   	nop
 80518e9:	90                   	nop
 80518ea:	90                   	nop
 80518eb:	90                   	nop
 80518ec:	90                   	nop
 80518ed:	90                   	nop
 80518ee:	90                   	nop
 80518ef:	90                   	nop
 80518f0:	55                   	push   %ebp
 80518f1:	89 e5                	mov    %esp,%ebp
 80518f3:	53                   	push   %ebx
 80518f4:	83 ec 14             	sub    $0x14,%esp
 80518f7:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 80518fe:	00 
 80518ff:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8051906:	e8 59 7d ff ff       	call   8049664 <calloc@plt>
 805190b:	89 c3                	mov    %eax,%ebx
 805190d:	31 c0                	xor    %eax,%eax
 805190f:	85 db                	test   %ebx,%ebx
 8051911:	74 40                	je     8051953 <main+0x7d33>
 8051913:	8b 45 10             	mov    0x10(%ebp),%eax
 8051916:	c7 03 01 00 00 00    	movl   $0x1,(%ebx)
 805191c:	89 43 04             	mov    %eax,0x4(%ebx)
 805191f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8051922:	89 04 24             	mov    %eax,(%esp)
 8051925:	e8 da 7e ff ff       	call   8049804 <strdup@plt>
 805192a:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8051931:	00 
 8051932:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8051936:	89 44 24 04          	mov    %eax,0x4(%esp)
 805193a:	8b 45 08             	mov    0x8(%ebp),%eax
 805193d:	8b 40 08             	mov    0x8(%eax),%eax
 8051940:	89 04 24             	mov    %eax,(%esp)
 8051943:	e8 e8 bf ff ff       	call   804d930 <main+0x3d10>
 8051948:	89 c2                	mov    %eax,%edx
 805194a:	b8 01 00 00 00       	mov    $0x1,%eax
 805194f:	85 d2                	test   %edx,%edx
 8051951:	74 0d                	je     8051960 <main+0x7d40>
 8051953:	83 c4 14             	add    $0x14,%esp
 8051956:	5b                   	pop    %ebx
 8051957:	5d                   	pop    %ebp
 8051958:	c3                   	ret    
 8051959:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8051960:	89 1c 24             	mov    %ebx,(%esp)
 8051963:	e8 ec 80 ff ff       	call   8049a54 <free@plt>
 8051968:	83 c4 14             	add    $0x14,%esp
 805196b:	31 c0                	xor    %eax,%eax
 805196d:	5b                   	pop    %ebx
 805196e:	5d                   	pop    %ebp
 805196f:	c3                   	ret    
 8051970:	55                   	push   %ebp
 8051971:	89 e5                	mov    %esp,%ebp
 8051973:	53                   	push   %ebx
 8051974:	83 ec 14             	sub    $0x14,%esp
 8051977:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 805197e:	00 
 805197f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8051986:	e8 d9 7c ff ff       	call   8049664 <calloc@plt>
 805198b:	89 c3                	mov    %eax,%ebx
 805198d:	31 c0                	xor    %eax,%eax
 805198f:	85 db                	test   %ebx,%ebx
 8051991:	74 63                	je     80519f6 <main+0x7dd6>
 8051993:	8b 45 10             	mov    0x10(%ebp),%eax
 8051996:	c7 03 02 00 00 00    	movl   $0x2,(%ebx)
 805199c:	89 04 24             	mov    %eax,(%esp)
 805199f:	e8 60 7e ff ff       	call   8049804 <strdup@plt>
 80519a4:	31 d2                	xor    %edx,%edx
 80519a6:	85 c0                	test   %eax,%eax
 80519a8:	89 43 04             	mov    %eax,0x4(%ebx)
 80519ab:	74 37                	je     80519e4 <main+0x7dc4>
 80519ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 80519b0:	89 04 24             	mov    %eax,(%esp)
 80519b3:	e8 4c 7e ff ff       	call   8049804 <strdup@plt>
 80519b8:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 80519bf:	00 
 80519c0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 80519c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 80519c8:	8b 45 08             	mov    0x8(%ebp),%eax
 80519cb:	8b 40 08             	mov    0x8(%eax),%eax
 80519ce:	89 04 24             	mov    %eax,(%esp)
 80519d1:	e8 5a bf ff ff       	call   804d930 <main+0x3d10>
 80519d6:	89 c2                	mov    %eax,%edx
 80519d8:	b8 01 00 00 00       	mov    $0x1,%eax
 80519dd:	85 d2                	test   %edx,%edx
 80519df:	75 15                	jne    80519f6 <main+0x7dd6>
 80519e1:	8b 53 04             	mov    0x4(%ebx),%edx
 80519e4:	89 14 24             	mov    %edx,(%esp)
 80519e7:	e8 68 80 ff ff       	call   8049a54 <free@plt>
 80519ec:	89 1c 24             	mov    %ebx,(%esp)
 80519ef:	e8 60 80 ff ff       	call   8049a54 <free@plt>
 80519f4:	31 c0                	xor    %eax,%eax
 80519f6:	83 c4 14             	add    $0x14,%esp
 80519f9:	5b                   	pop    %ebx
 80519fa:	5d                   	pop    %ebp
 80519fb:	c3                   	ret    
 80519fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8051a00:	55                   	push   %ebp
 8051a01:	89 e5                	mov    %esp,%ebp
 8051a03:	53                   	push   %ebx
 8051a04:	83 ec 14             	sub    $0x14,%esp
 8051a07:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8051a0e:	00 
 8051a0f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8051a16:	e8 49 7c ff ff       	call   8049664 <calloc@plt>
 8051a1b:	89 c3                	mov    %eax,%ebx
 8051a1d:	31 c0                	xor    %eax,%eax
 8051a1f:	85 db                	test   %ebx,%ebx
 8051a21:	74 3f                	je     8051a62 <main+0x7e42>
 8051a23:	8b 45 10             	mov    0x10(%ebp),%eax
 8051a26:	89 03                	mov    %eax,(%ebx)
 8051a28:	8b 45 14             	mov    0x14(%ebp),%eax
 8051a2b:	89 43 04             	mov    %eax,0x4(%ebx)
 8051a2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8051a31:	89 04 24             	mov    %eax,(%esp)
 8051a34:	e8 cb 7d ff ff       	call   8049804 <strdup@plt>
 8051a39:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8051a40:	00 
 8051a41:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8051a45:	89 44 24 04          	mov    %eax,0x4(%esp)
 8051a49:	8b 45 08             	mov    0x8(%ebp),%eax
 8051a4c:	8b 40 04             	mov    0x4(%eax),%eax
 8051a4f:	89 04 24             	mov    %eax,(%esp)
 8051a52:	e8 d9 be ff ff       	call   804d930 <main+0x3d10>
 8051a57:	89 c2                	mov    %eax,%edx
 8051a59:	b8 01 00 00 00       	mov    $0x1,%eax
 8051a5e:	85 d2                	test   %edx,%edx
 8051a60:	74 0e                	je     8051a70 <main+0x7e50>
 8051a62:	83 c4 14             	add    $0x14,%esp
 8051a65:	5b                   	pop    %ebx
 8051a66:	5d                   	pop    %ebp
 8051a67:	c3                   	ret    
 8051a68:	90                   	nop
 8051a69:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8051a70:	89 1c 24             	mov    %ebx,(%esp)
 8051a73:	e8 dc 7f ff ff       	call   8049a54 <free@plt>
 8051a78:	83 c4 14             	add    $0x14,%esp
 8051a7b:	31 c0                	xor    %eax,%eax
 8051a7d:	5b                   	pop    %ebx
 8051a7e:	5d                   	pop    %ebp
 8051a7f:	c3                   	ret    
 8051a80:	55                   	push   %ebp
 8051a81:	89 e5                	mov    %esp,%ebp
 8051a83:	53                   	push   %ebx
 8051a84:	83 ec 14             	sub    $0x14,%esp
 8051a87:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8051a8a:	8b 45 08             	mov    0x8(%ebp),%eax
 8051a8d:	89 04 24             	mov    %eax,(%esp)
 8051a90:	e8 bf 7f ff ff       	call   8049a54 <free@plt>
 8051a95:	89 5d 08             	mov    %ebx,0x8(%ebp)
 8051a98:	83 c4 14             	add    $0x14,%esp
 8051a9b:	5b                   	pop    %ebx
 8051a9c:	5d                   	pop    %ebp
 8051a9d:	e9 b2 7f ff ff       	jmp    8049a54 <free@plt>
 8051aa2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8051aa9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8051ab0:	55                   	push   %ebp
 8051ab1:	89 e5                	mov    %esp,%ebp
 8051ab3:	83 ec 18             	sub    $0x18,%esp
 8051ab6:	83 f8 02             	cmp    $0x2,%eax
 8051ab9:	74 05                	je     8051ac0 <main+0x7ea0>
 8051abb:	c9                   	leave  
 8051abc:	c3                   	ret    
 8051abd:	8d 76 00             	lea    0x0(%esi),%esi
 8051ac0:	89 14 24             	mov    %edx,(%esp)
 8051ac3:	e8 8c 7f ff ff       	call   8049a54 <free@plt>
 8051ac8:	c9                   	leave  
 8051ac9:	c3                   	ret    
 8051aca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8051ad0:	55                   	push   %ebp
 8051ad1:	89 e5                	mov    %esp,%ebp
 8051ad3:	53                   	push   %ebx
 8051ad4:	83 ec 14             	sub    $0x14,%esp
 8051ad7:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8051ada:	8b 45 08             	mov    0x8(%ebp),%eax
 8051add:	89 04 24             	mov    %eax,(%esp)
 8051ae0:	e8 6f 7f ff ff       	call   8049a54 <free@plt>
 8051ae5:	8b 03                	mov    (%ebx),%eax
 8051ae7:	8b 53 04             	mov    0x4(%ebx),%edx
 8051aea:	e8 c1 ff ff ff       	call   8051ab0 <main+0x7e90>
 8051aef:	89 5d 08             	mov    %ebx,0x8(%ebp)
 8051af2:	83 c4 14             	add    $0x14,%esp
 8051af5:	5b                   	pop    %ebx
 8051af6:	5d                   	pop    %ebp
 8051af7:	e9 58 7f ff ff       	jmp    8049a54 <free@plt>
 8051afc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8051b00:	55                   	push   %ebp
 8051b01:	89 e5                	mov    %esp,%ebp
 8051b03:	53                   	push   %ebx
 8051b04:	83 ec 14             	sub    $0x14,%esp
 8051b07:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8051b0a:	8b 03                	mov    (%ebx),%eax
 8051b0c:	89 04 24             	mov    %eax,(%esp)
 8051b0f:	e8 40 7f ff ff       	call   8049a54 <free@plt>
 8051b14:	8b 43 08             	mov    0x8(%ebx),%eax
 8051b17:	85 c0                	test   %eax,%eax
 8051b19:	74 08                	je     8051b23 <main+0x7f03>
 8051b1b:	89 04 24             	mov    %eax,(%esp)
 8051b1e:	e8 6d bf ff ff       	call   804da90 <main+0x3e70>
 8051b23:	8b 43 04             	mov    0x4(%ebx),%eax
 8051b26:	85 c0                	test   %eax,%eax
 8051b28:	74 16                	je     8051b40 <main+0x7f20>
 8051b2a:	89 45 08             	mov    %eax,0x8(%ebp)
 8051b2d:	83 c4 14             	add    $0x14,%esp
 8051b30:	5b                   	pop    %ebx
 8051b31:	5d                   	pop    %ebp
 8051b32:	e9 59 bf ff ff       	jmp    804da90 <main+0x3e70>
 8051b37:	89 f6                	mov    %esi,%esi
 8051b39:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8051b40:	83 c4 14             	add    $0x14,%esp
 8051b43:	5b                   	pop    %ebx
 8051b44:	5d                   	pop    %ebp
 8051b45:	c3                   	ret    
 8051b46:	8d 76 00             	lea    0x0(%esi),%esi
 8051b49:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8051b50:	55                   	push   %ebp
 8051b51:	31 c0                	xor    %eax,%eax
 8051b53:	89 e5                	mov    %esp,%ebp
 8051b55:	57                   	push   %edi
 8051b56:	56                   	push   %esi
 8051b57:	53                   	push   %ebx
 8051b58:	83 ec 3c             	sub    $0x3c,%esp
 8051b5b:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8051b5e:	c7 04 03 00 00 00 00 	movl   $0x0,(%ebx,%eax,1)
 8051b65:	83 c0 04             	add    $0x4,%eax
 8051b68:	83 f8 20             	cmp    $0x20,%eax
 8051b6b:	72 f1                	jb     8051b5e <main+0x7f3e>
 8051b6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8051b70:	c7 44 24 04 2f 00 00 	movl   $0x2f,0x4(%esp)
 8051b77:	00 
 8051b78:	89 04 24             	mov    %eax,(%esp)
 8051b7b:	e8 d4 7a ff ff       	call   8049654 <strrchr@plt>
 8051b80:	85 c0                	test   %eax,%eax
 8051b82:	0f 84 c8 00 00 00    	je     8051c50 <main+0x8030>
 8051b88:	2b 45 0c             	sub    0xc(%ebp),%eax
 8051b8b:	8d 78 01             	lea    0x1(%eax),%edi
 8051b8e:	8d 47 01             	lea    0x1(%edi),%eax
 8051b91:	89 04 24             	mov    %eax,(%esp)
 8051b94:	e8 1b 7a ff ff       	call   80495b4 <malloc@plt>
 8051b99:	85 c0                	test   %eax,%eax
 8051b9b:	89 c6                	mov    %eax,%esi
 8051b9d:	89 c2                	mov    %eax,%edx
 8051b9f:	74 1d                	je     8051bbe <main+0x7f9e>
 8051ba1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8051ba4:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8051ba8:	89 34 24             	mov    %esi,(%esp)
 8051bab:	89 75 d4             	mov    %esi,-0x2c(%ebp)
 8051bae:	89 44 24 04          	mov    %eax,0x4(%esp)
 8051bb2:	e8 9d 7b ff ff       	call   8049754 <strncpy@plt>
 8051bb7:	c6 04 3e 00          	movb   $0x0,(%esi,%edi,1)
 8051bbb:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8051bbe:	89 33                	mov    %esi,(%ebx)
 8051bc0:	85 d2                	test   %edx,%edx
 8051bc2:	74 7a                	je     8051c3e <main+0x801e>
 8051bc4:	c7 44 24 0c d0 1a 05 	movl   $0x8051ad0,0xc(%esp)
 8051bcb:	08 
 8051bcc:	c7 44 24 08 20 d9 04 	movl   $0x804d920,0x8(%esp)
 8051bd3:	08 
 8051bd4:	c7 44 24 04 90 d8 04 	movl   $0x804d890,0x4(%esp)
 8051bdb:	08 
 8051bdc:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 8051be3:	e8 18 be ff ff       	call   804da00 <main+0x3de0>
 8051be8:	85 c0                	test   %eax,%eax
 8051bea:	89 43 08             	mov    %eax,0x8(%ebx)
 8051bed:	74 4f                	je     8051c3e <main+0x801e>
 8051bef:	c7 44 24 0c 80 1a 05 	movl   $0x8051a80,0xc(%esp)
 8051bf6:	08 
 8051bf7:	c7 44 24 08 20 d9 04 	movl   $0x804d920,0x8(%esp)
 8051bfe:	08 
 8051bff:	c7 44 24 04 90 d8 04 	movl   $0x804d890,0x4(%esp)
 8051c06:	08 
 8051c07:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 8051c0e:	e8 ed bd ff ff       	call   804da00 <main+0x3de0>
 8051c13:	85 c0                	test   %eax,%eax
 8051c15:	89 43 04             	mov    %eax,0x4(%ebx)
 8051c18:	74 24                	je     8051c3e <main+0x801e>
 8051c1a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8051c21:	00 
 8051c22:	c7 44 24 08 a0 2e 05 	movl   $0x8052ea0,0x8(%esp)
 8051c29:	08 
 8051c2a:	c7 44 24 04 d2 62 05 	movl   $0x80562d2,0x4(%esp)
 8051c31:	08 
 8051c32:	89 1c 24             	mov    %ebx,(%esp)
 8051c35:	e8 c6 fd ff ff       	call   8051a00 <main+0x7de0>
 8051c3a:	85 c0                	test   %eax,%eax
 8051c3c:	75 32                	jne    8051c70 <main+0x8050>
 8051c3e:	89 1c 24             	mov    %ebx,(%esp)
 8051c41:	e8 ba fe ff ff       	call   8051b00 <main+0x7ee0>
 8051c46:	31 c0                	xor    %eax,%eax
 8051c48:	83 c4 3c             	add    $0x3c,%esp
 8051c4b:	5b                   	pop    %ebx
 8051c4c:	5e                   	pop    %esi
 8051c4d:	5f                   	pop    %edi
 8051c4e:	5d                   	pop    %ebp
 8051c4f:	c3                   	ret    
 8051c50:	c7 04 24 f3 4b 05 08 	movl   $0x8054bf3,(%esp)
 8051c57:	e8 a8 7b ff ff       	call   8049804 <strdup@plt>
 8051c5c:	89 c2                	mov    %eax,%edx
 8051c5e:	89 03                	mov    %eax,(%ebx)
 8051c60:	e9 5b ff ff ff       	jmp    8051bc0 <main+0x7fa0>
 8051c65:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8051c69:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8051c70:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8051c77:	00 
 8051c78:	c7 44 24 08 80 1e 05 	movl   $0x8051e80,0x8(%esp)
 8051c7f:	08 
 8051c80:	c7 44 24 04 da 62 05 	movl   $0x80562da,0x4(%esp)
 8051c87:	08 
 8051c88:	89 1c 24             	mov    %ebx,(%esp)
 8051c8b:	e8 70 fd ff ff       	call   8051a00 <main+0x7de0>
 8051c90:	85 c0                	test   %eax,%eax
 8051c92:	74 aa                	je     8051c3e <main+0x801e>
 8051c94:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8051c9b:	00 
 8051c9c:	c7 44 24 08 30 1d 05 	movl   $0x8051d30,0x8(%esp)
 8051ca3:	08 
 8051ca4:	c7 44 24 04 e1 62 05 	movl   $0x80562e1,0x4(%esp)
 8051cab:	08 
 8051cac:	89 1c 24             	mov    %ebx,(%esp)
 8051caf:	e8 4c fd ff ff       	call   8051a00 <main+0x7de0>
 8051cb4:	85 c0                	test   %eax,%eax
 8051cb6:	74 86                	je     8051c3e <main+0x801e>
 8051cb8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8051cbb:	31 ff                	xor    %edi,%edi
 8051cbd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8051cc1:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 8051cc8:	e8 b7 77 ff ff       	call   8049484 <clock_gettime@plt>
 8051ccd:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8051cd0:	ba 83 de 1b 43       	mov    $0x431bde83,%edx
 8051cd5:	69 75 e0 e8 03 00 00 	imul   $0x3e8,-0x20(%ebp),%esi
 8051cdc:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 8051ce3:	00 
 8051ce4:	c7 44 24 04 eb 62 05 	movl   $0x80562eb,0x4(%esp)
 8051ceb:	08 
 8051cec:	89 c8                	mov    %ecx,%eax
 8051cee:	f7 ea                	imul   %edx
 8051cf0:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 8051cf5:	c1 f9 1f             	sar    $0x1f,%ecx
 8051cf8:	c1 fa 12             	sar    $0x12,%edx
 8051cfb:	29 ca                	sub    %ecx,%edx
 8051cfd:	8d 34 32             	lea    (%edx,%esi,1),%esi
 8051d00:	89 04 24             	mov    %eax,(%esp)
 8051d03:	e8 e8 b7 ff ff       	call   804d4f0 <main+0x38d0>
 8051d08:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 8051d0f:	69 c0 e8 03 00 00    	imul   $0x3e8,%eax,%eax
 8051d15:	89 c2                	mov    %eax,%edx
 8051d17:	c1 fa 1f             	sar    $0x1f,%edx
 8051d1a:	01 f0                	add    %esi,%eax
 8051d1c:	11 fa                	adc    %edi,%edx
 8051d1e:	89 43 10             	mov    %eax,0x10(%ebx)
 8051d21:	b8 01 00 00 00       	mov    $0x1,%eax
 8051d26:	89 53 14             	mov    %edx,0x14(%ebx)
 8051d29:	e9 1a ff ff ff       	jmp    8051c48 <main+0x8028>
 8051d2e:	66 90                	xchg   %ax,%ax
 8051d30:	55                   	push   %ebp
 8051d31:	89 e5                	mov    %esp,%ebp
 8051d33:	81 ec 88 00 00 00    	sub    $0x88,%esp
 8051d39:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 8051d3d:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8051d40:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8051d43:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8051d46:	8b 75 18             	mov    0x18(%ebp),%esi
 8051d49:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8051d4c:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8051d4f:	74 1f                	je     8051d70 <main+0x8150>
 8051d51:	31 db                	xor    %ebx,%ebx
 8051d53:	89 d8                	mov    %ebx,%eax
 8051d55:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8051d58:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8051d5b:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8051d5e:	89 ec                	mov    %ebp,%esp
 8051d60:	5d                   	pop    %ebp
 8051d61:	c3                   	ret    
 8051d62:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8051d69:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8051d70:	83 3b 02             	cmpl   $0x2,(%ebx)
 8051d73:	75 dc                	jne    8051d51 <main+0x8131>
 8051d75:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 8051d7c:	8b 43 04             	mov    0x4(%ebx),%eax
 8051d7f:	c7 06 01 00 00 00    	movl   $0x1,(%esi)
 8051d85:	89 04 24             	mov    %eax,(%esp)
 8051d88:	e8 37 7c ff ff       	call   80499c4 <strlen@plt>
 8051d8d:	89 c2                	mov    %eax,%edx
 8051d8f:	8b 07                	mov    (%edi),%eax
 8051d91:	89 55 94             	mov    %edx,-0x6c(%ebp)
 8051d94:	89 04 24             	mov    %eax,(%esp)
 8051d97:	e8 28 7c ff ff       	call   80499c4 <strlen@plt>
 8051d9c:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8051d9f:	8d 44 02 01          	lea    0x1(%edx,%eax,1),%eax
 8051da3:	89 04 24             	mov    %eax,(%esp)
 8051da6:	e8 09 78 ff ff       	call   80495b4 <malloc@plt>
 8051dab:	85 c0                	test   %eax,%eax
 8051dad:	89 c2                	mov    %eax,%edx
 8051daf:	74 a0                	je     8051d51 <main+0x8131>
 8051db1:	8b 43 04             	mov    0x4(%ebx),%eax
 8051db4:	bb 01 00 00 00       	mov    $0x1,%ebx
 8051db9:	89 55 94             	mov    %edx,-0x6c(%ebp)
 8051dbc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8051dc0:	8b 07                	mov    (%edi),%eax
 8051dc2:	89 14 24             	mov    %edx,(%esp)
 8051dc5:	c7 44 24 04 d8 4d 05 	movl   $0x8054dd8,0x4(%esp)
 8051dcc:	08 
 8051dcd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8051dd1:	e8 2e 7b ff ff       	call   8049904 <sprintf@plt>
 8051dd6:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8051dd9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8051de0:	00 
 8051de1:	89 14 24             	mov    %edx,(%esp)
 8051de4:	e8 eb 7b ff ff       	call   80499d4 <open@plt>
 8051de9:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8051dec:	89 14 24             	mov    %edx,(%esp)
 8051def:	89 c7                	mov    %eax,%edi
 8051df1:	e8 5e 7c ff ff       	call   8049a54 <free@plt>
 8051df6:	85 ff                	test   %edi,%edi
 8051df8:	0f 88 55 ff ff ff    	js     8051d53 <main+0x8133>
 8051dfe:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8051e01:	89 44 24 04          	mov    %eax,0x4(%esp)
 8051e05:	89 3c 24             	mov    %edi,(%esp)
 8051e08:	e8 87 78 ff ff       	call   8049694 <fstat@plt>
 8051e0d:	85 c0                	test   %eax,%eax
 8051e0f:	75 0f                	jne    8051e20 <main+0x8200>
 8051e11:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8051e14:	25 00 f0 00 00       	and    $0xf000,%eax
 8051e19:	3d 00 80 00 00       	cmp    $0x8000,%eax
 8051e1e:	74 0f                	je     8051e2f <main+0x820f>
 8051e20:	31 db                	xor    %ebx,%ebx
 8051e22:	89 3c 24             	mov    %edi,(%esp)
 8051e25:	e8 1a 7c ff ff       	call   8049a44 <close@plt>
 8051e2a:	e9 24 ff ff ff       	jmp    8051d53 <main+0x8133>
 8051e2f:	8b 55 a8             	mov    -0x58(%ebp),%edx
 8051e32:	8d 42 01             	lea    0x1(%edx),%eax
 8051e35:	89 55 94             	mov    %edx,-0x6c(%ebp)
 8051e38:	89 04 24             	mov    %eax,(%esp)
 8051e3b:	e8 74 77 ff ff       	call   80495b4 <malloc@plt>
 8051e40:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8051e43:	85 c0                	test   %eax,%eax
 8051e45:	89 c3                	mov    %eax,%ebx
 8051e47:	74 d7                	je     8051e20 <main+0x8200>
 8051e49:	89 54 24 08          	mov    %edx,0x8(%esp)
 8051e4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8051e51:	89 3c 24             	mov    %edi,(%esp)
 8051e54:	e8 db 78 ff ff       	call   8049734 <read@plt>
 8051e59:	85 c0                	test   %eax,%eax
 8051e5b:	74 c3                	je     8051e20 <main+0x8200>
 8051e5d:	c6 04 03 00          	movb   $0x0,(%ebx,%eax,1)
 8051e61:	89 5e 04             	mov    %ebx,0x4(%esi)
 8051e64:	bb 01 00 00 00       	mov    $0x1,%ebx
 8051e69:	c7 06 02 00 00 00    	movl   $0x2,(%esi)
 8051e6f:	eb b1                	jmp    8051e22 <main+0x8202>
 8051e71:	eb 0d                	jmp    8051e80 <main+0x8260>
 8051e73:	90                   	nop
 8051e74:	90                   	nop
 8051e75:	90                   	nop
 8051e76:	90                   	nop
 8051e77:	90                   	nop
 8051e78:	90                   	nop
 8051e79:	90                   	nop
 8051e7a:	90                   	nop
 8051e7b:	90                   	nop
 8051e7c:	90                   	nop
 8051e7d:	90                   	nop
 8051e7e:	90                   	nop
 8051e7f:	90                   	nop
 8051e80:	55                   	push   %ebp
 8051e81:	89 e5                	mov    %esp,%ebp
 8051e83:	81 ec 88 00 00 00    	sub    $0x88,%esp
 8051e89:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 8051e8d:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8051e90:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8051e93:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8051e96:	8b 75 18             	mov    0x18(%ebp),%esi
 8051e99:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8051e9c:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8051e9f:	74 0f                	je     8051eb0 <main+0x8290>
 8051ea1:	31 c0                	xor    %eax,%eax
 8051ea3:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8051ea6:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8051ea9:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8051eac:	89 ec                	mov    %ebp,%esp
 8051eae:	5d                   	pop    %ebp
 8051eaf:	c3                   	ret    
 8051eb0:	83 3b 02             	cmpl   $0x2,(%ebx)
 8051eb3:	75 ec                	jne    8051ea1 <main+0x8281>
 8051eb5:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 8051ebc:	8b 43 04             	mov    0x4(%ebx),%eax
 8051ebf:	c7 06 01 00 00 00    	movl   $0x1,(%esi)
 8051ec5:	89 04 24             	mov    %eax,(%esp)
 8051ec8:	e8 f7 7a ff ff       	call   80499c4 <strlen@plt>
 8051ecd:	89 c2                	mov    %eax,%edx
 8051ecf:	8b 07                	mov    (%edi),%eax
 8051ed1:	89 55 94             	mov    %edx,-0x6c(%ebp)
 8051ed4:	89 04 24             	mov    %eax,(%esp)
 8051ed7:	e8 e8 7a ff ff       	call   80499c4 <strlen@plt>
 8051edc:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8051edf:	8d 44 02 01          	lea    0x1(%edx,%eax,1),%eax
 8051ee3:	89 04 24             	mov    %eax,(%esp)
 8051ee6:	e8 c9 76 ff ff       	call   80495b4 <malloc@plt>
 8051eeb:	85 c0                	test   %eax,%eax
 8051eed:	89 c2                	mov    %eax,%edx
 8051eef:	74 b0                	je     8051ea1 <main+0x8281>
 8051ef1:	8b 43 04             	mov    0x4(%ebx),%eax
 8051ef4:	89 55 94             	mov    %edx,-0x6c(%ebp)
 8051ef7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8051efb:	8b 07                	mov    (%edi),%eax
 8051efd:	89 14 24             	mov    %edx,(%esp)
 8051f00:	c7 44 24 04 d8 4d 05 	movl   $0x8054dd8,0x4(%esp)
 8051f07:	08 
 8051f08:	89 44 24 08          	mov    %eax,0x8(%esp)
 8051f0c:	e8 f3 79 ff ff       	call   8049904 <sprintf@plt>
 8051f11:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8051f14:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8051f17:	89 44 24 04          	mov    %eax,0x4(%esp)
 8051f1b:	89 14 24             	mov    %edx,(%esp)
 8051f1e:	e8 21 7a ff ff       	call   8049944 <stat@plt>
 8051f23:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8051f26:	85 c0                	test   %eax,%eax
 8051f28:	75 0d                	jne    8051f37 <main+0x8317>
 8051f2a:	c7 06 01 00 00 00    	movl   $0x1,(%esi)
 8051f30:	c7 46 04 01 00 00 00 	movl   $0x1,0x4(%esi)
 8051f37:	89 14 24             	mov    %edx,(%esp)
 8051f3a:	89 55 94             	mov    %edx,-0x6c(%ebp)
 8051f3d:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8051f44:	00 
 8051f45:	e8 1a 7a ff ff       	call   8049964 <access@plt>
 8051f4a:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8051f4d:	85 c0                	test   %eax,%eax
 8051f4f:	74 0d                	je     8051f5e <main+0x833e>
 8051f51:	c7 06 01 00 00 00    	movl   $0x1,(%esi)
 8051f57:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 8051f5e:	89 14 24             	mov    %edx,(%esp)
 8051f61:	e8 ee 7a ff ff       	call   8049a54 <free@plt>
 8051f66:	b8 01 00 00 00       	mov    $0x1,%eax
 8051f6b:	e9 33 ff ff ff       	jmp    8051ea3 <main+0x8283>
 8051f70:	55                   	push   %ebp
 8051f71:	89 e5                	mov    %esp,%ebp
 8051f73:	83 ec 18             	sub    $0x18,%esp
 8051f76:	83 fa 01             	cmp    $0x1,%edx
 8051f79:	74 65                	je     8051fe0 <main+0x83c0>
 8051f7b:	83 fa 02             	cmp    $0x2,%edx
 8051f7e:	74 10                	je     8051f90 <main+0x8370>
 8051f80:	83 fa 03             	cmp    $0x3,%edx
 8051f83:	74 1b                	je     8051fa0 <main+0x8380>
 8051f85:	31 c0                	xor    %eax,%eax
 8051f87:	c9                   	leave  
 8051f88:	c3                   	ret    
 8051f89:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8051f90:	85 c9                	test   %ecx,%ecx
 8051f92:	74 f1                	je     8051f85 <main+0x8365>
 8051f94:	31 c0                	xor    %eax,%eax
 8051f96:	80 39 00             	cmpb   $0x0,(%ecx)
 8051f99:	c9                   	leave  
 8051f9a:	0f 95 c0             	setne  %al
 8051f9d:	c3                   	ret    
 8051f9e:	66 90                	xchg   %ax,%ax
 8051fa0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8051fa4:	8b 40 08             	mov    0x8(%eax),%eax
 8051fa7:	89 04 24             	mov    %eax,(%esp)
 8051faa:	e8 71 b8 ff ff       	call   804d820 <main+0x3c00>
 8051faf:	85 c0                	test   %eax,%eax
 8051fb1:	74 d2                	je     8051f85 <main+0x8365>
 8051fb3:	8b 10                	mov    (%eax),%edx
 8051fb5:	83 fa 01             	cmp    $0x1,%edx
 8051fb8:	74 36                	je     8051ff0 <main+0x83d0>
 8051fba:	83 fa 02             	cmp    $0x2,%edx
 8051fbd:	75 c6                	jne    8051f85 <main+0x8365>
 8051fbf:	8b 40 04             	mov    0x4(%eax),%eax
 8051fc2:	85 c0                	test   %eax,%eax
 8051fc4:	74 bf                	je     8051f85 <main+0x8365>
 8051fc6:	80 38 00             	cmpb   $0x0,(%eax)
 8051fc9:	c9                   	leave  
 8051fca:	0f 95 c0             	setne  %al
 8051fcd:	0f b6 c0             	movzbl %al,%eax
 8051fd0:	c3                   	ret    
 8051fd1:	eb 0d                	jmp    8051fe0 <main+0x83c0>
 8051fd3:	90                   	nop
 8051fd4:	90                   	nop
 8051fd5:	90                   	nop
 8051fd6:	90                   	nop
 8051fd7:	90                   	nop
 8051fd8:	90                   	nop
 8051fd9:	90                   	nop
 8051fda:	90                   	nop
 8051fdb:	90                   	nop
 8051fdc:	90                   	nop
 8051fdd:	90                   	nop
 8051fde:	90                   	nop
 8051fdf:	90                   	nop
 8051fe0:	31 c0                	xor    %eax,%eax
 8051fe2:	85 c9                	test   %ecx,%ecx
 8051fe4:	0f 95 c0             	setne  %al
 8051fe7:	c9                   	leave  
 8051fe8:	c3                   	ret    
 8051fe9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8051ff0:	8b 40 04             	mov    0x4(%eax),%eax
 8051ff3:	c9                   	leave  
 8051ff4:	85 c0                	test   %eax,%eax
 8051ff6:	0f 95 c0             	setne  %al
 8051ff9:	0f b6 c0             	movzbl %al,%eax
 8051ffc:	c3                   	ret    
 8051ffd:	8d 76 00             	lea    0x0(%esi),%esi
 8052000:	55                   	push   %ebp
 8052001:	89 e5                	mov    %esp,%ebp
 8052003:	83 ec 78             	sub    $0x78,%esp
 8052006:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8052009:	89 c3                	mov    %eax,%ebx
 805200b:	8b 45 08             	mov    0x8(%ebp),%eax
 805200e:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8052011:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8052014:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8052017:	83 f8 02             	cmp    $0x2,%eax
 805201a:	74 24                	je     8052040 <main+0x8420>
 805201c:	83 f8 01             	cmp    $0x1,%eax
 805201f:	74 3f                	je     8052060 <main+0x8440>
 8052021:	83 f8 03             	cmp    $0x3,%eax
 8052024:	74 5a                	je     8052080 <main+0x8460>
 8052026:	89 03                	mov    %eax,(%ebx)
 8052028:	89 4b 04             	mov    %ecx,0x4(%ebx)
 805202b:	89 d8                	mov    %ebx,%eax
 805202d:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8052030:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8052033:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8052036:	89 ec                	mov    %ebp,%esp
 8052038:	5d                   	pop    %ebp
 8052039:	c3                   	ret    
 805203a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8052040:	89 0c 24             	mov    %ecx,(%esp)
 8052043:	e8 bc 77 ff ff       	call   8049804 <strdup@plt>
 8052048:	be 02 00 00 00       	mov    $0x2,%esi
 805204d:	85 c0                	test   %eax,%eax
 805204f:	89 c1                	mov    %eax,%ecx
 8052051:	74 6d                	je     80520c0 <main+0x84a0>
 8052053:	89 33                	mov    %esi,(%ebx)
 8052055:	89 4b 04             	mov    %ecx,0x4(%ebx)
 8052058:	eb d1                	jmp    805202b <main+0x840b>
 805205a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8052060:	8d 75 a8             	lea    -0x58(%ebp),%esi
 8052063:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8052067:	c7 44 24 04 fd 62 05 	movl   $0x80562fd,0x4(%esp)
 805206e:	08 
 805206f:	89 34 24             	mov    %esi,(%esp)
 8052072:	e8 8d 78 ff ff       	call   8049904 <sprintf@plt>
 8052077:	89 34 24             	mov    %esi,(%esp)
 805207a:	eb c7                	jmp    8052043 <main+0x8423>
 805207c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8052080:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8052084:	8b 42 08             	mov    0x8(%edx),%eax
 8052087:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 805208a:	89 04 24             	mov    %eax,(%esp)
 805208d:	e8 8e b7 ff ff       	call   804d820 <main+0x3c00>
 8052092:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 8052095:	85 c0                	test   %eax,%eax
 8052097:	74 37                	je     80520d0 <main+0x84b0>
 8052099:	8b 30                	mov    (%eax),%esi
 805209b:	8b 78 04             	mov    0x4(%eax),%edi
 805209e:	89 d8                	mov    %ebx,%eax
 80520a0:	89 34 24             	mov    %esi,(%esp)
 80520a3:	89 7c 24 04          	mov    %edi,0x4(%esp)
 80520a7:	e8 54 ff ff ff       	call   8052000 <main+0x83e0>
 80520ac:	e9 7a ff ff ff       	jmp    805202b <main+0x840b>
 80520b1:	eb 0d                	jmp    80520c0 <main+0x84a0>
 80520b3:	90                   	nop
 80520b4:	90                   	nop
 80520b5:	90                   	nop
 80520b6:	90                   	nop
 80520b7:	90                   	nop
 80520b8:	90                   	nop
 80520b9:	90                   	nop
 80520ba:	90                   	nop
 80520bb:	90                   	nop
 80520bc:	90                   	nop
 80520bd:	90                   	nop
 80520be:	90                   	nop
 80520bf:	90                   	nop
 80520c0:	31 c9                	xor    %ecx,%ecx
 80520c2:	66 31 f6             	xor    %si,%si
 80520c5:	eb 8c                	jmp    8052053 <main+0x8433>
 80520c7:	89 f6                	mov    %esi,%esi
 80520c9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 80520d0:	c7 03 00 00 00 00    	movl   $0x0,(%ebx)
 80520d6:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 80520dd:	e9 49 ff ff ff       	jmp    805202b <main+0x840b>
 80520e2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 80520e9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 80520f0:	55                   	push   %ebp
 80520f1:	89 e5                	mov    %esp,%ebp
 80520f3:	83 ec 38             	sub    $0x38,%esp
 80520f6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 80520f9:	89 c3                	mov    %eax,%ebx
 80520fb:	8b 45 08             	mov    0x8(%ebp),%eax
 80520fe:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8052101:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8052104:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8052107:	83 f8 02             	cmp    $0x2,%eax
 805210a:	74 64                	je     8052170 <main+0x8550>
 805210c:	83 f8 01             	cmp    $0x1,%eax
 805210f:	74 1f                	je     8052130 <main+0x8510>
 8052111:	83 f8 03             	cmp    $0x3,%eax
 8052114:	74 2a                	je     8052140 <main+0x8520>
 8052116:	89 03                	mov    %eax,(%ebx)
 8052118:	89 4b 04             	mov    %ecx,0x4(%ebx)
 805211b:	89 d8                	mov    %ebx,%eax
 805211d:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8052120:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8052123:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8052126:	89 ec                	mov    %ebp,%esp
 8052128:	5d                   	pop    %ebp
 8052129:	c3                   	ret    
 805212a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8052130:	c7 03 01 00 00 00    	movl   $0x1,(%ebx)
 8052136:	89 4b 04             	mov    %ecx,0x4(%ebx)
 8052139:	eb e0                	jmp    805211b <main+0x84fb>
 805213b:	90                   	nop
 805213c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8052140:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8052144:	8b 42 08             	mov    0x8(%edx),%eax
 8052147:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 805214a:	89 04 24             	mov    %eax,(%esp)
 805214d:	e8 ce b6 ff ff       	call   804d820 <main+0x3c00>
 8052152:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8052155:	85 c0                	test   %eax,%eax
 8052157:	74 47                	je     80521a0 <main+0x8580>
 8052159:	8b 30                	mov    (%eax),%esi
 805215b:	8b 78 04             	mov    0x4(%eax),%edi
 805215e:	89 d8                	mov    %ebx,%eax
 8052160:	89 34 24             	mov    %esi,(%esp)
 8052163:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8052167:	e8 84 ff ff ff       	call   80520f0 <main+0x84d0>
 805216c:	eb ad                	jmp    805211b <main+0x84fb>
 805216e:	66 90                	xchg   %ax,%ax
 8052170:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8052177:	00 
 8052178:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 805217f:	00 
 8052180:	89 0c 24             	mov    %ecx,(%esp)
 8052183:	e8 ac 74 ff ff       	call   8049634 <strtol@plt>
 8052188:	c7 03 01 00 00 00    	movl   $0x1,(%ebx)
 805218e:	89 43 04             	mov    %eax,0x4(%ebx)
 8052191:	eb 88                	jmp    805211b <main+0x84fb>
 8052193:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8052199:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 80521a0:	c7 03 00 00 00 00    	movl   $0x0,(%ebx)
 80521a6:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 80521ad:	e9 69 ff ff ff       	jmp    805211b <main+0x84fb>
 80521b2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 80521b9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 80521c0:	55                   	push   %ebp
 80521c1:	89 e5                	mov    %esp,%ebp
 80521c3:	83 ec 38             	sub    $0x38,%esp
 80521c6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 80521c9:	89 c3                	mov    %eax,%ebx
 80521cb:	8b 45 08             	mov    0x8(%ebp),%eax
 80521ce:	89 75 f8             	mov    %esi,-0x8(%ebp)
 80521d1:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 80521d4:	89 7d fc             	mov    %edi,-0x4(%ebp)
 80521d7:	83 f8 02             	cmp    $0x2,%eax
 80521da:	74 64                	je     8052240 <main+0x8620>
 80521dc:	83 f8 01             	cmp    $0x1,%eax
 80521df:	74 7f                	je     8052260 <main+0x8640>
 80521e1:	83 f8 03             	cmp    $0x3,%eax
 80521e4:	74 2a                	je     8052210 <main+0x85f0>
 80521e6:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 80521ed:	c7 03 04 00 00 00    	movl   $0x4,(%ebx)
 80521f3:	89 d8                	mov    %ebx,%eax
 80521f5:	8b 75 f8             	mov    -0x8(%ebp),%esi
 80521f8:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 80521fb:	8b 7d fc             	mov    -0x4(%ebp),%edi
 80521fe:	89 ec                	mov    %ebp,%esp
 8052200:	5d                   	pop    %ebp
 8052201:	c3                   	ret    
 8052202:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8052209:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8052210:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8052214:	8b 42 08             	mov    0x8(%edx),%eax
 8052217:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 805221a:	89 04 24             	mov    %eax,(%esp)
 805221d:	e8 fe b5 ff ff       	call   804d820 <main+0x3c00>
 8052222:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8052225:	85 c0                	test   %eax,%eax
 8052227:	74 bd                	je     80521e6 <main+0x85c6>
 8052229:	8b 30                	mov    (%eax),%esi
 805222b:	8b 78 04             	mov    0x4(%eax),%edi
 805222e:	89 d8                	mov    %ebx,%eax
 8052230:	89 34 24             	mov    %esi,(%esp)
 8052233:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8052237:	e8 84 ff ff ff       	call   80521c0 <main+0x85a0>
 805223c:	eb b5                	jmp    80521f3 <main+0x85d3>
 805223e:	66 90                	xchg   %ax,%ax
 8052240:	89 d8                	mov    %ebx,%eax
 8052242:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 8052249:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 805224d:	e8 ae fd ff ff       	call   8052000 <main+0x83e0>
 8052252:	eb 9f                	jmp    80521f3 <main+0x85d3>
 8052254:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 805225a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 8052260:	89 d8                	mov    %ebx,%eax
 8052262:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8052269:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 805226d:	e8 7e fe ff ff       	call   80520f0 <main+0x84d0>
 8052272:	e9 7c ff ff ff       	jmp    80521f3 <main+0x85d3>
 8052277:	89 f6                	mov    %esi,%esi
 8052279:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8052280:	55                   	push   %ebp
 8052281:	89 e5                	mov    %esp,%ebp
 8052283:	57                   	push   %edi
 8052284:	56                   	push   %esi
 8052285:	53                   	push   %ebx
 8052286:	83 ec 6c             	sub    $0x6c,%esp
 8052289:	8b 7d 10             	mov    0x10(%ebp),%edi
 805228c:	85 ff                	test   %edi,%edi
 805228e:	0f 84 ac 02 00 00    	je     8052540 <main+0x8920>
 8052294:	83 3f 05             	cmpl   $0x5,(%edi)
 8052297:	76 27                	jbe    80522c0 <main+0x86a0>
 8052299:	8b 45 08             	mov    0x8(%ebp),%eax
 805229c:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 80522a3:	c7 00 04 00 00 00    	movl   $0x4,(%eax)
 80522a9:	8b 45 08             	mov    0x8(%ebp),%eax
 80522ac:	8d 65 f4             	lea    -0xc(%ebp),%esp
 80522af:	5b                   	pop    %ebx
 80522b0:	5e                   	pop    %esi
 80522b1:	5f                   	pop    %edi
 80522b2:	5d                   	pop    %ebp
 80522b3:	c2 04 00             	ret    $0x4
 80522b6:	8d 76 00             	lea    0x0(%esi),%esi
 80522b9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 80522c0:	8b 07                	mov    (%edi),%eax
 80522c2:	ff 24 85 14 63 05 08 	jmp    *0x8056314(,%eax,4)
 80522c9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 80522d0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80522d3:	89 45 c8             	mov    %eax,-0x38(%ebp)
 80522d6:	8b 47 10             	mov    0x10(%edi),%eax
 80522d9:	89 44 24 08          	mov    %eax,0x8(%esp)
 80522dd:	8b 55 0c             	mov    0xc(%ebp),%edx
 80522e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 80522e4:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 80522e7:	89 0c 24             	mov    %ecx,(%esp)
 80522ea:	e8 91 ff ff ff       	call   8052280 <main+0x8660>
 80522ef:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80522f2:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 80522f5:	89 45 bc             	mov    %eax,-0x44(%ebp)
 80522f8:	89 55 b8             	mov    %edx,-0x48(%ebp)
 80522fb:	8b 47 0c             	mov    0xc(%edi),%eax
 80522fe:	83 ec 04             	sub    $0x4,%esp
 8052301:	89 44 24 08          	mov    %eax,0x8(%esp)
 8052305:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8052308:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 805230c:	8b 45 c8             	mov    -0x38(%ebp),%eax
 805230f:	89 04 24             	mov    %eax,(%esp)
 8052312:	e8 69 ff ff ff       	call   8052280 <main+0x8660>
 8052317:	8b 7f 08             	mov    0x8(%edi),%edi
 805231a:	8b 55 d0             	mov    -0x30(%ebp),%edx
 805231d:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 8052320:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 8052323:	83 ec 04             	sub    $0x4,%esp
 8052326:	83 ff 13             	cmp    $0x13,%edi
 8052329:	89 4d c0             	mov    %ecx,-0x40(%ebp)
 805232c:	0f 86 ae 02 00 00    	jbe    80525e0 <main+0x89c0>
 8052332:	31 f6                	xor    %esi,%esi
 8052334:	c7 45 b4 04 00 00 00 	movl   $0x4,-0x4c(%ebp)
 805233b:	90                   	nop
 805233c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8052340:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8052343:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8052346:	e8 65 f7 ff ff       	call   8051ab0 <main+0x7e90>
 805234b:	8b 45 bc             	mov    -0x44(%ebp),%eax
 805234e:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8052351:	e8 5a f7 ff ff       	call   8051ab0 <main+0x7e90>
 8052356:	8b 5d b4             	mov    -0x4c(%ebp),%ebx
 8052359:	8b 55 08             	mov    0x8(%ebp),%edx
 805235c:	8b 45 08             	mov    0x8(%ebp),%eax
 805235f:	89 1a                	mov    %ebx,(%edx)
 8052361:	89 72 04             	mov    %esi,0x4(%edx)
 8052364:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8052367:	5b                   	pop    %ebx
 8052368:	5e                   	pop    %esi
 8052369:	5f                   	pop    %edi
 805236a:	5d                   	pop    %ebp
 805236b:	c2 04 00             	ret    $0x4
 805236e:	66 90                	xchg   %ax,%ax
 8052370:	8b 47 08             	mov    0x8(%edi),%eax
 8052373:	8b 5f 0c             	mov    0xc(%edi),%ebx
 8052376:	89 44 24 04          	mov    %eax,0x4(%esp)
 805237a:	8b 55 0c             	mov    0xc(%ebp),%edx
 805237d:	8b 42 04             	mov    0x4(%edx),%eax
 8052380:	89 04 24             	mov    %eax,(%esp)
 8052383:	e8 98 b4 ff ff       	call   804d820 <main+0x3c00>
 8052388:	85 c0                	test   %eax,%eax
 805238a:	89 45 bc             	mov    %eax,-0x44(%ebp)
 805238d:	0f 84 dd 04 00 00    	je     8052870 <main+0x8c50>
 8052393:	31 ff                	xor    %edi,%edi
 8052395:	85 db                	test   %ebx,%ebx
 8052397:	89 d8                	mov    %ebx,%eax
 8052399:	0f 84 2f 06 00 00    	je     80529ce <main+0x8dae>
 805239f:	90                   	nop
 80523a0:	8b 40 04             	mov    0x4(%eax),%eax
 80523a3:	83 c7 01             	add    $0x1,%edi
 80523a6:	85 c0                	test   %eax,%eax
 80523a8:	75 f6                	jne    80523a0 <main+0x8780>
 80523aa:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 80523b1:	00 
 80523b2:	89 3c 24             	mov    %edi,(%esp)
 80523b5:	e8 aa 72 ff ff       	call   8049664 <calloc@plt>
 80523ba:	85 c0                	test   %eax,%eax
 80523bc:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 80523bf:	0f 84 d4 fe ff ff    	je     8052299 <main+0x8679>
 80523c5:	85 db                	test   %ebx,%ebx
 80523c7:	0f 84 8b 05 00 00    	je     8052958 <main+0x8d38>
 80523cd:	8d 55 d0             	lea    -0x30(%ebp),%edx
 80523d0:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 80523d3:	89 7d b8             	mov    %edi,-0x48(%ebp)
 80523d6:	bf 01 00 00 00       	mov    $0x1,%edi
 80523db:	c7 45 c0 01 00 00 00 	movl   $0x1,-0x40(%ebp)
 80523e2:	89 55 c8             	mov    %edx,-0x38(%ebp)
 80523e5:	eb 25                	jmp    805240c <main+0x87ec>
 80523e7:	89 f6                	mov    %esi,%esi
 80523e9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 80523f0:	83 f8 04             	cmp    $0x4,%eax
 80523f3:	8b 5b 04             	mov    0x4(%ebx),%ebx
 80523f6:	0f 94 c0             	sete   %al
 80523f9:	83 c6 08             	add    $0x8,%esi
 80523fc:	0f b6 c0             	movzbl %al,%eax
 80523ff:	83 e8 01             	sub    $0x1,%eax
 8052402:	21 c7                	and    %eax,%edi
 8052404:	85 db                	test   %ebx,%ebx
 8052406:	0f 84 54 01 00 00    	je     8052560 <main+0x8940>
 805240c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8052410:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8052413:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8052417:	8b 45 c8             	mov    -0x38(%ebp),%eax
 805241a:	89 04 24             	mov    %eax,(%esp)
 805241d:	e8 5e fe ff ff       	call   8052280 <main+0x8660>
 8052422:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8052425:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 8052428:	89 d0                	mov    %edx,%eax
 805242a:	89 16                	mov    %edx,(%esi)
 805242c:	83 ec 04             	sub    $0x4,%esp
 805242f:	83 fa 03             	cmp    $0x3,%edx
 8052432:	89 4e 04             	mov    %ecx,0x4(%esi)
 8052435:	75 b9                	jne    80523f0 <main+0x87d0>
 8052437:	89 14 24             	mov    %edx,(%esp)
 805243a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 805243e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8052441:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8052444:	e8 77 fd ff ff       	call   80521c0 <main+0x85a0>
 8052449:	8b 45 d0             	mov    -0x30(%ebp),%eax
 805244c:	89 c2                	mov    %eax,%edx
 805244e:	89 06                	mov    %eax,(%esi)
 8052450:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8052453:	89 46 04             	mov    %eax,0x4(%esi)
 8052456:	89 d0                	mov    %edx,%eax
 8052458:	eb 96                	jmp    80523f0 <main+0x87d0>
 805245a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8052460:	8b 47 08             	mov    0x8(%edi),%eax
 8052463:	bb 02 00 00 00       	mov    $0x2,%ebx
 8052468:	89 04 24             	mov    %eax,(%esp)
 805246b:	e8 94 73 ff ff       	call   8049804 <strdup@plt>
 8052470:	85 c0                	test   %eax,%eax
 8052472:	89 c1                	mov    %eax,%ecx
 8052474:	0f 84 26 05 00 00    	je     80529a0 <main+0x8d80>
 805247a:	8b 45 08             	mov    0x8(%ebp),%eax
 805247d:	89 18                	mov    %ebx,(%eax)
 805247f:	89 48 04             	mov    %ecx,0x4(%eax)
 8052482:	8b 45 08             	mov    0x8(%ebp),%eax
 8052485:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8052488:	5b                   	pop    %ebx
 8052489:	5e                   	pop    %esi
 805248a:	5f                   	pop    %edi
 805248b:	5d                   	pop    %ebp
 805248c:	c2 04 00             	ret    $0x4
 805248f:	90                   	nop
 8052490:	8b 45 08             	mov    0x8(%ebp),%eax
 8052493:	ba 01 00 00 00       	mov    $0x1,%edx
 8052498:	8b 4f 08             	mov    0x8(%edi),%ecx
 805249b:	89 10                	mov    %edx,(%eax)
 805249d:	89 48 04             	mov    %ecx,0x4(%eax)
 80524a0:	8b 45 08             	mov    0x8(%ebp),%eax
 80524a3:	8d 65 f4             	lea    -0xc(%ebp),%esp
 80524a6:	5b                   	pop    %ebx
 80524a7:	5e                   	pop    %esi
 80524a8:	5f                   	pop    %edi
 80524a9:	5d                   	pop    %ebp
 80524aa:	c2 04 00             	ret    $0x4
 80524ad:	8d 76 00             	lea    0x0(%esi),%esi
 80524b0:	8b 47 0c             	mov    0xc(%edi),%eax
 80524b3:	8d 75 d0             	lea    -0x30(%ebp),%esi
 80524b6:	89 44 24 08          	mov    %eax,0x8(%esp)
 80524ba:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 80524bd:	89 34 24             	mov    %esi,(%esp)
 80524c0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80524c4:	e8 b7 fd ff ff       	call   8052280 <main+0x8660>
 80524c9:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80524cc:	8b 5f 08             	mov    0x8(%edi),%ebx
 80524cf:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 80524d2:	89 c1                	mov    %eax,%ecx
 80524d4:	83 ec 04             	sub    $0x4,%esp
 80524d7:	83 f8 03             	cmp    $0x3,%eax
 80524da:	0f 84 d0 04 00 00    	je     80529b0 <main+0x8d90>
 80524e0:	83 fb 11             	cmp    $0x11,%ebx
 80524e3:	0f 84 67 04 00 00    	je     8052950 <main+0x8d30>
 80524e9:	83 fb 12             	cmp    $0x12,%ebx
 80524ec:	0f 84 4e 04 00 00    	je     8052940 <main+0x8d20>
 80524f2:	83 fb 10             	cmp    $0x10,%ebx
 80524f5:	0f 84 f5 00 00 00    	je     80525f0 <main+0x89d0>
 80524fb:	31 d2                	xor    %edx,%edx
 80524fd:	b9 04 00 00 00       	mov    $0x4,%ecx
 8052502:	89 c8                	mov    %ecx,%eax
 8052504:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8052507:	89 01                	mov    %eax,(%ecx)
 8052509:	8b 45 08             	mov    0x8(%ebp),%eax
 805250c:	89 51 04             	mov    %edx,0x4(%ecx)
 805250f:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8052512:	5b                   	pop    %ebx
 8052513:	5e                   	pop    %esi
 8052514:	5f                   	pop    %edi
 8052515:	5d                   	pop    %ebp
 8052516:	c2 04 00             	ret    $0x4
 8052519:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8052520:	8b 45 08             	mov    0x8(%ebp),%eax
 8052523:	ba 03 00 00 00       	mov    $0x3,%edx
 8052528:	8b 4f 08             	mov    0x8(%edi),%ecx
 805252b:	89 10                	mov    %edx,(%eax)
 805252d:	89 48 04             	mov    %ecx,0x4(%eax)
 8052530:	8b 45 08             	mov    0x8(%ebp),%eax
 8052533:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8052536:	5b                   	pop    %ebx
 8052537:	5e                   	pop    %esi
 8052538:	5f                   	pop    %edi
 8052539:	5d                   	pop    %ebp
 805253a:	c2 04 00             	ret    $0x4
 805253d:	8d 76 00             	lea    0x0(%esi),%esi
 8052540:	8b 45 08             	mov    0x8(%ebp),%eax
 8052543:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8052549:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8052550:	8b 45 08             	mov    0x8(%ebp),%eax
 8052553:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8052556:	5b                   	pop    %ebx
 8052557:	5e                   	pop    %esi
 8052558:	5f                   	pop    %edi
 8052559:	5d                   	pop    %ebp
 805255a:	c2 04 00             	ret    $0x4
 805255d:	8d 76 00             	lea    0x0(%esi),%esi
 8052560:	89 7d c0             	mov    %edi,-0x40(%ebp)
 8052563:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 8052566:	8b 7d b8             	mov    -0x48(%ebp),%edi
 8052569:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8052570:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8052577:	85 c9                	test   %ecx,%ecx
 8052579:	0f 85 e7 03 00 00    	jne    8052966 <main+0x8d46>
 805257f:	85 ff                	test   %edi,%edi
 8052581:	74 21                	je     80525a4 <main+0x8984>
 8052583:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 8052586:	31 db                	xor    %ebx,%ebx
 8052588:	90                   	nop
 8052589:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8052590:	8b 06                	mov    (%esi),%eax
 8052592:	83 c3 01             	add    $0x1,%ebx
 8052595:	8b 56 04             	mov    0x4(%esi),%edx
 8052598:	83 c6 08             	add    $0x8,%esi
 805259b:	e8 10 f5 ff ff       	call   8051ab0 <main+0x7e90>
 80525a0:	39 fb                	cmp    %edi,%ebx
 80525a2:	72 ec                	jb     8052590 <main+0x8970>
 80525a4:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 80525a7:	89 0c 24             	mov    %ecx,(%esp)
 80525aa:	e8 a5 74 ff ff       	call   8049a54 <free@plt>
 80525af:	8b 55 c0             	mov    -0x40(%ebp),%edx
 80525b2:	85 d2                	test   %edx,%edx
 80525b4:	75 0e                	jne    80525c4 <main+0x89a4>
 80525b6:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 80525bd:	c7 45 e0 04 00 00 00 	movl   $0x4,-0x20(%ebp)
 80525c4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80525c7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80525ca:	8b 4d 08             	mov    0x8(%ebp),%ecx
 80525cd:	89 01                	mov    %eax,(%ecx)
 80525cf:	8b 45 08             	mov    0x8(%ebp),%eax
 80525d2:	89 51 04             	mov    %edx,0x4(%ecx)
 80525d5:	8d 65 f4             	lea    -0xc(%ebp),%esp
 80525d8:	5b                   	pop    %ebx
 80525d9:	5e                   	pop    %esi
 80525da:	5f                   	pop    %edi
 80525db:	5d                   	pop    %ebp
 80525dc:	c2 04 00             	ret    $0x4
 80525df:	90                   	nop
 80525e0:	ff 24 bd 2c 63 05 08 	jmp    *0x805632c(,%edi,4)
 80525e7:	89 f6                	mov    %esi,%esi
 80525e9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 80525f0:	f7 da                	neg    %edx
 80525f2:	e9 0b ff ff ff       	jmp    8052502 <main+0x88e2>
 80525f7:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 80525fa:	31 f6                	xor    %esi,%esi
 80525fc:	89 04 24             	mov    %eax,(%esp)
 80525ff:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8052602:	89 54 24 04          	mov    %edx,0x4(%esp)
 8052606:	8b 55 0c             	mov    0xc(%ebp),%edx
 8052609:	8b 45 c8             	mov    -0x38(%ebp),%eax
 805260c:	e8 ef f9 ff ff       	call   8052000 <main+0x83e0>
 8052611:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 8052614:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8052617:	8b 55 bc             	mov    -0x44(%ebp),%edx
 805261a:	89 4d b0             	mov    %ecx,-0x50(%ebp)
 805261d:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8052620:	89 14 24             	mov    %edx,(%esp)
 8052623:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 8052626:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 805262a:	8b 55 0c             	mov    0xc(%ebp),%edx
 805262d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8052630:	e8 cb f9 ff ff       	call   8052000 <main+0x83e0>
 8052635:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8052638:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 805263b:	83 7d b0 02          	cmpl   $0x2,-0x50(%ebp)
 805263f:	c7 45 b4 04 00 00 00 	movl   $0x4,-0x4c(%ebp)
 8052646:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8052649:	89 55 cc             	mov    %edx,-0x34(%ebp)
 805264c:	0f 84 02 04 00 00    	je     8052a54 <main+0x8e34>
 8052652:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8052655:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8052658:	e8 53 f4 ff ff       	call   8051ab0 <main+0x7e90>
 805265d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8052660:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8052663:	e8 48 f4 ff ff       	call   8051ab0 <main+0x7e90>
 8052668:	e9 d3 fc ff ff       	jmp    8052340 <main+0x8720>
 805266d:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8052670:	83 f8 03             	cmp    $0x3,%eax
 8052673:	0f 84 a6 04 00 00    	je     8052b1f <main+0x8eff>
 8052679:	83 f8 02             	cmp    $0x2,%eax
 805267c:	0f 84 53 03 00 00    	je     80529d5 <main+0x8db5>
 8052682:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8052685:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8052688:	83 f8 03             	cmp    $0x3,%eax
 805268b:	0f 84 b2 04 00 00    	je     8052b43 <main+0x8f23>
 8052691:	83 f8 02             	cmp    $0x2,%eax
 8052694:	0f 84 3b 03 00 00    	je     80529d5 <main+0x8db5>
 805269a:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 805269d:	89 0c 24             	mov    %ecx,(%esp)
 80526a0:	8b 45 c0             	mov    -0x40(%ebp),%eax
 80526a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80526a7:	8b 55 0c             	mov    0xc(%ebp),%edx
 80526aa:	8b 45 c8             	mov    -0x38(%ebp),%eax
 80526ad:	e8 3e fa ff ff       	call   80520f0 <main+0x84d0>
 80526b2:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 80526b5:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 80526b8:	89 55 ac             	mov    %edx,-0x54(%ebp)
 80526bb:	89 0c 24             	mov    %ecx,(%esp)
 80526be:	8b 45 b8             	mov    -0x48(%ebp),%eax
 80526c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80526c5:	8b 55 0c             	mov    0xc(%ebp),%edx
 80526c8:	8b 45 c8             	mov    -0x38(%ebp),%eax
 80526cb:	e8 20 fa ff ff       	call   80520f0 <main+0x84d0>
 80526d0:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 80526d3:	83 ff 08             	cmp    $0x8,%edi
 80526d6:	89 55 cc             	mov    %edx,-0x34(%ebp)
 80526d9:	0f 84 85 04 00 00    	je     8052b64 <main+0x8f44>
 80526df:	0f 87 d1 03 00 00    	ja     8052ab6 <main+0x8e96>
 80526e5:	83 ff 07             	cmp    $0x7,%edi
 80526e8:	0f 84 97 04 00 00    	je     8052b85 <main+0x8f65>
 80526ee:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 80526f1:	39 4d cc             	cmp    %ecx,-0x34(%ebp)
 80526f4:	0f 94 c1             	sete   %cl
 80526f7:	0f b6 c9             	movzbl %cl,%ecx
 80526fa:	b8 01 00 00 00       	mov    $0x1,%eax
 80526ff:	89 ce                	mov    %ecx,%esi
 8052701:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8052704:	e9 37 fc ff ff       	jmp    8052340 <main+0x8720>
 8052709:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 805270c:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 805270f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8052712:	e8 59 f8 ff ff       	call   8051f70 <main+0x8350>
 8052717:	85 c0                	test   %eax,%eax
 8052719:	0f 85 66 01 00 00    	jne    8052885 <main+0x8c65>
 805271f:	31 c0                	xor    %eax,%eax
 8052721:	89 c6                	mov    %eax,%esi
 8052723:	c7 45 b4 01 00 00 00 	movl   $0x1,-0x4c(%ebp)
 805272a:	e9 11 fc ff ff       	jmp    8052340 <main+0x8720>
 805272f:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8052732:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 8052735:	8b 45 0c             	mov    0xc(%ebp),%eax
 8052738:	e8 33 f8 ff ff       	call   8051f70 <main+0x8350>
 805273d:	85 c0                	test   %eax,%eax
 805273f:	0f 84 f0 02 00 00    	je     8052a35 <main+0x8e15>
 8052745:	b8 01 00 00 00       	mov    $0x1,%eax
 805274a:	eb d5                	jmp    8052721 <main+0x8b01>
 805274c:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 805274f:	31 f6                	xor    %esi,%esi
 8052751:	89 04 24             	mov    %eax,(%esp)
 8052754:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8052757:	89 54 24 04          	mov    %edx,0x4(%esp)
 805275b:	8b 55 0c             	mov    0xc(%ebp),%edx
 805275e:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8052761:	e8 8a f9 ff ff       	call   80520f0 <main+0x84d0>
 8052766:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 8052769:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 805276c:	8b 55 bc             	mov    -0x44(%ebp),%edx
 805276f:	89 4d b0             	mov    %ecx,-0x50(%ebp)
 8052772:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8052775:	89 14 24             	mov    %edx,(%esp)
 8052778:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 805277b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 805277f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8052782:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8052785:	e8 66 f9 ff ff       	call   80520f0 <main+0x84d0>
 805278a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 805278d:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8052790:	83 7d b0 01          	cmpl   $0x1,-0x50(%ebp)
 8052794:	c7 45 b4 04 00 00 00 	movl   $0x4,-0x4c(%ebp)
 805279b:	89 45 c8             	mov    %eax,-0x38(%ebp)
 805279e:	89 55 cc             	mov    %edx,-0x34(%ebp)
 80527a1:	0f 85 99 fb ff ff    	jne    8052340 <main+0x8720>
 80527a7:	83 f8 01             	cmp    $0x1,%eax
 80527aa:	0f 85 90 fb ff ff    	jne    8052340 <main+0x8720>
 80527b0:	83 ef 03             	sub    $0x3,%edi
 80527b3:	83 ff 0c             	cmp    $0xc,%edi
 80527b6:	0f 87 76 fb ff ff    	ja     8052332 <main+0x8712>
 80527bc:	ff 24 bd 7c 63 05 08 	jmp    *0x805637c(,%edi,4)
 80527c3:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 80527c9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 80527d0:	31 f6                	xor    %esi,%esi
 80527d2:	83 7d c4 03          	cmpl   $0x3,-0x3c(%ebp)
 80527d6:	c7 45 b4 04 00 00 00 	movl   $0x4,-0x4c(%ebp)
 80527dd:	0f 85 5d fb ff ff    	jne    8052340 <main+0x8720>
 80527e3:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 80527ea:	e8 c5 6d ff ff       	call   80495b4 <malloc@plt>
 80527ef:	85 c0                	test   %eax,%eax
 80527f1:	89 c3                	mov    %eax,%ebx
 80527f3:	74 6d                	je     8052862 <main+0x8c42>
 80527f5:	8b 45 bc             	mov    -0x44(%ebp),%eax
 80527f8:	89 04 24             	mov    %eax,(%esp)
 80527fb:	8b 55 b8             	mov    -0x48(%ebp),%edx
 80527fe:	89 54 24 04          	mov    %edx,0x4(%esp)
 8052802:	8b 55 0c             	mov    0xc(%ebp),%edx
 8052805:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8052808:	e8 b3 f9 ff ff       	call   80521c0 <main+0x85a0>
 805280d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8052810:	89 c2                	mov    %eax,%edx
 8052812:	89 03                	mov    %eax,(%ebx)
 8052814:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8052817:	83 fa 04             	cmp    $0x4,%edx
 805281a:	89 43 04             	mov    %eax,0x4(%ebx)
 805281d:	74 31                	je     8052850 <main+0x8c30>
 805281f:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 8052822:	89 0c 24             	mov    %ecx,(%esp)
 8052825:	e8 da 6f ff ff       	call   8049804 <strdup@plt>
 805282a:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8052831:	00 
 8052832:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8052836:	89 44 24 04          	mov    %eax,0x4(%esp)
 805283a:	8b 55 0c             	mov    0xc(%ebp),%edx
 805283d:	8b 42 08             	mov    0x8(%edx),%eax
 8052840:	89 04 24             	mov    %eax,(%esp)
 8052843:	e8 e8 b0 ff ff       	call   804d930 <main+0x3d10>
 8052848:	85 c0                	test   %eax,%eax
 805284a:	0f 85 53 03 00 00    	jne    8052ba3 <main+0x8f83>
 8052850:	8b 03                	mov    (%ebx),%eax
 8052852:	8b 53 04             	mov    0x4(%ebx),%edx
 8052855:	e8 56 f2 ff ff       	call   8051ab0 <main+0x7e90>
 805285a:	89 1c 24             	mov    %ebx,(%esp)
 805285d:	e8 f2 71 ff ff       	call   8049a54 <free@plt>
 8052862:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8052865:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8052868:	e8 43 f2 ff ff       	call   8051ab0 <main+0x7e90>
 805286d:	8d 76 00             	lea    0x0(%esi),%esi
 8052870:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8052873:	c7 41 04 00 00 00 00 	movl   $0x0,0x4(%ecx)
 805287a:	c7 01 04 00 00 00    	movl   $0x4,(%ecx)
 8052880:	e9 24 fa ff ff       	jmp    80522a9 <main+0x8689>
 8052885:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8052888:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 805288b:	8b 45 0c             	mov    0xc(%ebp),%eax
 805288e:	e8 dd f6 ff ff       	call   8051f70 <main+0x8350>
 8052893:	89 c2                	mov    %eax,%edx
 8052895:	b8 01 00 00 00       	mov    $0x1,%eax
 805289a:	85 d2                	test   %edx,%edx
 805289c:	0f 85 7f fe ff ff    	jne    8052721 <main+0x8b01>
 80528a2:	e9 78 fe ff ff       	jmp    805271f <main+0x8aff>
 80528a7:	8b 75 cc             	mov    -0x34(%ebp),%esi
 80528aa:	0f af 75 ac          	imul   -0x54(%ebp),%esi
 80528ae:	c7 45 b4 01 00 00 00 	movl   $0x1,-0x4c(%ebp)
 80528b5:	e9 86 fa ff ff       	jmp    8052340 <main+0x8720>
 80528ba:	8b 75 ac             	mov    -0x54(%ebp),%esi
 80528bd:	2b 75 cc             	sub    -0x34(%ebp),%esi
 80528c0:	c7 45 b4 01 00 00 00 	movl   $0x1,-0x4c(%ebp)
 80528c7:	e9 74 fa ff ff       	jmp    8052340 <main+0x8720>
 80528cc:	8b 45 cc             	mov    -0x34(%ebp),%eax
 80528cf:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 80528d2:	c7 45 b4 01 00 00 00 	movl   $0x1,-0x4c(%ebp)
 80528d9:	8d 34 08             	lea    (%eax,%ecx,1),%esi
 80528dc:	e9 5f fa ff ff       	jmp    8052340 <main+0x8720>
 80528e1:	8b 75 cc             	mov    -0x34(%ebp),%esi
 80528e4:	33 75 ac             	xor    -0x54(%ebp),%esi
 80528e7:	c7 45 b4 01 00 00 00 	movl   $0x1,-0x4c(%ebp)
 80528ee:	e9 4d fa ff ff       	jmp    8052340 <main+0x8720>
 80528f3:	8b 75 cc             	mov    -0x34(%ebp),%esi
 80528f6:	23 75 ac             	and    -0x54(%ebp),%esi
 80528f9:	c7 45 b4 01 00 00 00 	movl   $0x1,-0x4c(%ebp)
 8052900:	e9 3b fa ff ff       	jmp    8052340 <main+0x8720>
 8052905:	8b 75 cc             	mov    -0x34(%ebp),%esi
 8052908:	0b 75 ac             	or     -0x54(%ebp),%esi
 805290b:	c7 45 b4 01 00 00 00 	movl   $0x1,-0x4c(%ebp)
 8052912:	e9 29 fa ff ff       	jmp    8052340 <main+0x8720>
 8052917:	8b 55 ac             	mov    -0x54(%ebp),%edx
 805291a:	c7 45 b4 01 00 00 00 	movl   $0x1,-0x4c(%ebp)
 8052921:	89 d0                	mov    %edx,%eax
 8052923:	c1 fa 1f             	sar    $0x1f,%edx
 8052926:	f7 7d cc             	idivl  -0x34(%ebp)
 8052929:	89 d6                	mov    %edx,%esi
 805292b:	e9 10 fa ff ff       	jmp    8052340 <main+0x8720>
 8052930:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8052933:	89 d0                	mov    %edx,%eax
 8052935:	c1 fa 1f             	sar    $0x1f,%edx
 8052938:	f7 7d cc             	idivl  -0x34(%ebp)
 805293b:	e9 e1 fd ff ff       	jmp    8052721 <main+0x8b01>
 8052940:	83 ea 01             	sub    $0x1,%edx
 8052943:	e9 ba fb ff ff       	jmp    8052502 <main+0x88e2>
 8052948:	90                   	nop
 8052949:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8052950:	83 c2 01             	add    $0x1,%edx
 8052953:	e9 aa fb ff ff       	jmp    8052502 <main+0x88e2>
 8052958:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 805295f:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8052966:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8052969:	89 44 24 10          	mov    %eax,0x10(%esp)
 805296d:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8052971:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8052974:	89 54 24 08          	mov    %edx,0x8(%esp)
 8052978:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 805297b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 805297f:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8052982:	8b 42 04             	mov    0x4(%edx),%eax
 8052985:	89 04 24             	mov    %eax,(%esp)
 8052988:	ff 12                	call   *(%edx)
 805298a:	89 45 c0             	mov    %eax,-0x40(%ebp)
 805298d:	e9 ed fb ff ff       	jmp    805257f <main+0x895f>
 8052992:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8052999:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 80529a0:	31 c9                	xor    %ecx,%ecx
 80529a2:	30 db                	xor    %bl,%bl
 80529a4:	e9 d1 fa ff ff       	jmp    805247a <main+0x885a>
 80529a9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 80529b0:	89 04 24             	mov    %eax,(%esp)
 80529b3:	89 f0                	mov    %esi,%eax
 80529b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 80529b9:	8b 55 0c             	mov    0xc(%ebp),%edx
 80529bc:	e8 ff f7 ff ff       	call   80521c0 <main+0x85a0>
 80529c1:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80529c4:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 80529c7:	89 c1                	mov    %eax,%ecx
 80529c9:	e9 12 fb ff ff       	jmp    80524e0 <main+0x88c0>
 80529ce:	89 df                	mov    %ebx,%edi
 80529d0:	e9 d5 f9 ff ff       	jmp    80523aa <main+0x878a>
 80529d5:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 80529d8:	89 0c 24             	mov    %ecx,(%esp)
 80529db:	8b 45 c0             	mov    -0x40(%ebp),%eax
 80529de:	89 44 24 04          	mov    %eax,0x4(%esp)
 80529e2:	8b 55 0c             	mov    0xc(%ebp),%edx
 80529e5:	8b 45 c8             	mov    -0x38(%ebp),%eax
 80529e8:	e8 13 f6 ff ff       	call   8052000 <main+0x83e0>
 80529ed:	8b 55 d0             	mov    -0x30(%ebp),%edx
 80529f0:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 80529f3:	8b 45 bc             	mov    -0x44(%ebp),%eax
 80529f6:	89 55 b0             	mov    %edx,-0x50(%ebp)
 80529f9:	89 4d ac             	mov    %ecx,-0x54(%ebp)
 80529fc:	89 04 24             	mov    %eax,(%esp)
 80529ff:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8052a02:	89 54 24 04          	mov    %edx,0x4(%esp)
 8052a06:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8052a09:	8b 55 0c             	mov    0xc(%ebp),%edx
 8052a0c:	e8 ef f5 ff ff       	call   8052000 <main+0x83e0>
 8052a11:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 8052a14:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8052a17:	83 7d b0 02          	cmpl   $0x2,-0x50(%ebp)
 8052a1b:	89 4d c8             	mov    %ecx,-0x38(%ebp)
 8052a1e:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8052a21:	0f 84 b1 00 00 00    	je     8052ad8 <main+0x8eb8>
 8052a27:	31 f6                	xor    %esi,%esi
 8052a29:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 8052a30:	e9 1d fc ff ff       	jmp    8052652 <main+0x8a32>
 8052a35:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8052a38:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 8052a3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8052a3e:	e8 2d f5 ff ff       	call   8051f70 <main+0x8350>
 8052a43:	89 c2                	mov    %eax,%edx
 8052a45:	31 c0                	xor    %eax,%eax
 8052a47:	85 d2                	test   %edx,%edx
 8052a49:	0f 84 d2 fc ff ff    	je     8052721 <main+0x8b01>
 8052a4f:	e9 f1 fc ff ff       	jmp    8052745 <main+0x8b25>
 8052a54:	83 f8 02             	cmp    $0x2,%eax
 8052a57:	0f 85 f5 fb ff ff    	jne    8052652 <main+0x8a32>
 8052a5d:	8b 7d ac             	mov    -0x54(%ebp),%edi
 8052a60:	83 cb ff             	or     $0xffffffff,%ebx
 8052a63:	31 c0                	xor    %eax,%eax
 8052a65:	89 d9                	mov    %ebx,%ecx
 8052a67:	f2 ae                	repnz scas %es:(%edi),%al
 8052a69:	8b 7d cc             	mov    -0x34(%ebp),%edi
 8052a6c:	89 ca                	mov    %ecx,%edx
 8052a6e:	89 d9                	mov    %ebx,%ecx
 8052a70:	f2 ae                	repnz scas %es:(%edi),%al
 8052a72:	f7 d2                	not    %edx
 8052a74:	f7 d1                	not    %ecx
 8052a76:	8d 44 0a ff          	lea    -0x1(%edx,%ecx,1),%eax
 8052a7a:	89 04 24             	mov    %eax,(%esp)
 8052a7d:	e8 32 6b ff ff       	call   80495b4 <malloc@plt>
 8052a82:	85 c0                	test   %eax,%eax
 8052a84:	89 c6                	mov    %eax,%esi
 8052a86:	0f 84 09 01 00 00    	je     8052b95 <main+0x8f75>
 8052a8c:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8052a8f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8052a93:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 8052a96:	c7 44 24 04 d8 4d 05 	movl   $0x8054dd8,0x4(%esp)
 8052a9d:	08 
 8052a9e:	89 04 24             	mov    %eax,(%esp)
 8052aa1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8052aa5:	e8 5a 6e ff ff       	call   8049904 <sprintf@plt>
 8052aaa:	c7 45 b4 02 00 00 00 	movl   $0x2,-0x4c(%ebp)
 8052ab1:	e9 9c fb ff ff       	jmp    8052652 <main+0x8a32>
 8052ab6:	83 ff 09             	cmp    $0x9,%edi
 8052ab9:	0f 84 b5 00 00 00    	je     8052b74 <main+0x8f54>
 8052abf:	83 ff 0a             	cmp    $0xa,%edi
 8052ac2:	0f 85 26 fc ff ff    	jne    80526ee <main+0x8ace>
 8052ac8:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8052acb:	31 c9                	xor    %ecx,%ecx
 8052acd:	39 45 cc             	cmp    %eax,-0x34(%ebp)
 8052ad0:	0f 9c c1             	setl   %cl
 8052ad3:	e9 22 fc ff ff       	jmp    80526fa <main+0x8ada>
 8052ad8:	83 f9 02             	cmp    $0x2,%ecx
 8052adb:	0f 85 46 ff ff ff    	jne    8052a27 <main+0x8e07>
 8052ae1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8052ae5:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8052ae8:	89 14 24             	mov    %edx,(%esp)
 8052aeb:	e8 e4 6d ff ff       	call   80498d4 <strcmp@plt>
 8052af0:	83 ff 08             	cmp    $0x8,%edi
 8052af3:	0f 84 e5 00 00 00    	je     8052bde <main+0x8fbe>
 8052af9:	0f 87 b7 00 00 00    	ja     8052bb6 <main+0x8f96>
 8052aff:	83 ff 07             	cmp    $0x7,%edi
 8052b02:	0f 84 c9 00 00 00    	je     8052bd1 <main+0x8fb1>
 8052b08:	85 c0                	test   %eax,%eax
 8052b0a:	0f 94 c0             	sete   %al
 8052b0d:	0f b6 c0             	movzbl %al,%eax
 8052b10:	ba 01 00 00 00       	mov    $0x1,%edx
 8052b15:	89 c6                	mov    %eax,%esi
 8052b17:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 8052b1a:	e9 33 fb ff ff       	jmp    8052652 <main+0x8a32>
 8052b1f:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8052b22:	89 54 24 04          	mov    %edx,0x4(%esp)
 8052b26:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8052b29:	8b 41 08             	mov    0x8(%ecx),%eax
 8052b2c:	89 04 24             	mov    %eax,(%esp)
 8052b2f:	e8 ec ac ff ff       	call   804d820 <main+0x3c00>
 8052b34:	85 c0                	test   %eax,%eax
 8052b36:	0f 84 46 fb ff ff    	je     8052682 <main+0x8a62>
 8052b3c:	8b 00                	mov    (%eax),%eax
 8052b3e:	e9 36 fb ff ff       	jmp    8052679 <main+0x8a59>
 8052b43:	89 54 24 04          	mov    %edx,0x4(%esp)
 8052b47:	8b 55 0c             	mov    0xc(%ebp),%edx
 8052b4a:	8b 42 08             	mov    0x8(%edx),%eax
 8052b4d:	89 04 24             	mov    %eax,(%esp)
 8052b50:	e8 cb ac ff ff       	call   804d820 <main+0x3c00>
 8052b55:	85 c0                	test   %eax,%eax
 8052b57:	0f 84 3d fb ff ff    	je     805269a <main+0x8a7a>
 8052b5d:	8b 00                	mov    (%eax),%eax
 8052b5f:	e9 2d fb ff ff       	jmp    8052691 <main+0x8a71>
 8052b64:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8052b67:	31 c9                	xor    %ecx,%ecx
 8052b69:	39 55 cc             	cmp    %edx,-0x34(%ebp)
 8052b6c:	0f 9e c1             	setle  %cl
 8052b6f:	e9 86 fb ff ff       	jmp    80526fa <main+0x8ada>
 8052b74:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 8052b77:	39 4d cc             	cmp    %ecx,-0x34(%ebp)
 8052b7a:	0f 9f c1             	setg   %cl
 8052b7d:	0f b6 c9             	movzbl %cl,%ecx
 8052b80:	e9 75 fb ff ff       	jmp    80526fa <main+0x8ada>
 8052b85:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8052b88:	31 c9                	xor    %ecx,%ecx
 8052b8a:	39 45 cc             	cmp    %eax,-0x34(%ebp)
 8052b8d:	0f 9d c1             	setge  %cl
 8052b90:	e9 65 fb ff ff       	jmp    80526fa <main+0x8ada>
 8052b95:	31 f6                	xor    %esi,%esi
 8052b97:	c7 45 b4 04 00 00 00 	movl   $0x4,-0x4c(%ebp)
 8052b9e:	e9 af fa ff ff       	jmp    8052652 <main+0x8a32>
 8052ba3:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8052ba6:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8052ba9:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8052bac:	89 01                	mov    %eax,(%ecx)
 8052bae:	89 51 04             	mov    %edx,0x4(%ecx)
 8052bb1:	e9 f3 f6 ff ff       	jmp    80522a9 <main+0x8689>
 8052bb6:	83 ff 09             	cmp    $0x9,%edi
 8052bb9:	74 2d                	je     8052be8 <main+0x8fc8>
 8052bbb:	83 ff 0a             	cmp    $0xa,%edi
 8052bbe:	0f 85 44 ff ff ff    	jne    8052b08 <main+0x8ee8>
 8052bc4:	85 c0                	test   %eax,%eax
 8052bc6:	0f 9f c0             	setg   %al
 8052bc9:	0f b6 c0             	movzbl %al,%eax
 8052bcc:	e9 3f ff ff ff       	jmp    8052b10 <main+0x8ef0>
 8052bd1:	85 c0                	test   %eax,%eax
 8052bd3:	0f 9e c0             	setle  %al
 8052bd6:	0f b6 c0             	movzbl %al,%eax
 8052bd9:	e9 32 ff ff ff       	jmp    8052b10 <main+0x8ef0>
 8052bde:	f7 d0                	not    %eax
 8052be0:	c1 e8 1f             	shr    $0x1f,%eax
 8052be3:	e9 28 ff ff ff       	jmp    8052b10 <main+0x8ef0>
 8052be8:	c1 e8 1f             	shr    $0x1f,%eax
 8052beb:	e9 20 ff ff ff       	jmp    8052b10 <main+0x8ef0>
 8052bf0:	55                   	push   %ebp
 8052bf1:	89 e5                	mov    %esp,%ebp
 8052bf3:	57                   	push   %edi
 8052bf4:	56                   	push   %esi
 8052bf5:	53                   	push   %ebx
 8052bf6:	83 ec 3c             	sub    $0x3c,%esp
 8052bf9:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8052bfc:	85 db                	test   %ebx,%ebx
 8052bfe:	0f 84 a7 00 00 00    	je     8052cab <main+0x908b>
 8052c04:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8052c07:	89 44 24 04          	mov    %eax,0x4(%esp)
 8052c0b:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 8052c12:	e8 6d 68 ff ff       	call   8049484 <clock_gettime@plt>
 8052c17:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8052c1a:	ba 83 de 1b 43       	mov    $0x431bde83,%edx
 8052c1f:	89 c8                	mov    %ecx,%eax
 8052c21:	f7 ea                	imul   %edx
 8052c23:	69 45 e0 e8 03 00 00 	imul   $0x3e8,-0x20(%ebp),%eax
 8052c2a:	c1 f9 1f             	sar    $0x1f,%ecx
 8052c2d:	c1 fa 12             	sar    $0x12,%edx
 8052c30:	29 ca                	sub    %ecx,%edx
 8052c32:	01 c2                	add    %eax,%edx
 8052c34:	8b 45 08             	mov    0x8(%ebp),%eax
 8052c37:	83 78 14 00          	cmpl   $0x0,0x14(%eax)
 8052c3b:	77 09                	ja     8052c46 <main+0x9026>
 8052c3d:	39 50 10             	cmp    %edx,0x10(%eax)
 8052c40:	0f 86 0a 02 00 00    	jbe    8052e50 <main+0x9230>
 8052c46:	83 3b 04             	cmpl   $0x4,(%ebx)
 8052c49:	77 55                	ja     8052ca0 <main+0x9080>
 8052c4b:	8b 03                	mov    (%ebx),%eax
 8052c4d:	ff 24 85 b0 63 05 08 	jmp    *0x80563b0(,%eax,4)
 8052c54:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8052c5a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 8052c60:	8b 43 08             	mov    0x8(%ebx),%eax
 8052c63:	89 44 24 08          	mov    %eax,0x8(%esp)
 8052c67:	8b 45 08             	mov    0x8(%ebp),%eax
 8052c6a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8052c6e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8052c71:	89 04 24             	mov    %eax,(%esp)
 8052c74:	e8 07 f6 ff ff       	call   8052280 <main+0x8660>
 8052c79:	8b 75 d0             	mov    -0x30(%ebp),%esi
 8052c7c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8052c7f:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8052c82:	83 ec 04             	sub    $0x4,%esp
 8052c85:	83 fe 04             	cmp    $0x4,%esi
 8052c88:	0f 84 c2 01 00 00    	je     8052e50 <main+0x9230>
 8052c8e:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8052c91:	89 f0                	mov    %esi,%eax
 8052c93:	e8 18 ee ff ff       	call   8051ab0 <main+0x7e90>
 8052c98:	90                   	nop
 8052c99:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8052ca0:	8b 5b 04             	mov    0x4(%ebx),%ebx
 8052ca3:	85 db                	test   %ebx,%ebx
 8052ca5:	0f 85 59 ff ff ff    	jne    8052c04 <main+0x8fe4>
 8052cab:	be 01 00 00 00       	mov    $0x1,%esi
 8052cb0:	eb 13                	jmp    8052cc5 <main+0x90a5>
 8052cb2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8052cb9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8052cc0:	be 03 00 00 00       	mov    $0x3,%esi
 8052cc5:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8052cc8:	89 f0                	mov    %esi,%eax
 8052cca:	5b                   	pop    %ebx
 8052ccb:	5e                   	pop    %esi
 8052ccc:	5f                   	pop    %edi
 8052ccd:	5d                   	pop    %ebp
 8052cce:	c3                   	ret    
 8052ccf:	90                   	nop
 8052cd0:	8b 43 08             	mov    0x8(%ebx),%eax
 8052cd3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8052cd7:	8b 45 08             	mov    0x8(%ebp),%eax
 8052cda:	89 44 24 04          	mov    %eax,0x4(%esp)
 8052cde:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8052ce1:	89 04 24             	mov    %eax,(%esp)
 8052ce4:	e8 97 f5 ff ff       	call   8052280 <main+0x8660>
 8052ce9:	8b 75 d0             	mov    -0x30(%ebp),%esi
 8052cec:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8052cef:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8052cf2:	83 ec 04             	sub    $0x4,%esp
 8052cf5:	83 fe 04             	cmp    $0x4,%esi
 8052cf8:	0f 84 52 01 00 00    	je     8052e50 <main+0x9230>
 8052cfe:	89 c1                	mov    %eax,%ecx
 8052d00:	8b 45 08             	mov    0x8(%ebp),%eax
 8052d03:	89 f2                	mov    %esi,%edx
 8052d05:	e8 66 f2 ff ff       	call   8051f70 <main+0x8350>
 8052d0a:	85 c0                	test   %eax,%eax
 8052d0c:	0f 85 4e 01 00 00    	jne    8052e60 <main+0x9240>
 8052d12:	8b 43 10             	mov    0x10(%ebx),%eax
 8052d15:	89 44 24 04          	mov    %eax,0x4(%esp)
 8052d19:	8b 45 08             	mov    0x8(%ebp),%eax
 8052d1c:	89 04 24             	mov    %eax,(%esp)
 8052d1f:	e8 cc fe ff ff       	call   8052bf0 <main+0x8fd0>
 8052d24:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8052d27:	89 c7                	mov    %eax,%edi
 8052d29:	89 f0                	mov    %esi,%eax
 8052d2b:	e8 80 ed ff ff       	call   8051ab0 <main+0x7e90>
 8052d30:	83 ff 01             	cmp    $0x1,%edi
 8052d33:	0f 84 67 ff ff ff    	je     8052ca0 <main+0x9080>
 8052d39:	89 fe                	mov    %edi,%esi
 8052d3b:	eb 88                	jmp    8052cc5 <main+0x90a5>
 8052d3d:	8d 76 00             	lea    0x0(%esi),%esi
 8052d40:	8b 43 08             	mov    0x8(%ebx),%eax
 8052d43:	85 c0                	test   %eax,%eax
 8052d45:	74 39                	je     8052d80 <main+0x9160>
 8052d47:	89 44 24 08          	mov    %eax,0x8(%esp)
 8052d4b:	8b 45 08             	mov    0x8(%ebp),%eax
 8052d4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8052d52:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8052d55:	89 04 24             	mov    %eax,(%esp)
 8052d58:	e8 23 f5 ff ff       	call   8052280 <main+0x8660>
 8052d5d:	8b 75 d0             	mov    -0x30(%ebp),%esi
 8052d60:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8052d63:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8052d66:	83 ec 04             	sub    $0x4,%esp
 8052d69:	83 fe 04             	cmp    $0x4,%esi
 8052d6c:	0f 84 de 00 00 00    	je     8052e50 <main+0x9230>
 8052d72:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8052d75:	89 f0                	mov    %esi,%eax
 8052d77:	e8 34 ed ff ff       	call   8051ab0 <main+0x7e90>
 8052d7c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8052d80:	8b 43 0c             	mov    0xc(%ebx),%eax
 8052d83:	85 c0                	test   %eax,%eax
 8052d85:	74 45                	je     8052dcc <main+0x91ac>
 8052d87:	89 44 24 08          	mov    %eax,0x8(%esp)
 8052d8b:	8b 45 08             	mov    0x8(%ebp),%eax
 8052d8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8052d92:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8052d95:	89 04 24             	mov    %eax,(%esp)
 8052d98:	e8 e3 f4 ff ff       	call   8052280 <main+0x8660>
 8052d9d:	8b 75 d0             	mov    -0x30(%ebp),%esi
 8052da0:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 8052da3:	83 ec 04             	sub    $0x4,%esp
 8052da6:	83 fe 04             	cmp    $0x4,%esi
 8052da9:	0f 84 a1 00 00 00    	je     8052e50 <main+0x9230>
 8052daf:	8b 45 08             	mov    0x8(%ebp),%eax
 8052db2:	89 f2                	mov    %esi,%edx
 8052db4:	89 f9                	mov    %edi,%ecx
 8052db6:	e8 b5 f1 ff ff       	call   8051f70 <main+0x8350>
 8052dbb:	85 c0                	test   %eax,%eax
 8052dbd:	0f 84 ad 00 00 00    	je     8052e70 <main+0x9250>
 8052dc3:	89 f0                	mov    %esi,%eax
 8052dc5:	89 fa                	mov    %edi,%edx
 8052dc7:	e8 e4 ec ff ff       	call   8051ab0 <main+0x7e90>
 8052dcc:	8b 43 14             	mov    0x14(%ebx),%eax
 8052dcf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8052dd3:	8b 45 08             	mov    0x8(%ebp),%eax
 8052dd6:	89 04 24             	mov    %eax,(%esp)
 8052dd9:	e8 12 fe ff ff       	call   8052bf0 <main+0x8fd0>
 8052dde:	83 f8 02             	cmp    $0x2,%eax
 8052de1:	74 9d                	je     8052d80 <main+0x9160>
 8052de3:	83 f8 03             	cmp    $0x3,%eax
 8052de6:	0f 84 b4 fe ff ff    	je     8052ca0 <main+0x9080>
 8052dec:	83 f8 01             	cmp    $0x1,%eax
 8052def:	0f 85 9b 00 00 00    	jne    8052e90 <main+0x9270>
 8052df5:	8b 43 10             	mov    0x10(%ebx),%eax
 8052df8:	85 c0                	test   %eax,%eax
 8052dfa:	74 84                	je     8052d80 <main+0x9160>
 8052dfc:	89 44 24 08          	mov    %eax,0x8(%esp)
 8052e00:	8b 45 08             	mov    0x8(%ebp),%eax
 8052e03:	89 44 24 04          	mov    %eax,0x4(%esp)
 8052e07:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8052e0a:	89 04 24             	mov    %eax,(%esp)
 8052e0d:	e8 6e f4 ff ff       	call   8052280 <main+0x8660>
 8052e12:	8b 75 d0             	mov    -0x30(%ebp),%esi
 8052e15:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 8052e18:	83 ec 04             	sub    $0x4,%esp
 8052e1b:	83 fe 04             	cmp    $0x4,%esi
 8052e1e:	74 30                	je     8052e50 <main+0x9230>
 8052e20:	89 f0                	mov    %esi,%eax
 8052e22:	89 fa                	mov    %edi,%edx
 8052e24:	e8 87 ec ff ff       	call   8051ab0 <main+0x7e90>
 8052e29:	8b 43 0c             	mov    0xc(%ebx),%eax
 8052e2c:	85 c0                	test   %eax,%eax
 8052e2e:	0f 85 53 ff ff ff    	jne    8052d87 <main+0x9167>
 8052e34:	eb 96                	jmp    8052dcc <main+0x91ac>
 8052e36:	8d 76 00             	lea    0x0(%esi),%esi
 8052e39:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8052e40:	be 02 00 00 00       	mov    $0x2,%esi
 8052e45:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8052e48:	89 f0                	mov    %esi,%eax
 8052e4a:	5b                   	pop    %ebx
 8052e4b:	5e                   	pop    %esi
 8052e4c:	5f                   	pop    %edi
 8052e4d:	5d                   	pop    %ebp
 8052e4e:	c3                   	ret    
 8052e4f:	90                   	nop
 8052e50:	31 f6                	xor    %esi,%esi
 8052e52:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8052e55:	89 f0                	mov    %esi,%eax
 8052e57:	5b                   	pop    %ebx
 8052e58:	5e                   	pop    %esi
 8052e59:	5f                   	pop    %edi
 8052e5a:	5d                   	pop    %ebp
 8052e5b:	c3                   	ret    
 8052e5c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8052e60:	8b 43 0c             	mov    0xc(%ebx),%eax
 8052e63:	e9 ad fe ff ff       	jmp    8052d15 <main+0x90f5>
 8052e68:	90                   	nop
 8052e69:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8052e70:	89 7d cc             	mov    %edi,-0x34(%ebp)
 8052e73:	89 f0                	mov    %esi,%eax
 8052e75:	89 fa                	mov    %edi,%edx
 8052e77:	e8 34 ec ff ff       	call   8051ab0 <main+0x7e90>
 8052e7c:	e9 1f fe ff ff       	jmp    8052ca0 <main+0x9080>
 8052e81:	eb 0d                	jmp    8052e90 <main+0x9270>
 8052e83:	90                   	nop
 8052e84:	90                   	nop
 8052e85:	90                   	nop
 8052e86:	90                   	nop
 8052e87:	90                   	nop
 8052e88:	90                   	nop
 8052e89:	90                   	nop
 8052e8a:	90                   	nop
 8052e8b:	90                   	nop
 8052e8c:	90                   	nop
 8052e8d:	90                   	nop
 8052e8e:	90                   	nop
 8052e8f:	90                   	nop
 8052e90:	89 c6                	mov    %eax,%esi
 8052e92:	e9 2e fe ff ff       	jmp    8052cc5 <main+0x90a5>
 8052e97:	89 f6                	mov    %esi,%esi
 8052e99:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8052ea0:	55                   	push   %ebp
 8052ea1:	89 e5                	mov    %esp,%ebp
 8052ea3:	83 ec 38             	sub    $0x38,%esp
 8052ea6:	a1 40 8e 05 08       	mov    0x8058e40,%eax
 8052eab:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8052eae:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8052eb1:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8052eb4:	8b 7d 10             	mov    0x10(%ebp),%edi
 8052eb7:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8052eba:	8b 73 18             	mov    0x18(%ebx),%esi
 8052ebd:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 8052ec4:	00 
 8052ec5:	c7 44 24 04 01 63 05 	movl   $0x8056301,0x4(%esp)
 8052ecc:	08 
 8052ecd:	89 04 24             	mov    %eax,(%esp)
 8052ed0:	e8 1b a6 ff ff       	call   804d4f0 <main+0x38d0>
 8052ed5:	39 c6                	cmp    %eax,%esi
 8052ed7:	73 06                	jae    8052edf <main+0x92bf>
 8052ed9:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 8052edd:	74 11                	je     8052ef0 <main+0x92d0>
 8052edf:	31 c0                	xor    %eax,%eax
 8052ee1:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8052ee4:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8052ee7:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8052eea:	89 ec                	mov    %ebp,%esp
 8052eec:	5d                   	pop    %ebp
 8052eed:	c3                   	ret    
 8052eee:	66 90                	xchg   %ax,%ax
 8052ef0:	83 3f 02             	cmpl   $0x2,(%edi)
 8052ef3:	75 ea                	jne    8052edf <main+0x92bf>
 8052ef5:	8b 47 04             	mov    0x4(%edi),%eax
 8052ef8:	89 04 24             	mov    %eax,(%esp)
 8052efb:	e8 c4 6a ff ff       	call   80499c4 <strlen@plt>
 8052f00:	89 c6                	mov    %eax,%esi
 8052f02:	8b 03                	mov    (%ebx),%eax
 8052f04:	89 04 24             	mov    %eax,(%esp)
 8052f07:	e8 b8 6a ff ff       	call   80499c4 <strlen@plt>
 8052f0c:	8d 44 06 01          	lea    0x1(%esi,%eax,1),%eax
 8052f10:	89 04 24             	mov    %eax,(%esp)
 8052f13:	e8 9c 66 ff ff       	call   80495b4 <malloc@plt>
 8052f18:	85 c0                	test   %eax,%eax
 8052f1a:	89 c6                	mov    %eax,%esi
 8052f1c:	74 c1                	je     8052edf <main+0x92bf>
 8052f1e:	8b 47 04             	mov    0x4(%edi),%eax
 8052f21:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8052f25:	8b 03                	mov    (%ebx),%eax
 8052f27:	c7 44 24 04 d8 4d 05 	movl   $0x8054dd8,0x4(%esp)
 8052f2e:	08 
 8052f2f:	89 34 24             	mov    %esi,(%esp)
 8052f32:	89 44 24 08          	mov    %eax,0x8(%esp)
 8052f36:	e8 c9 69 ff ff       	call   8049904 <sprintf@plt>
 8052f3b:	c7 44 24 04 11 4e 05 	movl   $0x8054e11,0x4(%esp)
 8052f42:	08 
 8052f43:	89 34 24             	mov    %esi,(%esp)
 8052f46:	e8 e9 68 ff ff       	call   8049834 <fopen@plt>
 8052f4b:	89 34 24             	mov    %esi,(%esp)
 8052f4e:	89 c7                	mov    %eax,%edi
 8052f50:	e8 ff 6a ff ff       	call   8049a54 <free@plt>
 8052f55:	85 ff                	test   %edi,%edi
 8052f57:	74 86                	je     8052edf <main+0x92bf>
 8052f59:	89 3c 24             	mov    %edi,(%esp)
 8052f5c:	e8 af c8 ff ff       	call   804f810 <main+0x5bf0>
 8052f61:	89 3c 24             	mov    %edi,(%esp)
 8052f64:	89 c6                	mov    %eax,%esi
 8052f66:	e8 19 69 ff ff       	call   8049884 <fclose@plt>
 8052f6b:	85 f6                	test   %esi,%esi
 8052f6d:	0f 84 6c ff ff ff    	je     8052edf <main+0x92bf>
 8052f73:	83 43 18 01          	addl   $0x1,0x18(%ebx)
 8052f77:	89 74 24 04          	mov    %esi,0x4(%esp)
 8052f7b:	89 1c 24             	mov    %ebx,(%esp)
 8052f7e:	e8 6d fc ff ff       	call   8052bf0 <main+0x8fd0>
 8052f83:	83 f8 01             	cmp    $0x1,%eax
 8052f86:	0f 94 c0             	sete   %al
 8052f89:	83 6b 18 01          	subl   $0x1,0x18(%ebx)
 8052f8d:	0f b6 c0             	movzbl %al,%eax
 8052f90:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8052f93:	89 34 24             	mov    %esi,(%esp)
 8052f96:	e8 85 d6 ff ff       	call   8050620 <main+0x6a00>
 8052f9b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8052f9e:	e9 3e ff ff ff       	jmp    8052ee1 <main+0x92c1>
 8052fa3:	90                   	nop
 8052fa4:	90                   	nop
 8052fa5:	90                   	nop
 8052fa6:	90                   	nop
 8052fa7:	90                   	nop
 8052fa8:	90                   	nop
 8052fa9:	90                   	nop
 8052faa:	90                   	nop
 8052fab:	90                   	nop
 8052fac:	90                   	nop
 8052fad:	90                   	nop
 8052fae:	90                   	nop
 8052faf:	90                   	nop
 8052fb0:	55                   	push   %ebp
 8052fb1:	89 e5                	mov    %esp,%ebp
 8052fb3:	81 ec e8 00 00 00    	sub    $0xe8,%esp
 8052fb9:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8052fbc:	89 c3                	mov    %eax,%ebx
 8052fbe:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8052fc1:	89 d6                	mov    %edx,%esi
 8052fc3:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8052fc6:	8b 52 04             	mov    0x4(%edx),%edx
 8052fc9:	8d 04 d5 26 00 00 00 	lea    0x26(,%edx,8),%eax
 8052fd0:	83 e0 f0             	and    $0xfffffff0,%eax
 8052fd3:	29 c4                	sub    %eax,%esp
 8052fd5:	8b 46 08             	mov    0x8(%esi),%eax
 8052fd8:	8d 7c 24 23          	lea    0x23(%esp),%edi
 8052fdc:	83 e7 f0             	and    $0xfffffff0,%edi
 8052fdf:	85 c0                	test   %eax,%eax
 8052fe1:	74 72                	je     8053055 <main+0x9435>
 8052fe3:	8b 8b b8 00 00 00    	mov    0xb8(%ebx),%ecx
 8052fe9:	c1 e2 03             	shl    $0x3,%edx
 8052fec:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 8052ff2:	8d 47 08             	lea    0x8(%edi),%eax
 8052ff5:	89 54 24 08          	mov    %edx,0x8(%esp)
 8052ff9:	c7 85 40 ff ff ff 02 	movl   $0x2,-0xc0(%ebp)
 8053000:	00 00 00 
 8053003:	89 8d 44 ff ff ff    	mov    %ecx,-0xbc(%ebp)
 8053009:	8b 0e                	mov    (%esi),%ecx
 805300b:	89 04 24             	mov    %eax,(%esp)
 805300e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8053012:	e8 5d 65 ff ff       	call   8049574 <memcpy@plt>
 8053017:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 805301d:	89 07                	mov    %eax,(%edi)
 805301f:	8b 46 04             	mov    0x4(%esi),%eax
 8053022:	c7 47 04 a8 00 00 00 	movl   $0xa8,0x4(%edi)
 8053029:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8053030:	00 
 8053031:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8053038:	00 
 8053039:	83 c0 01             	add    $0x1,%eax
 805303c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8053040:	8b 03                	mov    (%ebx),%eax
 8053042:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8053046:	89 04 24             	mov    %eax,(%esp)
 8053049:	e8 56 68 ff ff       	call   80498a4 <MsgSendv@plt>
 805304e:	c7 46 08 00 00 00 00 	movl   $0x0,0x8(%esi)
 8053055:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 805305c:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 805305f:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8053062:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8053065:	89 ec                	mov    %ebp,%esp
 8053067:	5d                   	pop    %ebp
 8053068:	c3                   	ret    
 8053069:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8053070:	55                   	push   %ebp
 8053071:	89 e5                	mov    %esp,%ebp
 8053073:	57                   	push   %edi
 8053074:	56                   	push   %esi
 8053075:	53                   	push   %ebx
 8053076:	81 ec 1c 01 00 00    	sub    $0x11c,%esp
 805307c:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 805307f:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8053082:	89 85 f4 fe ff ff    	mov    %eax,-0x10c(%ebp)
 8053088:	89 45 cc             	mov    %eax,-0x34(%ebp)
 805308b:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8053092:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8053099:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 80530a0:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 80530a7:	89 8d 20 ff ff ff    	mov    %ecx,-0xe0(%ebp)
 80530ad:	c7 85 18 ff ff ff 01 	movl   $0x1,-0xe8(%ebp)
 80530b4:	00 00 00 
 80530b7:	c7 85 10 ff ff ff 00 	movl   $0x0,-0xf0(%ebp)
 80530be:	00 00 00 
 80530c1:	eb 0d                	jmp    80530d0 <main+0x94b0>
 80530c3:	90                   	nop
 80530c4:	90                   	nop
 80530c5:	90                   	nop
 80530c6:	90                   	nop
 80530c7:	90                   	nop
 80530c8:	90                   	nop
 80530c9:	90                   	nop
 80530ca:	90                   	nop
 80530cb:	90                   	nop
 80530cc:	90                   	nop
 80530cd:	90                   	nop
 80530ce:	90                   	nop
 80530cf:	90                   	nop
 80530d0:	8b b5 20 ff ff ff    	mov    -0xe0(%ebp),%esi
 80530d6:	8d 76 00             	lea    0x0(%esi),%esi
 80530d9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 80530e0:	0f be 05 0c 79 05 08 	movsbl 0x805790c,%eax
 80530e7:	8d 5d d8             	lea    -0x28(%ebp),%ebx
 80530ea:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 80530ee:	89 74 24 04          	mov    %esi,0x4(%esp)
 80530f2:	89 44 24 08          	mov    %eax,0x8(%esp)
 80530f6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80530f9:	89 04 24             	mov    %eax,(%esp)
 80530fc:	e8 93 64 ff ff       	call   8049594 <mbrtowc@plt>
 8053101:	85 c0                	test   %eax,%eax
 8053103:	0f 8e 17 05 00 00    	jle    8053620 <main+0x9a00>
 8053109:	01 c6                	add    %eax,%esi
 805310b:	83 7d e0 25          	cmpl   $0x25,-0x20(%ebp)
 805310f:	75 cf                	jne    80530e0 <main+0x94c0>
 8053111:	89 c3                	mov    %eax,%ebx
 8053113:	83 ee 01             	sub    $0x1,%esi
 8053116:	39 b5 20 ff ff ff    	cmp    %esi,-0xe0(%ebp)
 805311c:	8d 55 8c             	lea    -0x74(%ebp),%edx
 805311f:	89 95 24 ff ff ff    	mov    %edx,-0xdc(%ebp)
 8053125:	0f 85 05 05 00 00    	jne    8053630 <main+0x9a10>
 805312b:	85 db                	test   %ebx,%ebx
 805312d:	0f 8e 4e 05 00 00    	jle    8053681 <main+0x9a61>
 8053133:	8d 4e 01             	lea    0x1(%esi),%ecx
 8053136:	bf ff ff ff ff       	mov    $0xffffffff,%edi
 805313b:	89 8d 20 ff ff ff    	mov    %ecx,-0xe0(%ebp)
 8053141:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 8053145:	c6 45 e6 00          	movb   $0x0,-0x1a(%ebp)
 8053149:	c7 85 14 ff ff ff 00 	movl   $0x0,-0xec(%ebp)
 8053150:	00 00 00 
 8053153:	c7 85 1c ff ff ff 00 	movl   $0x0,-0xe4(%ebp)
 805315a:	00 00 00 
 805315d:	0f be 46 01          	movsbl 0x1(%esi),%eax
 8053161:	83 85 20 ff ff ff 01 	addl   $0x1,-0xe0(%ebp)
 8053168:	8d 50 e0             	lea    -0x20(%eax),%edx
 805316b:	83 fa 5a             	cmp    $0x5a,%edx
 805316e:	0f 86 7c 02 00 00    	jbe    80533f0 <main+0x97d0>
 8053174:	85 c0                	test   %eax,%eax
 8053176:	0f 84 05 05 00 00    	je     8053681 <main+0x9a61>
 805317c:	8d 9d 28 ff ff ff    	lea    -0xd8(%ebp),%ebx
 8053182:	be 01 00 00 00       	mov    $0x1,%esi
 8053187:	88 85 28 ff ff ff    	mov    %al,-0xd8(%ebp)
 805318d:	b9 01 00 00 00       	mov    $0x1,%ecx
 8053192:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 8053196:	89 9d 08 ff ff ff    	mov    %ebx,-0xf8(%ebp)
 805319c:	c7 85 04 ff ff ff 00 	movl   $0x0,-0xfc(%ebp)
 80531a3:	00 00 00 
 80531a6:	80 7d e6 00          	cmpb   $0x0,-0x1a(%ebp)
 80531aa:	74 03                	je     80531af <main+0x958f>
 80531ac:	83 c6 02             	add    $0x2,%esi
 80531af:	8b bd 1c ff ff ff    	mov    -0xe4(%ebp),%edi
 80531b5:	81 e7 84 00 00 00    	and    $0x84,%edi
 80531bb:	0f 85 bf 0a 00 00    	jne    8053c80 <main+0xa060>
 80531c1:	8b 9d 14 ff ff ff    	mov    -0xec(%ebp),%ebx
 80531c7:	29 f3                	sub    %esi,%ebx
 80531c9:	85 db                	test   %ebx,%ebx
 80531cb:	0f 8e af 0a 00 00    	jle    8053c80 <main+0xa060>
 80531d1:	83 fb 10             	cmp    $0x10,%ebx
 80531d4:	0f 8e 06 10 00 00    	jle    80541e0 <main+0xa5c0>
 80531da:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80531dd:	8b 95 24 ff ff ff    	mov    -0xdc(%ebp),%edx
 80531e3:	89 8d 0c ff ff ff    	mov    %ecx,-0xf4(%ebp)
 80531e9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 80531f0:	c7 42 04 10 00 00 00 	movl   $0x10,0x4(%edx)
 80531f7:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 80531fa:	83 c0 10             	add    $0x10,%eax
 80531fd:	c7 02 bc 76 05 08    	movl   $0x80576bc,(%edx)
 8053203:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8053206:	83 c1 01             	add    $0x1,%ecx
 8053209:	83 f9 07             	cmp    $0x7,%ecx
 805320c:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 805320f:	0f 8f 15 0c 00 00    	jg     8053e2a <main+0xa20a>
 8053215:	83 c2 08             	add    $0x8,%edx
 8053218:	83 eb 10             	sub    $0x10,%ebx
 805321b:	83 fb 10             	cmp    $0x10,%ebx
 805321e:	7f d0                	jg     80531f0 <main+0x95d0>
 8053220:	8b 8d 0c ff ff ff    	mov    -0xf4(%ebp),%ecx
 8053226:	89 95 24 ff ff ff    	mov    %edx,-0xdc(%ebp)
 805322c:	8b 95 24 ff ff ff    	mov    -0xdc(%ebp),%edx
 8053232:	01 d8                	add    %ebx,%eax
 8053234:	89 5a 04             	mov    %ebx,0x4(%edx)
 8053237:	c7 02 bc 76 05 08    	movl   $0x80576bc,(%edx)
 805323d:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8053240:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8053243:	83 c2 01             	add    $0x1,%edx
 8053246:	83 fa 07             	cmp    $0x7,%edx
 8053249:	89 55 d0             	mov    %edx,-0x30(%ebp)
 805324c:	0f 8f 6d 12 00 00    	jg     80544bf <main+0xa89f>
 8053252:	83 85 24 ff ff ff 08 	addl   $0x8,-0xdc(%ebp)
 8053259:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 805325d:	0f 85 2a 0a 00 00    	jne    8053c8d <main+0xa06d>
 8053263:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8053266:	80 7d e6 00          	cmpb   $0x0,-0x1a(%ebp)
 805326a:	0f 85 5a 0a 00 00    	jne    8053cca <main+0xa0aa>
 8053270:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8053273:	83 c7 80             	add    $0xffffff80,%edi
 8053276:	0f 84 8e 0a 00 00    	je     8053d0a <main+0xa0ea>
 805327c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 805327f:	8b 9d 04 ff ff ff    	mov    -0xfc(%ebp),%ebx
 8053285:	29 cb                	sub    %ecx,%ebx
 8053287:	85 db                	test   %ebx,%ebx
 8053289:	0f 8e 21 0b 00 00    	jle    8053db0 <main+0xa190>
 805328f:	83 fb 10             	cmp    $0x10,%ebx
 8053292:	7e 45                	jle    80532d9 <main+0x96b9>
 8053294:	8b 95 24 ff ff ff    	mov    -0xdc(%ebp),%edx
 805329a:	eb 07                	jmp    80532a3 <main+0x9683>
 805329c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 80532a0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80532a3:	c7 42 04 10 00 00 00 	movl   $0x10,0x4(%edx)
 80532aa:	8b 7d d0             	mov    -0x30(%ebp),%edi
 80532ad:	83 c0 10             	add    $0x10,%eax
 80532b0:	c7 02 ac 76 05 08    	movl   $0x80576ac,(%edx)
 80532b6:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80532b9:	83 c7 01             	add    $0x1,%edi
 80532bc:	83 ff 07             	cmp    $0x7,%edi
 80532bf:	89 7d d0             	mov    %edi,-0x30(%ebp)
 80532c2:	0f 8f 38 0b 00 00    	jg     8053e00 <main+0xa1e0>
 80532c8:	83 c2 08             	add    $0x8,%edx
 80532cb:	83 eb 10             	sub    $0x10,%ebx
 80532ce:	83 fb 10             	cmp    $0x10,%ebx
 80532d1:	7f cd                	jg     80532a0 <main+0x9680>
 80532d3:	89 95 24 ff ff ff    	mov    %edx,-0xdc(%ebp)
 80532d9:	8b 95 24 ff ff ff    	mov    -0xdc(%ebp),%edx
 80532df:	89 5a 04             	mov    %ebx,0x4(%edx)
 80532e2:	8d 1c 18             	lea    (%eax,%ebx,1),%ebx
 80532e5:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80532e8:	c7 02 ac 76 05 08    	movl   $0x80576ac,(%edx)
 80532ee:	89 5d d4             	mov    %ebx,-0x2c(%ebp)
 80532f1:	83 c0 01             	add    $0x1,%eax
 80532f4:	83 f8 07             	cmp    $0x7,%eax
 80532f7:	89 45 d0             	mov    %eax,-0x30(%ebp)
 80532fa:	0f 8f 00 0f 00 00    	jg     8054200 <main+0xa5e0>
 8053300:	83 c2 08             	add    $0x8,%edx
 8053303:	89 95 24 ff ff ff    	mov    %edx,-0xdc(%ebp)
 8053309:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
 805330f:	01 cb                	add    %ecx,%ebx
 8053311:	8b 95 24 ff ff ff    	mov    -0xdc(%ebp),%edx
 8053317:	89 4a 04             	mov    %ecx,0x4(%edx)
 805331a:	89 02                	mov    %eax,(%edx)
 805331c:	8b 45 d0             	mov    -0x30(%ebp),%eax
 805331f:	89 5d d4             	mov    %ebx,-0x2c(%ebp)
 8053322:	83 c0 01             	add    $0x1,%eax
 8053325:	83 f8 07             	cmp    $0x7,%eax
 8053328:	89 45 d0             	mov    %eax,-0x30(%ebp)
 805332b:	0f 8f 94 0e 00 00    	jg     80541c5 <main+0xa5a5>
 8053331:	89 d0                	mov    %edx,%eax
 8053333:	83 c0 08             	add    $0x8,%eax
 8053336:	f6 85 1c ff ff ff 04 	testb  $0x4,-0xe4(%ebp)
 805333d:	74 71                	je     80533b0 <main+0x9790>
 805333f:	8b 9d 14 ff ff ff    	mov    -0xec(%ebp),%ebx
 8053345:	29 f3                	sub    %esi,%ebx
 8053347:	85 db                	test   %ebx,%ebx
 8053349:	7e 65                	jle    80533b0 <main+0x9790>
 805334b:	83 fb 10             	cmp    $0x10,%ebx
 805334e:	0f 8e 6d 0d 00 00    	jle    80540c1 <main+0xa4a1>
 8053354:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8053357:	89 f6                	mov    %esi,%esi
 8053359:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8053360:	c7 40 04 10 00 00 00 	movl   $0x10,0x4(%eax)
 8053367:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 805336a:	83 c2 10             	add    $0x10,%edx
 805336d:	c7 00 bc 76 05 08    	movl   $0x80576bc,(%eax)
 8053373:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 8053376:	83 c1 01             	add    $0x1,%ecx
 8053379:	83 f9 07             	cmp    $0x7,%ecx
 805337c:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 805337f:	0f 8f 3b 0a 00 00    	jg     8053dc0 <main+0xa1a0>
 8053385:	83 c0 08             	add    $0x8,%eax
 8053388:	83 eb 10             	sub    $0x10,%ebx
 805338b:	83 fb 10             	cmp    $0x10,%ebx
 805338e:	7f d0                	jg     8053360 <main+0x9740>
 8053390:	89 58 04             	mov    %ebx,0x4(%eax)
 8053393:	01 da                	add    %ebx,%edx
 8053395:	c7 00 bc 76 05 08    	movl   $0x80576bc,(%eax)
 805339b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 805339e:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 80533a1:	83 c0 01             	add    $0x1,%eax
 80533a4:	83 f8 07             	cmp    $0x7,%eax
 80533a7:	89 45 d0             	mov    %eax,-0x30(%ebp)
 80533aa:	0f 8f 30 0a 00 00    	jg     8053de0 <main+0xa1c0>
 80533b0:	3b b5 14 ff ff ff    	cmp    -0xec(%ebp),%esi
 80533b6:	7d 06                	jge    80533be <main+0x979e>
 80533b8:	8b b5 14 ff ff ff    	mov    -0xec(%ebp),%esi
 80533be:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 80533c3:	2b 85 10 ff ff ff    	sub    -0xf0(%ebp),%eax
 80533c9:	39 c6                	cmp    %eax,%esi
 80533cb:	0f 8f cf 02 00 00    	jg     80536a0 <main+0x9a80>
 80533d1:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 80533d4:	85 d2                	test   %edx,%edx
 80533d6:	0f 85 0c 0e 00 00    	jne    80541e8 <main+0xa5c8>
 80533dc:	01 b5 10 ff ff ff    	add    %esi,-0xf0(%ebp)
 80533e2:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 80533e9:	e9 e2 fc ff ff       	jmp    80530d0 <main+0x94b0>
 80533ee:	66 90                	xchg   %ax,%ax
 80533f0:	ff 24 95 cc 63 05 08 	jmp    *0x80563cc(,%edx,4)
 80533f7:	83 8d 1c ff ff ff 10 	orl    $0x10,-0xe4(%ebp)
 80533fe:	f7 85 1c ff ff ff 00 	testl  $0x1000,-0xe4(%ebp)
 8053405:	10 00 00 
 8053408:	0f 84 4e 03 00 00    	je     805375c <main+0x9b3c>
 805340e:	8b 9d 18 ff ff ff    	mov    -0xe8(%ebp),%ebx
 8053414:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 805341a:	83 c3 01             	add    $0x1,%ebx
 805341d:	39 75 14             	cmp    %esi,0x14(%ebp)
 8053420:	89 9d 0c ff ff ff    	mov    %ebx,-0xf4(%ebp)
 8053426:	0f 82 74 03 00 00    	jb     80537a0 <main+0x9b80>
 805342c:	8b 55 10             	mov    0x10(%ebp),%edx
 805342f:	8d 44 f2 f8          	lea    -0x8(%edx,%esi,8),%eax
 8053433:	83 38 01             	cmpl   $0x1,(%eax)
 8053436:	0f 85 64 03 00 00    	jne    80537a0 <main+0x9b80>
 805343c:	8b 58 04             	mov    0x4(%eax),%ebx
 805343f:	b8 01 00 00 00       	mov    $0x1,%eax
 8053444:	89 de                	mov    %ebx,%esi
 8053446:	c1 fe 1f             	sar    $0x1f,%esi
 8053449:	e9 5b 03 00 00       	jmp    80537a9 <main+0x9b89>
 805344e:	83 8d 1c ff ff ff 10 	orl    $0x10,-0xe4(%ebp)
 8053455:	f7 85 1c ff ff ff 00 	testl  $0x1000,-0xe4(%ebp)
 805345c:	10 00 00 
 805345f:	0f 84 ab 02 00 00    	je     8053710 <main+0x9af0>
 8053465:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 805346b:	8b 8d 18 ff ff ff    	mov    -0xe8(%ebp),%ecx
 8053471:	83 c2 01             	add    $0x1,%edx
 8053474:	39 4d 14             	cmp    %ecx,0x14(%ebp)
 8053477:	89 95 0c ff ff ff    	mov    %edx,-0xf4(%ebp)
 805347d:	0f 82 d1 02 00 00    	jb     8053754 <main+0x9b34>
 8053483:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8053486:	8d 44 cb f8          	lea    -0x8(%ebx,%ecx,8),%eax
 805348a:	83 38 01             	cmpl   $0x1,(%eax)
 805348d:	0f 85 c1 02 00 00    	jne    8053754 <main+0x9b34>
 8053493:	8b 58 04             	mov    0x4(%eax),%ebx
 8053496:	31 c0                	xor    %eax,%eax
 8053498:	89 de                	mov    %ebx,%esi
 805349a:	c1 fe 1f             	sar    $0x1f,%esi
 805349d:	e9 07 03 00 00       	jmp    80537a9 <main+0x9b89>
 80534a2:	83 8d 1c ff ff ff 10 	orl    $0x10,-0xe4(%ebp)
 80534a9:	f7 85 1c ff ff ff 00 	testl  $0x1000,-0xe4(%ebp)
 80534b0:	10 00 00 
 80534b3:	0f 84 02 02 00 00    	je     80536bb <main+0x9a9b>
 80534b9:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 80534bf:	8b 8d 18 ff ff ff    	mov    -0xe8(%ebp),%ecx
 80534c5:	83 c2 01             	add    $0x1,%edx
 80534c8:	39 4d 14             	cmp    %ecx,0x14(%ebp)
 80534cb:	89 95 0c ff ff ff    	mov    %edx,-0xf4(%ebp)
 80534d1:	0f 83 99 0b 00 00    	jae    8054070 <main+0xa450>
 80534d7:	31 d2                	xor    %edx,%edx
 80534d9:	b8 01 00 00 00       	mov    $0x1,%eax
 80534de:	31 db                	xor    %ebx,%ebx
 80534e0:	31 f6                	xor    %esi,%esi
 80534e2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 80534e9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 80534f0:	85 ff                	test   %edi,%edi
 80534f2:	78 0a                	js     80534fe <main+0x98de>
 80534f4:	81 a5 1c ff ff ff 7f 	andl   $0xffffff7f,-0xe4(%ebp)
 80534fb:	ff ff ff 
 80534fe:	85 ff                	test   %edi,%edi
 8053500:	75 0f                	jne    8053511 <main+0x98f1>
 8053502:	8d 4d 8c             	lea    -0x74(%ebp),%ecx
 8053505:	89 8d 08 ff ff ff    	mov    %ecx,-0xf8(%ebp)
 805350b:	31 c9                	xor    %ecx,%ecx
 805350d:	84 d2                	test   %dl,%dl
 805350f:	74 68                	je     8053579 <main+0x9959>
 8053511:	83 f8 01             	cmp    $0x1,%eax
 8053514:	0f 84 74 09 00 00    	je     8053e8e <main+0xa26e>
 805351a:	8d 55 8c             	lea    -0x74(%ebp),%edx
 805351d:	83 f8 02             	cmp    $0x2,%eax
 8053520:	89 95 08 ff ff ff    	mov    %edx,-0xf8(%ebp)
 8053526:	0f 84 1c 09 00 00    	je     8053e48 <main+0xa228>
 805352c:	8b 95 08 ff ff ff    	mov    -0xf8(%ebp),%edx
 8053532:	89 d8                	mov    %ebx,%eax
 8053534:	83 ea 01             	sub    $0x1,%edx
 8053537:	0f ac f3 03          	shrd   $0x3,%esi,%ebx
 805353b:	83 e0 07             	and    $0x7,%eax
 805353e:	c1 ee 03             	shr    $0x3,%esi
 8053541:	83 c0 30             	add    $0x30,%eax
 8053544:	89 f1                	mov    %esi,%ecx
 8053546:	09 d9                	or     %ebx,%ecx
 8053548:	88 02                	mov    %al,(%edx)
 805354a:	75 e6                	jne    8053532 <main+0x9912>
 805354c:	f6 85 1c ff ff ff 01 	testb  $0x1,-0xe4(%ebp)
 8053553:	89 95 08 ff ff ff    	mov    %edx,-0xf8(%ebp)
 8053559:	0f 85 ff 09 00 00    	jne    8053f5e <main+0xa33e>
 805355f:	8b 8d f4 fe ff ff    	mov    -0x10c(%ebp),%ecx
 8053565:	29 d1                	sub    %edx,%ecx
 8053567:	89 f6                	mov    %esi,%esi
 8053569:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8053570:	83 f9 64             	cmp    $0x64,%ecx
 8053573:	0f 8f 3f 11 00 00    	jg     80546b8 <main+0xaa98>
 8053579:	39 f9                	cmp    %edi,%ecx
 805357b:	89 ce                	mov    %ecx,%esi
 805357d:	7d 02                	jge    8053581 <main+0x9961>
 805357f:	89 fe                	mov    %edi,%esi
 8053581:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
 8053587:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 805358b:	89 bd 04 ff ff ff    	mov    %edi,-0xfc(%ebp)
 8053591:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%ebp)
 8053597:	0f 84 09 fc ff ff    	je     80531a6 <main+0x9586>
 805359d:	83 c6 01             	add    $0x1,%esi
 80535a0:	e9 01 fc ff ff       	jmp    80531a6 <main+0x9586>
 80535a5:	89 f2                	mov    %esi,%edx
 80535a7:	30 c0                	xor    %al,%al
 80535a9:	eb 22                	jmp    80535cd <main+0x99ad>
 80535ab:	3d cc cc cc 0c       	cmp    $0xccccccc,%eax
 80535b0:	0f 8f ea 00 00 00    	jg     80536a0 <main+0x9a80>
 80535b6:	6b c0 0a             	imul   $0xa,%eax,%eax
 80535b9:	b9 2f 00 00 80       	mov    $0x8000002f,%ecx
 80535be:	29 f1                	sub    %esi,%ecx
 80535c0:	39 c8                	cmp    %ecx,%eax
 80535c2:	0f 8f d8 00 00 00    	jg     80536a0 <main+0x9a80>
 80535c8:	01 d8                	add    %ebx,%eax
 80535ca:	83 c2 01             	add    $0x1,%edx
 80535cd:	0f b6 0a             	movzbl (%edx),%ecx
 80535d0:	0f be f1             	movsbl %cl,%esi
 80535d3:	8d 5e d0             	lea    -0x30(%esi),%ebx
 80535d6:	83 fb 09             	cmp    $0x9,%ebx
 80535d9:	76 d0                	jbe    80535ab <main+0x998b>
 80535db:	80 f9 24             	cmp    $0x24,%cl
 80535de:	0f 84 fe 10 00 00    	je     80546e2 <main+0xaac2>
 80535e4:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 80535ea:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 80535f0:	83 c0 01             	add    $0x1,%eax
 80535f3:	39 75 14             	cmp    %esi,0x14(%ebp)
 80535f6:	72 10                	jb     8053608 <main+0x99e8>
 80535f8:	8b 4d 10             	mov    0x10(%ebp),%ecx
 80535fb:	8d 54 f1 f8          	lea    -0x8(%ecx,%esi,8),%edx
 80535ff:	83 3a 01             	cmpl   $0x1,(%edx)
 8053602:	0f 84 02 11 00 00    	je     805470a <main+0xaaea>
 8053608:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%ebp)
 805360e:	31 ff                	xor    %edi,%edi
 8053610:	8b 9d 20 ff ff ff    	mov    -0xe0(%ebp),%ebx
 8053616:	0f be 03             	movsbl (%ebx),%eax
 8053619:	e9 43 fb ff ff       	jmp    8053161 <main+0x9541>
 805361e:	66 90                	xchg   %ax,%ax
 8053620:	89 c3                	mov    %eax,%ebx
 8053622:	e9 ef fa ff ff       	jmp    8053116 <main+0x94f6>
 8053627:	89 f6                	mov    %esi,%esi
 8053629:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8053630:	89 f7                	mov    %esi,%edi
 8053632:	2b bd 20 ff ff ff    	sub    -0xe0(%ebp),%edi
 8053638:	78 66                	js     80536a0 <main+0x9a80>
 805363a:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 805363f:	2b 85 10 ff ff ff    	sub    -0xf0(%ebp),%eax
 8053645:	39 c7                	cmp    %eax,%edi
 8053647:	7f 57                	jg     80536a0 <main+0x9a80>
 8053649:	8b 45 d0             	mov    -0x30(%ebp),%eax
 805364c:	8b 8d 20 ff ff ff    	mov    -0xe0(%ebp),%ecx
 8053652:	01 7d d4             	add    %edi,-0x2c(%ebp)
 8053655:	83 c0 01             	add    $0x1,%eax
 8053658:	83 f8 07             	cmp    $0x7,%eax
 805365b:	89 4d 8c             	mov    %ecx,-0x74(%ebp)
 805365e:	89 7d 90             	mov    %edi,-0x70(%ebp)
 8053661:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8053664:	0f 8f 85 0e 00 00    	jg     80544ef <main+0xa8cf>
 805366a:	8d 45 94             	lea    -0x6c(%ebp),%eax
 805366d:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 8053673:	01 bd 10 ff ff ff    	add    %edi,-0xf0(%ebp)
 8053679:	85 db                	test   %ebx,%ebx
 805367b:	0f 8f b2 fa ff ff    	jg     8053133 <main+0x9513>
 8053681:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8053684:	85 c0                	test   %eax,%eax
 8053686:	74 22                	je     80536aa <main+0x9a8a>
 8053688:	8b 45 08             	mov    0x8(%ebp),%eax
 805368b:	8d 55 cc             	lea    -0x34(%ebp),%edx
 805368e:	e8 1d f9 ff ff       	call   8052fb0 <main+0x9390>
 8053693:	85 c0                	test   %eax,%eax
 8053695:	74 13                	je     80536aa <main+0x9a8a>
 8053697:	89 f6                	mov    %esi,%esi
 8053699:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 80536a0:	c7 85 10 ff ff ff ff 	movl   $0xffffffff,-0xf0(%ebp)
 80536a7:	ff ff ff 
 80536aa:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 80536b0:	81 c4 1c 01 00 00    	add    $0x11c,%esp
 80536b6:	5b                   	pop    %ebx
 80536b7:	5e                   	pop    %esi
 80536b8:	5f                   	pop    %edi
 80536b9:	5d                   	pop    %ebp
 80536ba:	c3                   	ret    
 80536bb:	f6 85 1c ff ff ff 20 	testb  $0x20,-0xe4(%ebp)
 80536c2:	0f 85 78 09 00 00    	jne    8054040 <main+0xa420>
 80536c8:	f6 85 1c ff ff ff 10 	testb  $0x10,-0xe4(%ebp)
 80536cf:	0f 84 27 0a 00 00    	je     80540fc <main+0xa4dc>
 80536d5:	8b 8d 18 ff ff ff    	mov    -0xe8(%ebp),%ecx
 80536db:	8b 9d 18 ff ff ff    	mov    -0xe8(%ebp),%ebx
 80536e1:	83 c1 01             	add    $0x1,%ecx
 80536e4:	39 5d 14             	cmp    %ebx,0x14(%ebp)
 80536e7:	89 8d 0c ff ff ff    	mov    %ecx,-0xf4(%ebp)
 80536ed:	0f 82 e4 fd ff ff    	jb     80534d7 <main+0x98b7>
 80536f3:	8b 75 10             	mov    0x10(%ebp),%esi
 80536f6:	8d 44 de f8          	lea    -0x8(%esi,%ebx,8),%eax
 80536fa:	83 38 01             	cmpl   $0x1,(%eax)
 80536fd:	0f 85 d4 fd ff ff    	jne    80534d7 <main+0x98b7>
 8053703:	e9 78 09 00 00       	jmp    8054080 <main+0xa460>
 8053708:	90                   	nop
 8053709:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8053710:	f6 85 1c ff ff ff 20 	testb  $0x20,-0xe4(%ebp)
 8053717:	0f 85 c8 08 00 00    	jne    8053fe5 <main+0xa3c5>
 805371d:	f6 85 1c ff ff ff 10 	testb  $0x10,-0xe4(%ebp)
 8053724:	0f 84 58 0a 00 00    	je     8054182 <main+0xa562>
 805372a:	8b 8d 18 ff ff ff    	mov    -0xe8(%ebp),%ecx
 8053730:	8b 9d 18 ff ff ff    	mov    -0xe8(%ebp),%ebx
 8053736:	83 c1 01             	add    $0x1,%ecx
 8053739:	39 5d 14             	cmp    %ebx,0x14(%ebp)
 805373c:	89 8d 0c ff ff ff    	mov    %ecx,-0xf4(%ebp)
 8053742:	72 10                	jb     8053754 <main+0x9b34>
 8053744:	8b 75 10             	mov    0x10(%ebp),%esi
 8053747:	8d 44 de f8          	lea    -0x8(%esi,%ebx,8),%eax
 805374b:	83 38 01             	cmpl   $0x1,(%eax)
 805374e:	0f 84 82 0c 00 00    	je     80543d6 <main+0xa7b6>
 8053754:	31 c0                	xor    %eax,%eax
 8053756:	31 db                	xor    %ebx,%ebx
 8053758:	31 f6                	xor    %esi,%esi
 805375a:	eb 4d                	jmp    80537a9 <main+0x9b89>
 805375c:	f6 85 1c ff ff ff 20 	testb  $0x20,-0xe4(%ebp)
 8053763:	0f 85 49 08 00 00    	jne    8053fb2 <main+0xa392>
 8053769:	f6 85 1c ff ff ff 10 	testb  $0x10,-0xe4(%ebp)
 8053770:	0f 84 c9 09 00 00    	je     805413f <main+0xa51f>
 8053776:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 805377c:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 8053782:	83 c0 01             	add    $0x1,%eax
 8053785:	39 55 14             	cmp    %edx,0x14(%ebp)
 8053788:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 805378e:	72 10                	jb     80537a0 <main+0x9b80>
 8053790:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8053793:	8d 44 d1 f8          	lea    -0x8(%ecx,%edx,8),%eax
 8053797:	83 38 01             	cmpl   $0x1,(%eax)
 805379a:	0f 84 c6 0b 00 00    	je     8054366 <main+0xa746>
 80537a0:	b8 01 00 00 00       	mov    $0x1,%eax
 80537a5:	31 db                	xor    %ebx,%ebx
 80537a7:	31 f6                	xor    %esi,%esi
 80537a9:	89 d9                	mov    %ebx,%ecx
 80537ab:	09 f1                	or     %esi,%ecx
 80537ad:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 80537b1:	0f 95 c2             	setne  %dl
 80537b4:	e9 37 fd ff ff       	jmp    80534f0 <main+0x98d0>
 80537b9:	81 8d 1c ff ff ff 00 	orl    $0x400,-0xe4(%ebp)
 80537c0:	04 00 00 
 80537c3:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
 80537c9:	0f be 02             	movsbl (%edx),%eax
 80537cc:	e9 90 f9 ff ff       	jmp    8053161 <main+0x9541>
 80537d1:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 80537d5:	0f 85 fc 00 00 00    	jne    80538d7 <main+0x9cb7>
 80537db:	8b 9d 20 ff ff ff    	mov    -0xe0(%ebp),%ebx
 80537e1:	c6 45 e7 20          	movb   $0x20,-0x19(%ebp)
 80537e5:	0f be 03             	movsbl (%ebx),%eax
 80537e8:	e9 74 f9 ff ff       	jmp    8053161 <main+0x9541>
 80537ed:	8b b5 20 ff ff ff    	mov    -0xe0(%ebp),%esi
 80537f3:	0f b6 16             	movzbl (%esi),%edx
 80537f6:	0f be c2             	movsbl %dl,%eax
 80537f9:	8d 48 d0             	lea    -0x30(%eax),%ecx
 80537fc:	83 f9 09             	cmp    $0x9,%ecx
 80537ff:	0f 87 66 0d 00 00    	ja     805456b <main+0xa94b>
 8053805:	ba 2f 00 00 80       	mov    $0x8000002f,%edx
 805380a:	39 c2                	cmp    %eax,%edx
 805380c:	0f 88 8e fe ff ff    	js     80536a0 <main+0x9a80>
 8053812:	89 bd 14 ff ff ff    	mov    %edi,-0xec(%ebp)
 8053818:	8b 9d 20 ff ff ff    	mov    -0xe0(%ebp),%ebx
 805381e:	31 d2                	xor    %edx,%edx
 8053820:	89 c7                	mov    %eax,%edi
 8053822:	eb 2c                	jmp    8053850 <main+0x9c30>
 8053824:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 805382a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 8053830:	81 fa cc cc cc 0c    	cmp    $0xccccccc,%edx
 8053836:	0f 8f 64 fe ff ff    	jg     80536a0 <main+0x9a80>
 805383c:	8d 14 92             	lea    (%edx,%edx,4),%edx
 805383f:	b8 2f 00 00 80       	mov    $0x8000002f,%eax
 8053844:	01 d2                	add    %edx,%edx
 8053846:	29 f0                	sub    %esi,%eax
 8053848:	39 c2                	cmp    %eax,%edx
 805384a:	0f 8f 50 fe ff ff    	jg     80536a0 <main+0x9a80>
 8053850:	83 c3 01             	add    $0x1,%ebx
 8053853:	01 ca                	add    %ecx,%edx
 8053855:	0f b6 03             	movzbl (%ebx),%eax
 8053858:	0f be f0             	movsbl %al,%esi
 805385b:	8d 4e d0             	lea    -0x30(%esi),%ecx
 805385e:	83 f9 09             	cmp    $0x9,%ecx
 8053861:	76 cd                	jbe    8053830 <main+0x9c10>
 8053863:	89 c1                	mov    %eax,%ecx
 8053865:	89 f8                	mov    %edi,%eax
 8053867:	8b bd 14 ff ff ff    	mov    -0xec(%ebp),%edi
 805386d:	80 f9 24             	cmp    $0x24,%cl
 8053870:	0f 84 ec 0b 00 00    	je     8054462 <main+0xa842>
 8053876:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 805387c:	8b 9d 18 ff ff ff    	mov    -0xe8(%ebp),%ebx
 8053882:	83 c2 01             	add    $0x1,%edx
 8053885:	39 5d 14             	cmp    %ebx,0x14(%ebp)
 8053888:	0f 82 1e 08 00 00    	jb     80540ac <main+0xa48c>
 805388e:	8b 75 10             	mov    0x10(%ebp),%esi
 8053891:	8d 4c de f8          	lea    -0x8(%esi,%ebx,8),%ecx
 8053895:	83 39 01             	cmpl   $0x1,(%ecx)
 8053898:	0f 85 0e 08 00 00    	jne    80540ac <main+0xa48c>
 805389e:	8b 49 04             	mov    0x4(%ecx),%ecx
 80538a1:	89 95 18 ff ff ff    	mov    %edx,-0xe8(%ebp)
 80538a7:	89 8d 14 ff ff ff    	mov    %ecx,-0xec(%ebp)
 80538ad:	83 bd 14 ff ff ff 00 	cmpl   $0x0,-0xec(%ebp)
 80538b4:	0f 89 09 ff ff ff    	jns    80537c3 <main+0x9ba3>
 80538ba:	81 bd 14 ff ff ff 00 	cmpl   $0x80000000,-0xec(%ebp)
 80538c1:	00 00 80 
 80538c4:	0f 84 d6 fd ff ff    	je     80536a0 <main+0x9a80>
 80538ca:	f7 9d 14 ff ff ff    	negl   -0xec(%ebp)
 80538d0:	83 8d 1c ff ff ff 04 	orl    $0x4,-0xe4(%ebp)
 80538d7:	8b 8d 20 ff ff ff    	mov    -0xe0(%ebp),%ecx
 80538dd:	0f be 01             	movsbl (%ecx),%eax
 80538e0:	e9 7c f8 ff ff       	jmp    8053161 <main+0x9541>
 80538e5:	8b 9d 20 ff ff ff    	mov    -0xe0(%ebp),%ebx
 80538eb:	c6 45 e7 2b          	movb   $0x2b,-0x19(%ebp)
 80538ef:	0f be 03             	movsbl (%ebx),%eax
 80538f2:	e9 6a f8 ff ff       	jmp    8053161 <main+0x9541>
 80538f7:	8b b5 20 ff ff ff    	mov    -0xe0(%ebp),%esi
 80538fd:	83 8d 1c ff ff ff 01 	orl    $0x1,-0xe4(%ebp)
 8053904:	0f be 06             	movsbl (%esi),%eax
 8053907:	e9 55 f8 ff ff       	jmp    8053161 <main+0x9541>
 805390c:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 8053912:	8b 8d 18 ff ff ff    	mov    -0xe8(%ebp),%ecx
 8053918:	83 c0 01             	add    $0x1,%eax
 805391b:	39 4d 14             	cmp    %ecx,0x14(%ebp)
 805391e:	0f 82 2c 03 00 00    	jb     8053c50 <main+0xa030>
 8053924:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8053927:	8d 54 cb f8          	lea    -0x8(%ebx,%ecx,8),%edx
 805392b:	83 3a 01             	cmpl   $0x1,(%edx)
 805392e:	0f 85 1c 03 00 00    	jne    8053c50 <main+0xa030>
 8053934:	0f b6 52 04          	movzbl 0x4(%edx),%edx
 8053938:	e9 15 03 00 00       	jmp    8053c52 <main+0xa032>
 805393d:	c7 85 00 ff ff ff 38 	movl   $0x8056538,-0x100(%ebp)
 8053944:	65 05 08 
 8053947:	f7 85 1c ff ff ff 00 	testl  $0x1000,-0xe4(%ebp)
 805394e:	10 00 00 
 8053951:	74 52                	je     80539a5 <main+0x9d85>
 8053953:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 8053959:	8b 8d 18 ff ff ff    	mov    -0xe8(%ebp),%ecx
 805395f:	83 c2 01             	add    $0x1,%edx
 8053962:	39 4d 14             	cmp    %ecx,0x14(%ebp)
 8053965:	89 95 0c ff ff ff    	mov    %edx,-0xf4(%ebp)
 805396b:	0f 82 90 00 00 00    	jb     8053a01 <main+0x9de1>
 8053971:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8053974:	8d 54 cb f8          	lea    -0x8(%ebx,%ecx,8),%edx
 8053978:	83 3a 01             	cmpl   $0x1,(%edx)
 805397b:	0f 85 80 00 00 00    	jne    8053a01 <main+0x9de1>
 8053981:	8b 5a 04             	mov    0x4(%edx),%ebx
 8053984:	89 de                	mov    %ebx,%esi
 8053986:	c1 fe 1f             	sar    $0x1f,%esi
 8053989:	89 f2                	mov    %esi,%edx
 805398b:	09 da                	or     %ebx,%edx
 805398d:	74 0c                	je     805399b <main+0x9d7b>
 805398f:	f6 85 1c ff ff ff 01 	testb  $0x1,-0xe4(%ebp)
 8053996:	74 03                	je     805399b <main+0x9d7b>
 8053998:	88 45 e6             	mov    %al,-0x1a(%ebp)
 805399b:	b8 02 00 00 00       	mov    $0x2,%eax
 80539a0:	e9 04 fe ff ff       	jmp    80537a9 <main+0x9b89>
 80539a5:	f6 85 1c ff ff ff 20 	testb  $0x20,-0xe4(%ebp)
 80539ac:	0f 85 cd 05 00 00    	jne    8053f7f <main+0xa35f>
 80539b2:	f6 85 1c ff ff ff 10 	testb  $0x10,-0xe4(%ebp)
 80539b9:	75 1c                	jne    80539d7 <main+0x9db7>
 80539bb:	f7 85 1c ff ff ff 00 	testl  $0x200,-0xe4(%ebp)
 80539c2:	02 00 00 
 80539c5:	75 10                	jne    80539d7 <main+0x9db7>
 80539c7:	f7 85 1c ff ff ff 00 	testl  $0x400,-0xe4(%ebp)
 80539ce:	04 00 00 
 80539d1:	0f 84 0b 0a 00 00    	je     80543e2 <main+0xa7c2>
 80539d7:	8b 9d 18 ff ff ff    	mov    -0xe8(%ebp),%ebx
 80539dd:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 80539e3:	83 c3 01             	add    $0x1,%ebx
 80539e6:	39 75 14             	cmp    %esi,0x14(%ebp)
 80539e9:	89 9d 0c ff ff ff    	mov    %ebx,-0xf4(%ebp)
 80539ef:	72 10                	jb     8053a01 <main+0x9de1>
 80539f1:	8b 4d 10             	mov    0x10(%ebp),%ecx
 80539f4:	8d 54 f1 f8          	lea    -0x8(%ecx,%esi,8),%edx
 80539f8:	83 3a 01             	cmpl   $0x1,(%edx)
 80539fb:	0f 84 27 0a 00 00    	je     8054428 <main+0xa808>
 8053a01:	b8 02 00 00 00       	mov    $0x2,%eax
 8053a06:	31 db                	xor    %ebx,%ebx
 8053a08:	31 f6                	xor    %esi,%esi
 8053a0a:	e9 9a fd ff ff       	jmp    80537a9 <main+0x9b89>
 8053a0f:	31 d2                	xor    %edx,%edx
 8053a11:	8b 8d 20 ff ff ff    	mov    -0xe0(%ebp),%ecx
 8053a17:	eb 13                	jmp    8053a2c <main+0x9e0c>
 8053a19:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8053a20:	81 fa cc cc cc 0c    	cmp    $0xccccccc,%edx
 8053a26:	0f 8f 74 fc ff ff    	jg     80536a0 <main+0x9a80>
 8053a2c:	8d 14 92             	lea    (%edx,%edx,4),%edx
 8053a2f:	bb 2f 00 00 80       	mov    $0x8000002f,%ebx
 8053a34:	01 d2                	add    %edx,%edx
 8053a36:	29 c3                	sub    %eax,%ebx
 8053a38:	39 da                	cmp    %ebx,%edx
 8053a3a:	0f 8f 60 fc ff ff    	jg     80536a0 <main+0x9a80>
 8053a40:	8d 54 10 d0          	lea    -0x30(%eax,%edx,1),%edx
 8053a44:	0f be 01             	movsbl (%ecx),%eax
 8053a47:	83 c1 01             	add    $0x1,%ecx
 8053a4a:	8d 58 d0             	lea    -0x30(%eax),%ebx
 8053a4d:	83 fb 09             	cmp    $0x9,%ebx
 8053a50:	76 ce                	jbe    8053a20 <main+0x9e00>
 8053a52:	83 f8 24             	cmp    $0x24,%eax
 8053a55:	89 8d 20 ff ff ff    	mov    %ecx,-0xe0(%ebp)
 8053a5b:	0f 84 15 0b 00 00    	je     8054576 <main+0xa956>
 8053a61:	89 95 14 ff ff ff    	mov    %edx,-0xec(%ebp)
 8053a67:	e9 fc f6 ff ff       	jmp    8053168 <main+0x9548>
 8053a6c:	8b 8d 20 ff ff ff    	mov    -0xe0(%ebp),%ecx
 8053a72:	81 8d 1c ff ff ff 80 	orl    $0x80,-0xe4(%ebp)
 8053a79:	00 00 00 
 8053a7c:	0f be 01             	movsbl (%ecx),%eax
 8053a7f:	e9 dd f6 ff ff       	jmp    8053161 <main+0x9541>
 8053a84:	8b b5 20 ff ff ff    	mov    -0xe0(%ebp),%esi
 8053a8a:	0f be 06             	movsbl (%esi),%eax
 8053a8d:	83 c6 01             	add    $0x1,%esi
 8053a90:	89 b5 20 ff ff ff    	mov    %esi,-0xe0(%ebp)
 8053a96:	83 f8 2a             	cmp    $0x2a,%eax
 8053a99:	0f 84 06 fb ff ff    	je     80535a5 <main+0x9985>
 8053a9f:	8d 48 d0             	lea    -0x30(%eax),%ecx
 8053aa2:	31 d2                	xor    %edx,%edx
 8053aa4:	83 f9 09             	cmp    $0x9,%ecx
 8053aa7:	77 4e                	ja     8053af7 <main+0x9ed7>
 8053aa9:	ba 2f 00 00 80       	mov    $0x8000002f,%edx
 8053aae:	39 c2                	cmp    %eax,%edx
 8053ab0:	0f 88 ea fb ff ff    	js     80536a0 <main+0x9a80>
 8053ab6:	31 d2                	xor    %edx,%edx
 8053ab8:	8b 9d 20 ff ff ff    	mov    -0xe0(%ebp),%ebx
 8053abe:	eb 20                	jmp    8053ae0 <main+0x9ec0>
 8053ac0:	81 fa cc cc cc 0c    	cmp    $0xccccccc,%edx
 8053ac6:	0f 8f d4 fb ff ff    	jg     80536a0 <main+0x9a80>
 8053acc:	8d 14 92             	lea    (%edx,%edx,4),%edx
 8053acf:	be 2f 00 00 80       	mov    $0x8000002f,%esi
 8053ad4:	01 d2                	add    %edx,%edx
 8053ad6:	29 c6                	sub    %eax,%esi
 8053ad8:	39 f2                	cmp    %esi,%edx
 8053ada:	0f 8f c0 fb ff ff    	jg     80536a0 <main+0x9a80>
 8053ae0:	0f be 03             	movsbl (%ebx),%eax
 8053ae3:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8053ae6:	83 c3 01             	add    $0x1,%ebx
 8053ae9:	8d 48 d0             	lea    -0x30(%eax),%ecx
 8053aec:	83 f9 09             	cmp    $0x9,%ecx
 8053aef:	76 cf                	jbe    8053ac0 <main+0x9ea0>
 8053af1:	89 9d 20 ff ff ff    	mov    %ebx,-0xe0(%ebp)
 8053af7:	83 f8 24             	cmp    $0x24,%eax
 8053afa:	0f 84 bd 0b 00 00    	je     80546bd <main+0xaa9d>
 8053b00:	89 d7                	mov    %edx,%edi
 8053b02:	e9 61 f6 ff ff       	jmp    8053168 <main+0x9548>
 8053b07:	c7 85 00 ff ff ff 48 	movl   $0x8056548,-0x100(%ebp)
 8053b0e:	65 05 08 
 8053b11:	e9 31 fe ff ff       	jmp    8053947 <main+0x9d27>
 8053b16:	8b b5 20 ff ff ff    	mov    -0xe0(%ebp),%esi
 8053b1c:	81 8d 1c ff ff ff 00 	orl    $0x200,-0xe4(%ebp)
 8053b23:	02 00 00 
 8053b26:	0f be 06             	movsbl (%esi),%eax
 8053b29:	e9 33 f6 ff ff       	jmp    8053161 <main+0x9541>
 8053b2e:	8b 9d 18 ff ff ff    	mov    -0xe8(%ebp),%ebx
 8053b34:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 8053b3a:	83 c3 01             	add    $0x1,%ebx
 8053b3d:	39 45 14             	cmp    %eax,0x14(%ebp)
 8053b40:	0f 83 d2 04 00 00    	jae    8054018 <main+0xa3f8>
 8053b46:	c7 85 08 ff ff ff c4 	movl   $0x80563c4,-0xf8(%ebp)
 8053b4d:	63 05 08 
 8053b50:	85 ff                	test   %edi,%edi
 8053b52:	0f 88 f6 09 00 00    	js     805454e <main+0xa92e>
 8053b58:	8b 8d 08 ff ff ff    	mov    -0xf8(%ebp),%ecx
 8053b5e:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8053b62:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8053b69:	00 
 8053b6a:	89 0c 24             	mov    %ecx,(%esp)
 8053b6d:	e8 72 5b ff ff       	call   80496e4 <memchr@plt>
 8053b72:	89 f9                	mov    %edi,%ecx
 8053b74:	85 c0                	test   %eax,%eax
 8053b76:	74 08                	je     8053b80 <main+0x9f60>
 8053b78:	89 c1                	mov    %eax,%ecx
 8053b7a:	2b 8d 08 ff ff ff    	sub    -0xf8(%ebp),%ecx
 8053b80:	89 ce                	mov    %ecx,%esi
 8053b82:	c1 fe 1f             	sar    $0x1f,%esi
 8053b85:	f7 d6                	not    %esi
 8053b87:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 8053b8b:	21 ce                	and    %ecx,%esi
 8053b8d:	89 9d 18 ff ff ff    	mov    %ebx,-0xe8(%ebp)
 8053b93:	e9 04 f6 ff ff       	jmp    805319c <main+0x957c>
 8053b98:	8b 9d 20 ff ff ff    	mov    -0xe0(%ebp),%ebx
 8053b9e:	83 8d 1c ff ff ff 20 	orl    $0x20,-0xe4(%ebp)
 8053ba5:	0f be 03             	movsbl (%ebx),%eax
 8053ba8:	e9 b4 f5 ff ff       	jmp    8053161 <main+0x9541>
 8053bad:	8b 8d 18 ff ff ff    	mov    -0xe8(%ebp),%ecx
 8053bb3:	8b 9d 18 ff ff ff    	mov    -0xe8(%ebp),%ebx
 8053bb9:	83 c1 01             	add    $0x1,%ecx
 8053bbc:	39 5d 14             	cmp    %ebx,0x14(%ebp)
 8053bbf:	89 8d 0c ff ff ff    	mov    %ecx,-0xf4(%ebp)
 8053bc5:	72 6d                	jb     8053c34 <main+0xa014>
 8053bc7:	8b 75 10             	mov    0x10(%ebp),%esi
 8053bca:	8d 44 de f8          	lea    -0x8(%esi,%ebx,8),%eax
 8053bce:	83 38 02             	cmpl   $0x2,(%eax)
 8053bd1:	75 61                	jne    8053c34 <main+0xa014>
 8053bd3:	8b 58 04             	mov    0x4(%eax),%ebx
 8053bd6:	31 f6                	xor    %esi,%esi
 8053bd8:	eb 5e                	jmp    8053c38 <main+0xa018>
 8053bda:	8b 8d 20 ff ff ff    	mov    -0xe0(%ebp),%ecx
 8053be0:	0f b6 11             	movzbl (%ecx),%edx
 8053be3:	80 fa 6c             	cmp    $0x6c,%dl
 8053be6:	0f 84 f8 04 00 00    	je     80540e4 <main+0xa4c4>
 8053bec:	83 8d 1c ff ff ff 10 	orl    $0x10,-0xe4(%ebp)
 8053bf3:	0f be c2             	movsbl %dl,%eax
 8053bf6:	e9 66 f5 ff ff       	jmp    8053161 <main+0x9541>
 8053bfb:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
 8053c01:	81 8d 1c ff ff ff 00 	orl    $0x1000,-0xe4(%ebp)
 8053c08:	10 00 00 
 8053c0b:	0f be 02             	movsbl (%edx),%eax
 8053c0e:	e9 4e f5 ff ff       	jmp    8053161 <main+0x9541>
 8053c13:	8b b5 20 ff ff ff    	mov    -0xe0(%ebp),%esi
 8053c19:	0f b6 16             	movzbl (%esi),%edx
 8053c1c:	80 fa 68             	cmp    $0x68,%dl
 8053c1f:	0f 84 a4 04 00 00    	je     80540c9 <main+0xa4a9>
 8053c25:	83 8d 1c ff ff ff 40 	orl    $0x40,-0xe4(%ebp)
 8053c2c:	0f be c2             	movsbl %dl,%eax
 8053c2f:	e9 2d f5 ff ff       	jmp    8053161 <main+0x9541>
 8053c34:	31 db                	xor    %ebx,%ebx
 8053c36:	31 f6                	xor    %esi,%esi
 8053c38:	c6 45 e6 78          	movb   $0x78,-0x1a(%ebp)
 8053c3c:	b8 02 00 00 00       	mov    $0x2,%eax
 8053c41:	c7 85 00 ff ff ff 48 	movl   $0x8056548,-0x100(%ebp)
 8053c48:	65 05 08 
 8053c4b:	e9 59 fb ff ff       	jmp    80537a9 <main+0x9b89>
 8053c50:	31 d2                	xor    %edx,%edx
 8053c52:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%ebp)
 8053c58:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8053c5e:	be 01 00 00 00       	mov    $0x1,%esi
 8053c63:	88 95 28 ff ff ff    	mov    %dl,-0xd8(%ebp)
 8053c69:	b9 01 00 00 00       	mov    $0x1,%ecx
 8053c6e:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 8053c72:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 8053c78:	e9 1f f5 ff ff       	jmp    805319c <main+0x957c>
 8053c7d:	8d 76 00             	lea    0x0(%esi),%esi
 8053c80:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 8053c84:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8053c87:	0f 84 d6 f5 ff ff    	je     8053263 <main+0x9643>
 8053c8d:	8b 9d 24 ff ff ff    	mov    -0xdc(%ebp),%ebx
 8053c93:	8d 55 e7             	lea    -0x19(%ebp),%edx
 8053c96:	83 c0 01             	add    $0x1,%eax
 8053c99:	c7 43 04 01 00 00 00 	movl   $0x1,0x4(%ebx)
 8053ca0:	89 13                	mov    %edx,(%ebx)
 8053ca2:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8053ca5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8053ca8:	83 c2 01             	add    $0x1,%edx
 8053cab:	83 fa 07             	cmp    $0x7,%edx
 8053cae:	89 55 d0             	mov    %edx,-0x30(%ebp)
 8053cb1:	0f 8f d8 07 00 00    	jg     805448f <main+0xa86f>
 8053cb7:	83 c3 08             	add    $0x8,%ebx
 8053cba:	80 7d e6 00          	cmpb   $0x0,-0x1a(%ebp)
 8053cbe:	89 9d 24 ff ff ff    	mov    %ebx,-0xdc(%ebp)
 8053cc4:	0f 84 a6 f5 ff ff    	je     8053270 <main+0x9650>
 8053cca:	8b 9d 24 ff ff ff    	mov    -0xdc(%ebp),%ebx
 8053cd0:	8d 55 e5             	lea    -0x1b(%ebp),%edx
 8053cd3:	83 c0 02             	add    $0x2,%eax
 8053cd6:	c6 45 e5 30          	movb   $0x30,-0x1b(%ebp)
 8053cda:	c7 43 04 02 00 00 00 	movl   $0x2,0x4(%ebx)
 8053ce1:	89 13                	mov    %edx,(%ebx)
 8053ce3:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8053ce6:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8053ce9:	83 c2 01             	add    $0x1,%edx
 8053cec:	83 fa 07             	cmp    $0x7,%edx
 8053cef:	89 55 d0             	mov    %edx,-0x30(%ebp)
 8053cf2:	0f 8f 3a 07 00 00    	jg     8054432 <main+0xa812>
 8053cf8:	83 c3 08             	add    $0x8,%ebx
 8053cfb:	83 c7 80             	add    $0xffffff80,%edi
 8053cfe:	89 9d 24 ff ff ff    	mov    %ebx,-0xdc(%ebp)
 8053d04:	0f 85 72 f5 ff ff    	jne    805327c <main+0x965c>
 8053d0a:	8b 9d 14 ff ff ff    	mov    -0xec(%ebp),%ebx
 8053d10:	29 f3                	sub    %esi,%ebx
 8053d12:	85 db                	test   %ebx,%ebx
 8053d14:	0f 8e 62 f5 ff ff    	jle    805327c <main+0x965c>
 8053d1a:	83 fb 10             	cmp    $0x10,%ebx
 8053d1d:	7e 4a                	jle    8053d69 <main+0xa149>
 8053d1f:	8b 95 24 ff ff ff    	mov    -0xdc(%ebp),%edx
 8053d25:	eb 0c                	jmp    8053d33 <main+0xa113>
 8053d27:	89 f6                	mov    %esi,%esi
 8053d29:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8053d30:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8053d33:	c7 42 04 10 00 00 00 	movl   $0x10,0x4(%edx)
 8053d3a:	8b 7d d0             	mov    -0x30(%ebp),%edi
 8053d3d:	83 c0 10             	add    $0x10,%eax
 8053d40:	c7 02 ac 76 05 08    	movl   $0x80576ac,(%edx)
 8053d46:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8053d49:	83 c7 01             	add    $0x1,%edi
 8053d4c:	83 ff 07             	cmp    $0x7,%edi
 8053d4f:	89 7d d0             	mov    %edi,-0x30(%ebp)
 8053d52:	0f 8f dc 01 00 00    	jg     8053f34 <main+0xa314>
 8053d58:	83 c2 08             	add    $0x8,%edx
 8053d5b:	83 eb 10             	sub    $0x10,%ebx
 8053d5e:	83 fb 10             	cmp    $0x10,%ebx
 8053d61:	7f cd                	jg     8053d30 <main+0xa110>
 8053d63:	89 95 24 ff ff ff    	mov    %edx,-0xdc(%ebp)
 8053d69:	8b 95 24 ff ff ff    	mov    -0xdc(%ebp),%edx
 8053d6f:	01 d8                	add    %ebx,%eax
 8053d71:	89 5a 04             	mov    %ebx,0x4(%edx)
 8053d74:	c7 02 ac 76 05 08    	movl   $0x80576ac,(%edx)
 8053d7a:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8053d7d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8053d80:	83 c2 01             	add    $0x1,%edx
 8053d83:	83 fa 07             	cmp    $0x7,%edx
 8053d86:	89 55 d0             	mov    %edx,-0x30(%ebp)
 8053d89:	0f 8f 81 07 00 00    	jg     8054510 <main+0xa8f0>
 8053d8f:	8b 9d 04 ff ff ff    	mov    -0xfc(%ebp),%ebx
 8053d95:	83 85 24 ff ff ff 08 	addl   $0x8,-0xdc(%ebp)
 8053d9c:	29 cb                	sub    %ecx,%ebx
 8053d9e:	85 db                	test   %ebx,%ebx
 8053da0:	0f 8f e9 f4 ff ff    	jg     805328f <main+0x966f>
 8053da6:	8d 76 00             	lea    0x0(%esi),%esi
 8053da9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8053db0:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 8053db3:	e9 51 f5 ff ff       	jmp    8053309 <main+0x96e9>
 8053db8:	90                   	nop
 8053db9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8053dc0:	8b 45 08             	mov    0x8(%ebp),%eax
 8053dc3:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8053dc6:	e8 e5 f1 ff ff       	call   8052fb0 <main+0x9390>
 8053dcb:	85 c0                	test   %eax,%eax
 8053dcd:	0f 85 cd f8 ff ff    	jne    80536a0 <main+0x9a80>
 8053dd3:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8053dd6:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8053dd9:	e9 aa f5 ff ff       	jmp    8053388 <main+0x9768>
 8053dde:	66 90                	xchg   %ax,%ax
 8053de0:	8b 45 08             	mov    0x8(%ebp),%eax
 8053de3:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8053de6:	e8 c5 f1 ff ff       	call   8052fb0 <main+0x9390>
 8053deb:	85 c0                	test   %eax,%eax
 8053ded:	0f 84 bd f5 ff ff    	je     80533b0 <main+0x9790>
 8053df3:	e9 a8 f8 ff ff       	jmp    80536a0 <main+0x9a80>
 8053df8:	90                   	nop
 8053df9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8053e00:	8b 45 08             	mov    0x8(%ebp),%eax
 8053e03:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8053e06:	89 8d fc fe ff ff    	mov    %ecx,-0x104(%ebp)
 8053e0c:	e8 9f f1 ff ff       	call   8052fb0 <main+0x9390>
 8053e11:	8b 8d fc fe ff ff    	mov    -0x104(%ebp),%ecx
 8053e17:	85 c0                	test   %eax,%eax
 8053e19:	0f 85 81 f8 ff ff    	jne    80536a0 <main+0x9a80>
 8053e1f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8053e22:	8d 55 8c             	lea    -0x74(%ebp),%edx
 8053e25:	e9 a1 f4 ff ff       	jmp    80532cb <main+0x96ab>
 8053e2a:	8b 45 08             	mov    0x8(%ebp),%eax
 8053e2d:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8053e30:	e8 7b f1 ff ff       	call   8052fb0 <main+0x9390>
 8053e35:	85 c0                	test   %eax,%eax
 8053e37:	0f 85 63 f8 ff ff    	jne    80536a0 <main+0x9a80>
 8053e3d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8053e40:	8d 55 8c             	lea    -0x74(%ebp),%edx
 8053e43:	e9 d0 f3 ff ff       	jmp    8053218 <main+0x95f8>
 8053e48:	8b 8d 00 ff ff ff    	mov    -0x100(%ebp),%ecx
 8053e4e:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8053e51:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 8053e57:	89 f6                	mov    %esi,%esi
 8053e59:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8053e60:	89 da                	mov    %ebx,%edx
 8053e62:	83 e8 01             	sub    $0x1,%eax
 8053e65:	83 e2 0f             	and    $0xf,%edx
 8053e68:	0f b6 14 11          	movzbl (%ecx,%edx,1),%edx
 8053e6c:	0f ac f3 04          	shrd   $0x4,%esi,%ebx
 8053e70:	c1 ee 04             	shr    $0x4,%esi
 8053e73:	88 10                	mov    %dl,(%eax)
 8053e75:	89 f2                	mov    %esi,%edx
 8053e77:	09 da                	or     %ebx,%edx
 8053e79:	75 e5                	jne    8053e60 <main+0xa240>
 8053e7b:	8b 8d f4 fe ff ff    	mov    -0x10c(%ebp),%ecx
 8053e81:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 8053e87:	29 c1                	sub    %eax,%ecx
 8053e89:	e9 e2 f6 ff ff       	jmp    8053570 <main+0x9950>
 8053e8e:	83 fe 00             	cmp    $0x0,%esi
 8053e91:	77 0e                	ja     8053ea1 <main+0xa281>
 8053e93:	8d 4d 8c             	lea    -0x74(%ebp),%ecx
 8053e96:	83 fb 09             	cmp    $0x9,%ebx
 8053e99:	89 8d 18 ff ff ff    	mov    %ecx,-0xe8(%ebp)
 8053e9f:	76 67                	jbe    8053f08 <main+0xa2e8>
 8053ea1:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8053ea4:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%ebp)
 8053eaa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8053eb0:	89 1c 24             	mov    %ebx,(%esp)
 8053eb3:	89 74 24 04          	mov    %esi,0x4(%esp)
 8053eb7:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 8053ebe:	00 
 8053ebf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8053ec6:	00 
 8053ec7:	83 ad 18 ff ff ff 01 	subl   $0x1,-0xe8(%ebp)
 8053ece:	e8 7d 0a 00 00       	call   8054950 <__umoddi3>
 8053ed3:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 8053ed9:	83 c0 30             	add    $0x30,%eax
 8053edc:	88 02                	mov    %al,(%edx)
 8053ede:	89 1c 24             	mov    %ebx,(%esp)
 8053ee1:	89 74 24 04          	mov    %esi,0x4(%esp)
 8053ee5:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 8053eec:	00 
 8053eed:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8053ef4:	00 
 8053ef5:	e8 16 09 00 00       	call   8054810 <__udivdi3>
 8053efa:	83 fa 00             	cmp    $0x0,%edx
 8053efd:	89 c3                	mov    %eax,%ebx
 8053eff:	89 d6                	mov    %edx,%esi
 8053f01:	77 ad                	ja     8053eb0 <main+0xa290>
 8053f03:	83 f8 09             	cmp    $0x9,%eax
 8053f06:	77 a8                	ja     8053eb0 <main+0xa290>
 8053f08:	8b 8d 18 ff ff ff    	mov    -0xe8(%ebp),%ecx
 8053f0e:	83 c3 30             	add    $0x30,%ebx
 8053f11:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 8053f17:	83 e9 01             	sub    $0x1,%ecx
 8053f1a:	89 8d 08 ff ff ff    	mov    %ecx,-0xf8(%ebp)
 8053f20:	88 5e ff             	mov    %bl,-0x1(%esi)
 8053f23:	8b 8d f4 fe ff ff    	mov    -0x10c(%ebp),%ecx
 8053f29:	2b 8d 08 ff ff ff    	sub    -0xf8(%ebp),%ecx
 8053f2f:	e9 3c f6 ff ff       	jmp    8053570 <main+0x9950>
 8053f34:	8b 45 08             	mov    0x8(%ebp),%eax
 8053f37:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8053f3a:	89 8d fc fe ff ff    	mov    %ecx,-0x104(%ebp)
 8053f40:	e8 6b f0 ff ff       	call   8052fb0 <main+0x9390>
 8053f45:	8b 8d fc fe ff ff    	mov    -0x104(%ebp),%ecx
 8053f4b:	85 c0                	test   %eax,%eax
 8053f4d:	0f 85 4d f7 ff ff    	jne    80536a0 <main+0x9a80>
 8053f53:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8053f56:	8d 55 8c             	lea    -0x74(%ebp),%edx
 8053f59:	e9 fd fd ff ff       	jmp    8053d5b <main+0xa13b>
 8053f5e:	3c 30                	cmp    $0x30,%al
 8053f60:	74 c1                	je     8053f23 <main+0xa303>
 8053f62:	83 ad 08 ff ff ff 01 	subl   $0x1,-0xf8(%ebp)
 8053f69:	8b 9d 08 ff ff ff    	mov    -0xf8(%ebp),%ebx
 8053f6f:	c6 03 30             	movb   $0x30,(%ebx)
 8053f72:	8b 8d f4 fe ff ff    	mov    -0x10c(%ebp),%ecx
 8053f78:	29 d9                	sub    %ebx,%ecx
 8053f7a:	e9 f1 f5 ff ff       	jmp    8053570 <main+0x9950>
 8053f7f:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 8053f85:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 8053f8b:	83 c6 01             	add    $0x1,%esi
 8053f8e:	39 55 14             	cmp    %edx,0x14(%ebp)
 8053f91:	89 b5 0c ff ff ff    	mov    %esi,-0xf4(%ebp)
 8053f97:	0f 82 64 fa ff ff    	jb     8053a01 <main+0x9de1>
 8053f9d:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8053fa0:	8d 54 d1 f8          	lea    -0x8(%ecx,%edx,8),%edx
 8053fa4:	83 3a 01             	cmpl   $0x1,(%edx)
 8053fa7:	0f 85 54 fa ff ff    	jne    8053a01 <main+0x9de1>
 8053fad:	e9 cf f9 ff ff       	jmp    8053981 <main+0x9d61>
 8053fb2:	8b 8d 18 ff ff ff    	mov    -0xe8(%ebp),%ecx
 8053fb8:	8b 9d 18 ff ff ff    	mov    -0xe8(%ebp),%ebx
 8053fbe:	83 c1 01             	add    $0x1,%ecx
 8053fc1:	39 5d 14             	cmp    %ebx,0x14(%ebp)
 8053fc4:	89 8d 0c ff ff ff    	mov    %ecx,-0xf4(%ebp)
 8053fca:	0f 82 d0 f7 ff ff    	jb     80537a0 <main+0x9b80>
 8053fd0:	8b 75 10             	mov    0x10(%ebp),%esi
 8053fd3:	8d 44 de f8          	lea    -0x8(%esi,%ebx,8),%eax
 8053fd7:	83 38 01             	cmpl   $0x1,(%eax)
 8053fda:	0f 85 c0 f7 ff ff    	jne    80537a0 <main+0x9b80>
 8053fe0:	e9 57 f4 ff ff       	jmp    805343c <main+0x981c>
 8053fe5:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 8053feb:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 8053ff1:	83 c6 01             	add    $0x1,%esi
 8053ff4:	39 45 14             	cmp    %eax,0x14(%ebp)
 8053ff7:	89 b5 0c ff ff ff    	mov    %esi,-0xf4(%ebp)
 8053ffd:	0f 82 51 f7 ff ff    	jb     8053754 <main+0x9b34>
 8054003:	8b 55 10             	mov    0x10(%ebp),%edx
 8054006:	8d 44 c2 f8          	lea    -0x8(%edx,%eax,8),%eax
 805400a:	83 38 01             	cmpl   $0x1,(%eax)
 805400d:	0f 85 41 f7 ff ff    	jne    8053754 <main+0x9b34>
 8054013:	e9 7b f4 ff ff       	jmp    8053493 <main+0x9873>
 8054018:	8b 55 10             	mov    0x10(%ebp),%edx
 805401b:	8d 44 c2 f8          	lea    -0x8(%edx,%eax,8),%eax
 805401f:	83 38 02             	cmpl   $0x2,(%eax)
 8054022:	0f 85 1e fb ff ff    	jne    8053b46 <main+0x9f26>
 8054028:	8b 40 04             	mov    0x4(%eax),%eax
 805402b:	85 c0                	test   %eax,%eax
 805402d:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 8054033:	0f 85 17 fb ff ff    	jne    8053b50 <main+0x9f30>
 8054039:	e9 08 fb ff ff       	jmp    8053b46 <main+0x9f26>
 805403e:	66 90                	xchg   %ax,%ax
 8054040:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 8054046:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 805404c:	83 c6 01             	add    $0x1,%esi
 805404f:	39 45 14             	cmp    %eax,0x14(%ebp)
 8054052:	89 b5 0c ff ff ff    	mov    %esi,-0xf4(%ebp)
 8054058:	0f 82 79 f4 ff ff    	jb     80534d7 <main+0x98b7>
 805405e:	8b 55 10             	mov    0x10(%ebp),%edx
 8054061:	8d 44 c2 f8          	lea    -0x8(%edx,%eax,8),%eax
 8054065:	83 38 01             	cmpl   $0x1,(%eax)
 8054068:	0f 85 69 f4 ff ff    	jne    80534d7 <main+0x98b7>
 805406e:	eb 10                	jmp    8054080 <main+0xa460>
 8054070:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8054073:	8d 44 cb f8          	lea    -0x8(%ebx,%ecx,8),%eax
 8054077:	83 38 01             	cmpl   $0x1,(%eax)
 805407a:	0f 85 57 f4 ff ff    	jne    80534d7 <main+0x98b7>
 8054080:	8b 58 04             	mov    0x4(%eax),%ebx
 8054083:	89 de                	mov    %ebx,%esi
 8054085:	c1 fe 1f             	sar    $0x1f,%esi
 8054088:	85 f6                	test   %esi,%esi
 805408a:	0f 89 41 06 00 00    	jns    80546d1 <main+0xaab1>
 8054090:	f7 db                	neg    %ebx
 8054092:	83 d6 00             	adc    $0x0,%esi
 8054095:	89 d8                	mov    %ebx,%eax
 8054097:	f7 de                	neg    %esi
 8054099:	09 f0                	or     %esi,%eax
 805409b:	b8 01 00 00 00       	mov    $0x1,%eax
 80540a0:	c6 45 e7 2d          	movb   $0x2d,-0x19(%ebp)
 80540a4:	0f 95 c2             	setne  %dl
 80540a7:	e9 44 f4 ff ff       	jmp    80534f0 <main+0x98d0>
 80540ac:	89 95 18 ff ff ff    	mov    %edx,-0xe8(%ebp)
 80540b2:	c7 85 14 ff ff ff 00 	movl   $0x0,-0xec(%ebp)
 80540b9:	00 00 00 
 80540bc:	e9 a0 f0 ff ff       	jmp    8053161 <main+0x9541>
 80540c1:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 80540c4:	e9 c7 f2 ff ff       	jmp    8053390 <main+0x9770>
 80540c9:	83 c6 01             	add    $0x1,%esi
 80540cc:	81 8d 1c ff ff ff 00 	orl    $0x800,-0xe4(%ebp)
 80540d3:	08 00 00 
 80540d6:	89 b5 20 ff ff ff    	mov    %esi,-0xe0(%ebp)
 80540dc:	0f be 06             	movsbl (%esi),%eax
 80540df:	e9 7d f0 ff ff       	jmp    8053161 <main+0x9541>
 80540e4:	83 c1 01             	add    $0x1,%ecx
 80540e7:	83 8d 1c ff ff ff 20 	orl    $0x20,-0xe4(%ebp)
 80540ee:	89 8d 20 ff ff ff    	mov    %ecx,-0xe0(%ebp)
 80540f4:	0f be 01             	movsbl (%ecx),%eax
 80540f7:	e9 65 f0 ff ff       	jmp    8053161 <main+0x9541>
 80540fc:	f7 85 1c ff ff ff 00 	testl  $0x200,-0xe4(%ebp)
 8054103:	02 00 00 
 8054106:	0f 84 7c 01 00 00    	je     8054288 <main+0xa668>
 805410c:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 8054112:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 8054118:	83 c0 01             	add    $0x1,%eax
 805411b:	39 55 14             	cmp    %edx,0x14(%ebp)
 805411e:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 8054124:	0f 82 ad f3 ff ff    	jb     80534d7 <main+0x98b7>
 805412a:	8b 4d 10             	mov    0x10(%ebp),%ecx
 805412d:	8d 44 d1 f8          	lea    -0x8(%ecx,%edx,8),%eax
 8054131:	83 38 01             	cmpl   $0x1,(%eax)
 8054134:	0f 85 9d f3 ff ff    	jne    80534d7 <main+0x98b7>
 805413a:	e9 41 ff ff ff       	jmp    8054080 <main+0xa460>
 805413f:	f7 85 1c ff ff ff 00 	testl  $0x200,-0xe4(%ebp)
 8054146:	02 00 00 
 8054149:	0f 84 92 01 00 00    	je     80542e1 <main+0xa6c1>
 805414f:	8b 9d 18 ff ff ff    	mov    -0xe8(%ebp),%ebx
 8054155:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 805415b:	83 c3 01             	add    $0x1,%ebx
 805415e:	39 75 14             	cmp    %esi,0x14(%ebp)
 8054161:	89 9d 0c ff ff ff    	mov    %ebx,-0xf4(%ebp)
 8054167:	0f 82 33 f6 ff ff    	jb     80537a0 <main+0x9b80>
 805416d:	8b 55 10             	mov    0x10(%ebp),%edx
 8054170:	8d 44 f2 f8          	lea    -0x8(%edx,%esi,8),%eax
 8054174:	83 38 01             	cmpl   $0x1,(%eax)
 8054177:	0f 85 23 f6 ff ff    	jne    80537a0 <main+0x9b80>
 805417d:	e9 e4 01 00 00       	jmp    8054366 <main+0xa746>
 8054182:	f7 85 1c ff ff ff 00 	testl  $0x200,-0xe4(%ebp)
 8054189:	02 00 00 
 805418c:	0f 84 9e 00 00 00    	je     8054230 <main+0xa610>
 8054192:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 8054198:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 805419e:	83 c0 01             	add    $0x1,%eax
 80541a1:	39 55 14             	cmp    %edx,0x14(%ebp)
 80541a4:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 80541aa:	0f 82 a4 f5 ff ff    	jb     8053754 <main+0x9b34>
 80541b0:	8b 4d 10             	mov    0x10(%ebp),%ecx
 80541b3:	8d 44 d1 f8          	lea    -0x8(%ecx,%edx,8),%eax
 80541b7:	83 38 01             	cmpl   $0x1,(%eax)
 80541ba:	0f 85 94 f5 ff ff    	jne    8053754 <main+0x9b34>
 80541c0:	e9 11 02 00 00       	jmp    80543d6 <main+0xa7b6>
 80541c5:	8b 45 08             	mov    0x8(%ebp),%eax
 80541c8:	8d 55 cc             	lea    -0x34(%ebp),%edx
 80541cb:	e8 e0 ed ff ff       	call   8052fb0 <main+0x9390>
 80541d0:	85 c0                	test   %eax,%eax
 80541d2:	0f 85 c8 f4 ff ff    	jne    80536a0 <main+0x9a80>
 80541d8:	8d 45 8c             	lea    -0x74(%ebp),%eax
 80541db:	e9 56 f1 ff ff       	jmp    8053336 <main+0x9716>
 80541e0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80541e3:	e9 44 f0 ff ff       	jmp    805322c <main+0x960c>
 80541e8:	8b 45 08             	mov    0x8(%ebp),%eax
 80541eb:	8d 55 cc             	lea    -0x34(%ebp),%edx
 80541ee:	e8 bd ed ff ff       	call   8052fb0 <main+0x9390>
 80541f3:	85 c0                	test   %eax,%eax
 80541f5:	0f 84 e1 f1 ff ff    	je     80533dc <main+0x97bc>
 80541fb:	e9 a0 f4 ff ff       	jmp    80536a0 <main+0x9a80>
 8054200:	8b 45 08             	mov    0x8(%ebp),%eax
 8054203:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8054206:	89 8d fc fe ff ff    	mov    %ecx,-0x104(%ebp)
 805420c:	e8 9f ed ff ff       	call   8052fb0 <main+0x9390>
 8054211:	8b 8d fc fe ff ff    	mov    -0x104(%ebp),%ecx
 8054217:	85 c0                	test   %eax,%eax
 8054219:	0f 85 81 f4 ff ff    	jne    80536a0 <main+0x9a80>
 805421f:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8054222:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 8054225:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 805422b:	e9 d9 f0 ff ff       	jmp    8053309 <main+0x96e9>
 8054230:	f7 85 1c ff ff ff 00 	testl  $0x400,-0xe4(%ebp)
 8054237:	04 00 00 
 805423a:	0f 85 68 01 00 00    	jne    80543a8 <main+0xa788>
 8054240:	f6 85 1c ff ff ff 40 	testb  $0x40,-0xe4(%ebp)
 8054247:	0f 84 3d 03 00 00    	je     805458a <main+0xa96a>
 805424d:	8b 8d 18 ff ff ff    	mov    -0xe8(%ebp),%ecx
 8054253:	8b 9d 18 ff ff ff    	mov    -0xe8(%ebp),%ebx
 8054259:	83 c1 01             	add    $0x1,%ecx
 805425c:	39 5d 14             	cmp    %ebx,0x14(%ebp)
 805425f:	89 8d 0c ff ff ff    	mov    %ecx,-0xf4(%ebp)
 8054265:	0f 82 e9 f4 ff ff    	jb     8053754 <main+0x9b34>
 805426b:	8b 75 10             	mov    0x10(%ebp),%esi
 805426e:	8d 44 de f8          	lea    -0x8(%esi,%ebx,8),%eax
 8054272:	83 38 01             	cmpl   $0x1,(%eax)
 8054275:	0f 85 d9 f4 ff ff    	jne    8053754 <main+0x9b34>
 805427b:	0f b7 58 04          	movzwl 0x4(%eax),%ebx
 805427f:	31 f6                	xor    %esi,%esi
 8054281:	31 c0                	xor    %eax,%eax
 8054283:	e9 21 f5 ff ff       	jmp    80537a9 <main+0x9b89>
 8054288:	f7 85 1c ff ff ff 00 	testl  $0x400,-0xe4(%ebp)
 805428f:	04 00 00 
 8054292:	0f 85 dd 00 00 00    	jne    8054375 <main+0xa755>
 8054298:	f6 85 1c ff ff ff 40 	testb  $0x40,-0xe4(%ebp)
 805429f:	0f 84 c7 03 00 00    	je     805466c <main+0xaa4c>
 80542a5:	8b 8d 18 ff ff ff    	mov    -0xe8(%ebp),%ecx
 80542ab:	8b 9d 18 ff ff ff    	mov    -0xe8(%ebp),%ebx
 80542b1:	83 c1 01             	add    $0x1,%ecx
 80542b4:	39 5d 14             	cmp    %ebx,0x14(%ebp)
 80542b7:	89 8d 0c ff ff ff    	mov    %ecx,-0xf4(%ebp)
 80542bd:	0f 82 14 f2 ff ff    	jb     80534d7 <main+0x98b7>
 80542c3:	8b 75 10             	mov    0x10(%ebp),%esi
 80542c6:	8d 44 de f8          	lea    -0x8(%esi,%ebx,8),%eax
 80542ca:	83 38 01             	cmpl   $0x1,(%eax)
 80542cd:	0f 85 04 f2 ff ff    	jne    80534d7 <main+0x98b7>
 80542d3:	0f bf 58 04          	movswl 0x4(%eax),%ebx
 80542d7:	89 de                	mov    %ebx,%esi
 80542d9:	c1 fe 1f             	sar    $0x1f,%esi
 80542dc:	e9 a7 fd ff ff       	jmp    8054088 <main+0xa468>
 80542e1:	f7 85 1c ff ff ff 00 	testl  $0x400,-0xe4(%ebp)
 80542e8:	04 00 00 
 80542eb:	75 4b                	jne    8054338 <main+0xa718>
 80542ed:	f6 85 1c ff ff ff 40 	testb  $0x40,-0xe4(%ebp)
 80542f4:	0f 84 db 02 00 00    	je     80545d5 <main+0xa9b5>
 80542fa:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 8054300:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 8054306:	83 c0 01             	add    $0x1,%eax
 8054309:	39 55 14             	cmp    %edx,0x14(%ebp)
 805430c:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 8054312:	0f 82 88 f4 ff ff    	jb     80537a0 <main+0x9b80>
 8054318:	8b 4d 10             	mov    0x10(%ebp),%ecx
 805431b:	8d 44 d1 f8          	lea    -0x8(%ecx,%edx,8),%eax
 805431f:	83 38 01             	cmpl   $0x1,(%eax)
 8054322:	0f 85 78 f4 ff ff    	jne    80537a0 <main+0x9b80>
 8054328:	0f b7 58 04          	movzwl 0x4(%eax),%ebx
 805432c:	31 f6                	xor    %esi,%esi
 805432e:	b8 01 00 00 00       	mov    $0x1,%eax
 8054333:	e9 71 f4 ff ff       	jmp    80537a9 <main+0x9b89>
 8054338:	8b 8d 18 ff ff ff    	mov    -0xe8(%ebp),%ecx
 805433e:	8b 9d 18 ff ff ff    	mov    -0xe8(%ebp),%ebx
 8054344:	83 c1 01             	add    $0x1,%ecx
 8054347:	39 5d 14             	cmp    %ebx,0x14(%ebp)
 805434a:	89 8d 0c ff ff ff    	mov    %ecx,-0xf4(%ebp)
 8054350:	0f 82 4a f4 ff ff    	jb     80537a0 <main+0x9b80>
 8054356:	8b 75 10             	mov    0x10(%ebp),%esi
 8054359:	8d 44 de f8          	lea    -0x8(%esi,%ebx,8),%eax
 805435d:	83 38 01             	cmpl   $0x1,(%eax)
 8054360:	0f 85 3a f4 ff ff    	jne    80537a0 <main+0x9b80>
 8054366:	8b 58 04             	mov    0x4(%eax),%ebx
 8054369:	31 f6                	xor    %esi,%esi
 805436b:	b8 01 00 00 00       	mov    $0x1,%eax
 8054370:	e9 34 f4 ff ff       	jmp    80537a9 <main+0x9b89>
 8054375:	8b 9d 18 ff ff ff    	mov    -0xe8(%ebp),%ebx
 805437b:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 8054381:	83 c3 01             	add    $0x1,%ebx
 8054384:	39 75 14             	cmp    %esi,0x14(%ebp)
 8054387:	89 9d 0c ff ff ff    	mov    %ebx,-0xf4(%ebp)
 805438d:	0f 82 44 f1 ff ff    	jb     80534d7 <main+0x98b7>
 8054393:	8b 55 10             	mov    0x10(%ebp),%edx
 8054396:	8d 44 f2 f8          	lea    -0x8(%edx,%esi,8),%eax
 805439a:	83 38 01             	cmpl   $0x1,(%eax)
 805439d:	0f 85 34 f1 ff ff    	jne    80534d7 <main+0x98b7>
 80543a3:	e9 d8 fc ff ff       	jmp    8054080 <main+0xa460>
 80543a8:	8b 9d 18 ff ff ff    	mov    -0xe8(%ebp),%ebx
 80543ae:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 80543b4:	83 c3 01             	add    $0x1,%ebx
 80543b7:	39 75 14             	cmp    %esi,0x14(%ebp)
 80543ba:	89 9d 0c ff ff ff    	mov    %ebx,-0xf4(%ebp)
 80543c0:	0f 82 8e f3 ff ff    	jb     8053754 <main+0x9b34>
 80543c6:	8b 55 10             	mov    0x10(%ebp),%edx
 80543c9:	8d 44 f2 f8          	lea    -0x8(%edx,%esi,8),%eax
 80543cd:	83 38 01             	cmpl   $0x1,(%eax)
 80543d0:	0f 85 7e f3 ff ff    	jne    8053754 <main+0x9b34>
 80543d6:	8b 58 04             	mov    0x4(%eax),%ebx
 80543d9:	31 f6                	xor    %esi,%esi
 80543db:	31 c0                	xor    %eax,%eax
 80543dd:	e9 c7 f3 ff ff       	jmp    80537a9 <main+0x9b89>
 80543e2:	f6 85 1c ff ff ff 40 	testb  $0x40,-0xe4(%ebp)
 80543e9:	0f 84 34 02 00 00    	je     8054623 <main+0xaa03>
 80543ef:	8b 9d 18 ff ff ff    	mov    -0xe8(%ebp),%ebx
 80543f5:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 80543fb:	83 c3 01             	add    $0x1,%ebx
 80543fe:	39 75 14             	cmp    %esi,0x14(%ebp)
 8054401:	89 9d 0c ff ff ff    	mov    %ebx,-0xf4(%ebp)
 8054407:	0f 82 f4 f5 ff ff    	jb     8053a01 <main+0x9de1>
 805440d:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8054410:	8d 54 f1 f8          	lea    -0x8(%ecx,%esi,8),%edx
 8054414:	83 3a 01             	cmpl   $0x1,(%edx)
 8054417:	0f 85 e4 f5 ff ff    	jne    8053a01 <main+0x9de1>
 805441d:	0f b7 5a 04          	movzwl 0x4(%edx),%ebx
 8054421:	31 f6                	xor    %esi,%esi
 8054423:	e9 61 f5 ff ff       	jmp    8053989 <main+0x9d69>
 8054428:	8b 5a 04             	mov    0x4(%edx),%ebx
 805442b:	31 f6                	xor    %esi,%esi
 805442d:	e9 57 f5 ff ff       	jmp    8053989 <main+0x9d69>
 8054432:	8b 45 08             	mov    0x8(%ebp),%eax
 8054435:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8054438:	89 8d fc fe ff ff    	mov    %ecx,-0x104(%ebp)
 805443e:	e8 6d eb ff ff       	call   8052fb0 <main+0x9390>
 8054443:	8b 8d fc fe ff ff    	mov    -0x104(%ebp),%ecx
 8054449:	85 c0                	test   %eax,%eax
 805444b:	0f 85 4f f2 ff ff    	jne    80536a0 <main+0x9a80>
 8054451:	8d 55 8c             	lea    -0x74(%ebp),%edx
 8054454:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8054457:	89 95 24 ff ff ff    	mov    %edx,-0xdc(%ebp)
 805445d:	e9 11 ee ff ff       	jmp    8053273 <main+0x9653>
 8054462:	3b 55 14             	cmp    0x14(%ebp),%edx
 8054465:	77 10                	ja     8054477 <main+0xa857>
 8054467:	8b 4d 10             	mov    0x10(%ebp),%ecx
 805446a:	8d 44 d1 f8          	lea    -0x8(%ecx,%edx,8),%eax
 805446e:	83 38 01             	cmpl   $0x1,(%eax)
 8054471:	0f 84 c9 00 00 00    	je     8054540 <main+0xa920>
 8054477:	c7 85 14 ff ff ff 00 	movl   $0x0,-0xec(%ebp)
 805447e:	00 00 00 
 8054481:	83 c3 01             	add    $0x1,%ebx
 8054484:	89 9d 20 ff ff ff    	mov    %ebx,-0xe0(%ebp)
 805448a:	e9 1e f4 ff ff       	jmp    80538ad <main+0x9c8d>
 805448f:	8b 45 08             	mov    0x8(%ebp),%eax
 8054492:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8054495:	89 8d fc fe ff ff    	mov    %ecx,-0x104(%ebp)
 805449b:	e8 10 eb ff ff       	call   8052fb0 <main+0x9390>
 80544a0:	8b 8d fc fe ff ff    	mov    -0x104(%ebp),%ecx
 80544a6:	85 c0                	test   %eax,%eax
 80544a8:	0f 85 f2 f1 ff ff    	jne    80536a0 <main+0x9a80>
 80544ae:	8d 55 8c             	lea    -0x74(%ebp),%edx
 80544b1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80544b4:	89 95 24 ff ff ff    	mov    %edx,-0xdc(%ebp)
 80544ba:	e9 a7 ed ff ff       	jmp    8053266 <main+0x9646>
 80544bf:	8b 45 08             	mov    0x8(%ebp),%eax
 80544c2:	8d 55 cc             	lea    -0x34(%ebp),%edx
 80544c5:	89 8d fc fe ff ff    	mov    %ecx,-0x104(%ebp)
 80544cb:	e8 e0 ea ff ff       	call   8052fb0 <main+0x9390>
 80544d0:	8b 8d fc fe ff ff    	mov    -0x104(%ebp),%ecx
 80544d6:	85 c0                	test   %eax,%eax
 80544d8:	0f 85 c2 f1 ff ff    	jne    80536a0 <main+0x9a80>
 80544de:	8d 5d 8c             	lea    -0x74(%ebp),%ebx
 80544e1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80544e4:	89 9d 24 ff ff ff    	mov    %ebx,-0xdc(%ebp)
 80544ea:	e9 6a ed ff ff       	jmp    8053259 <main+0x9639>
 80544ef:	8b 45 08             	mov    0x8(%ebp),%eax
 80544f2:	8d 55 cc             	lea    -0x34(%ebp),%edx
 80544f5:	e8 b6 ea ff ff       	call   8052fb0 <main+0x9390>
 80544fa:	85 c0                	test   %eax,%eax
 80544fc:	0f 85 9e f1 ff ff    	jne    80536a0 <main+0x9a80>
 8054502:	8d 55 8c             	lea    -0x74(%ebp),%edx
 8054505:	89 95 24 ff ff ff    	mov    %edx,-0xdc(%ebp)
 805450b:	e9 63 f1 ff ff       	jmp    8053673 <main+0x9a53>
 8054510:	8b 45 08             	mov    0x8(%ebp),%eax
 8054513:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8054516:	89 8d fc fe ff ff    	mov    %ecx,-0x104(%ebp)
 805451c:	e8 8f ea ff ff       	call   8052fb0 <main+0x9390>
 8054521:	8b 8d fc fe ff ff    	mov    -0x104(%ebp),%ecx
 8054527:	85 c0                	test   %eax,%eax
 8054529:	0f 85 71 f1 ff ff    	jne    80536a0 <main+0x9a80>
 805452f:	8d 5d 8c             	lea    -0x74(%ebp),%ebx
 8054532:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8054535:	89 9d 24 ff ff ff    	mov    %ebx,-0xdc(%ebp)
 805453b:	e9 3f ed ff ff       	jmp    805327f <main+0x965f>
 8054540:	8b 40 04             	mov    0x4(%eax),%eax
 8054543:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 8054549:	e9 33 ff ff ff       	jmp    8054481 <main+0xa861>
 805454e:	8b bd 08 ff ff ff    	mov    -0xf8(%ebp),%edi
 8054554:	31 c0                	xor    %eax,%eax
 8054556:	83 c9 ff             	or     $0xffffffff,%ecx
 8054559:	f2 ae                	repnz scas %es:(%edi),%al
 805455b:	f7 d1                	not    %ecx
 805455d:	83 e9 01             	sub    $0x1,%ecx
 8054560:	0f 89 1a f6 ff ff    	jns    8053b80 <main+0x9f60>
 8054566:	e9 35 f1 ff ff       	jmp    80536a0 <main+0x9a80>
 805456b:	89 d1                	mov    %edx,%ecx
 805456d:	89 f3                	mov    %esi,%ebx
 805456f:	31 d2                	xor    %edx,%edx
 8054571:	e9 f7 f2 ff ff       	jmp    805386d <main+0x9c4d>
 8054576:	8b 9d 20 ff ff ff    	mov    -0xe0(%ebp),%ebx
 805457c:	89 95 18 ff ff ff    	mov    %edx,-0xe8(%ebp)
 8054582:	0f be 03             	movsbl (%ebx),%eax
 8054585:	e9 d7 eb ff ff       	jmp    8053161 <main+0x9541>
 805458a:	f7 85 1c ff ff ff 00 	testl  $0x800,-0xe4(%ebp)
 8054591:	08 00 00 
 8054594:	0f 84 0e fe ff ff    	je     80543a8 <main+0xa788>
 805459a:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 80545a0:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 80545a6:	83 c0 01             	add    $0x1,%eax
 80545a9:	39 55 14             	cmp    %edx,0x14(%ebp)
 80545ac:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 80545b2:	0f 82 9c f1 ff ff    	jb     8053754 <main+0x9b34>
 80545b8:	8b 4d 10             	mov    0x10(%ebp),%ecx
 80545bb:	8d 44 d1 f8          	lea    -0x8(%ecx,%edx,8),%eax
 80545bf:	83 38 01             	cmpl   $0x1,(%eax)
 80545c2:	0f 85 8c f1 ff ff    	jne    8053754 <main+0x9b34>
 80545c8:	0f b6 58 04          	movzbl 0x4(%eax),%ebx
 80545cc:	31 f6                	xor    %esi,%esi
 80545ce:	31 c0                	xor    %eax,%eax
 80545d0:	e9 d4 f1 ff ff       	jmp    80537a9 <main+0x9b89>
 80545d5:	f7 85 1c ff ff ff 00 	testl  $0x800,-0xe4(%ebp)
 80545dc:	08 00 00 
 80545df:	0f 84 53 fd ff ff    	je     8054338 <main+0xa718>
 80545e5:	8b 9d 18 ff ff ff    	mov    -0xe8(%ebp),%ebx
 80545eb:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 80545f1:	83 c3 01             	add    $0x1,%ebx
 80545f4:	39 75 14             	cmp    %esi,0x14(%ebp)
 80545f7:	89 9d 0c ff ff ff    	mov    %ebx,-0xf4(%ebp)
 80545fd:	0f 82 9d f1 ff ff    	jb     80537a0 <main+0x9b80>
 8054603:	8b 55 10             	mov    0x10(%ebp),%edx
 8054606:	8d 44 f2 f8          	lea    -0x8(%edx,%esi,8),%eax
 805460a:	83 38 01             	cmpl   $0x1,(%eax)
 805460d:	0f 85 8d f1 ff ff    	jne    80537a0 <main+0x9b80>
 8054613:	0f b6 58 04          	movzbl 0x4(%eax),%ebx
 8054617:	31 f6                	xor    %esi,%esi
 8054619:	b8 01 00 00 00       	mov    $0x1,%eax
 805461e:	e9 86 f1 ff ff       	jmp    80537a9 <main+0x9b89>
 8054623:	f7 85 1c ff ff ff 00 	testl  $0x800,-0xe4(%ebp)
 805462a:	08 00 00 
 805462d:	0f 84 a4 f3 ff ff    	je     80539d7 <main+0x9db7>
 8054633:	8b 9d 18 ff ff ff    	mov    -0xe8(%ebp),%ebx
 8054639:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 805463f:	83 c3 01             	add    $0x1,%ebx
 8054642:	39 75 14             	cmp    %esi,0x14(%ebp)
 8054645:	89 9d 0c ff ff ff    	mov    %ebx,-0xf4(%ebp)
 805464b:	0f 82 b0 f3 ff ff    	jb     8053a01 <main+0x9de1>
 8054651:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8054654:	8d 54 f1 f8          	lea    -0x8(%ecx,%esi,8),%edx
 8054658:	83 3a 01             	cmpl   $0x1,(%edx)
 805465b:	0f 85 a0 f3 ff ff    	jne    8053a01 <main+0x9de1>
 8054661:	0f b6 5a 04          	movzbl 0x4(%edx),%ebx
 8054665:	31 f6                	xor    %esi,%esi
 8054667:	e9 1d f3 ff ff       	jmp    8053989 <main+0x9d69>
 805466c:	f7 85 1c ff ff ff 00 	testl  $0x800,-0xe4(%ebp)
 8054673:	08 00 00 
 8054676:	0f 84 f9 fc ff ff    	je     8054375 <main+0xa755>
 805467c:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 8054682:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 8054688:	83 c0 01             	add    $0x1,%eax
 805468b:	39 55 14             	cmp    %edx,0x14(%ebp)
 805468e:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 8054694:	0f 82 3d ee ff ff    	jb     80534d7 <main+0x98b7>
 805469a:	8b 4d 10             	mov    0x10(%ebp),%ecx
 805469d:	8d 44 d1 f8          	lea    -0x8(%ecx,%edx,8),%eax
 80546a1:	83 38 01             	cmpl   $0x1,(%eax)
 80546a4:	0f 85 2d ee ff ff    	jne    80534d7 <main+0x98b7>
 80546aa:	0f be 58 04          	movsbl 0x4(%eax),%ebx
 80546ae:	89 de                	mov    %ebx,%esi
 80546b0:	c1 fe 1f             	sar    $0x1f,%esi
 80546b3:	e9 d0 f9 ff ff       	jmp    8054088 <main+0xa468>
 80546b8:	e8 67 4f ff ff       	call   8049624 <abort@plt>
 80546bd:	89 95 18 ff ff ff    	mov    %edx,-0xe8(%ebp)
 80546c3:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
 80546c9:	0f be 02             	movsbl (%edx),%eax
 80546cc:	e9 90 ea ff ff       	jmp    8053161 <main+0x9541>
 80546d1:	89 d9                	mov    %ebx,%ecx
 80546d3:	b8 01 00 00 00       	mov    $0x1,%eax
 80546d8:	09 f1                	or     %esi,%ecx
 80546da:	0f 95 c2             	setne  %dl
 80546dd:	e9 0e ee ff ff       	jmp    80534f0 <main+0x98d0>
 80546e2:	39 45 14             	cmp    %eax,0x14(%ebp)
 80546e5:	72 0c                	jb     80546f3 <main+0xaad3>
 80546e7:	8b 5d 10             	mov    0x10(%ebp),%ebx
 80546ea:	8d 44 c3 f8          	lea    -0x8(%ebx,%eax,8),%eax
 80546ee:	83 38 01             	cmpl   $0x1,(%eax)
 80546f1:	74 2c                	je     805471f <main+0xaaff>
 80546f3:	31 c0                	xor    %eax,%eax
 80546f5:	89 c7                	mov    %eax,%edi
 80546f7:	83 c2 01             	add    $0x1,%edx
 80546fa:	c1 ff 1f             	sar    $0x1f,%edi
 80546fd:	09 c7                	or     %eax,%edi
 80546ff:	89 95 20 ff ff ff    	mov    %edx,-0xe0(%ebp)
 8054705:	e9 06 ef ff ff       	jmp    8053610 <main+0x99f0>
 805470a:	8b 7a 04             	mov    0x4(%edx),%edi
 805470d:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%ebp)
 8054713:	89 fa                	mov    %edi,%edx
 8054715:	c1 fa 1f             	sar    $0x1f,%edx
 8054718:	09 d7                	or     %edx,%edi
 805471a:	e9 f1 ee ff ff       	jmp    8053610 <main+0x99f0>
 805471f:	8b 40 04             	mov    0x4(%eax),%eax
 8054722:	eb d1                	jmp    80546f5 <main+0xaad5>
 8054724:	90                   	nop
 8054725:	90                   	nop
 8054726:	90                   	nop
 8054727:	90                   	nop
 8054728:	90                   	nop
 8054729:	90                   	nop
 805472a:	90                   	nop
 805472b:	90                   	nop
 805472c:	90                   	nop
 805472d:	90                   	nop
 805472e:	90                   	nop
 805472f:	90                   	nop

08054730 <tempnam>:
 8054730:	55                   	push   %ebp
 8054731:	89 e5                	mov    %esp,%ebp
 8054733:	57                   	push   %edi
 8054734:	56                   	push   %esi
 8054735:	31 f6                	xor    %esi,%esi
 8054737:	53                   	push   %ebx
 8054738:	83 ec 3c             	sub    $0x3c,%esp
 805473b:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 805473e:	8b 7d 08             	mov    0x8(%ebp),%edi
 8054741:	c7 45 e4 89 4d 05 08 	movl   $0x8054d89,-0x1c(%ebp)
 8054748:	85 db                	test   %ebx,%ebx
 805474a:	74 0d                	je     8054759 <tempnam+0x29>
 805474c:	89 1c 24             	mov    %ebx,(%esp)
 805474f:	e8 70 52 ff ff       	call   80499c4 <strlen@plt>
 8054754:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
 8054757:	89 c6                	mov    %eax,%esi
 8054759:	89 3c 24             	mov    %edi,(%esp)
 805475c:	e8 63 52 ff ff       	call   80499c4 <strlen@plt>
 8054761:	8d 44 06 13          	lea    0x13(%esi,%eax,1),%eax
 8054765:	89 04 24             	mov    %eax,(%esp)
 8054768:	e8 47 4e ff ff       	call   80495b4 <malloc@plt>
 805476d:	85 c0                	test   %eax,%eax
 805476f:	89 c3                	mov    %eax,%ebx
 8054771:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8054774:	75 1a                	jne    8054790 <tempnam+0x60>
 8054776:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8054779:	83 c4 3c             	add    $0x3c,%esp
 805477c:	5b                   	pop    %ebx
 805477d:	5e                   	pop    %esi
 805477e:	5f                   	pop    %edi
 805477f:	5d                   	pop    %ebp
 8054780:	c3                   	ret    
 8054781:	eb 0d                	jmp    8054790 <tempnam+0x60>
 8054783:	90                   	nop
 8054784:	90                   	nop
 8054785:	90                   	nop
 8054786:	90                   	nop
 8054787:	90                   	nop
 8054788:	90                   	nop
 8054789:	90                   	nop
 805478a:	90                   	nop
 805478b:	90                   	nop
 805478c:	90                   	nop
 805478d:	90                   	nop
 805478e:	90                   	nop
 805478f:	90                   	nop
 8054790:	e8 af 4d ff ff       	call   8049544 <getpid@plt>
 8054795:	31 f6                	xor    %esi,%esi
 8054797:	89 7d e0             	mov    %edi,-0x20(%ebp)
 805479a:	89 c7                	mov    %eax,%edi
 805479c:	eb 0a                	jmp    80547a8 <tempnam+0x78>
 805479e:	66 90                	xchg   %ax,%ax
 80547a0:	89 04 24             	mov    %eax,(%esp)
 80547a3:	e8 9c 52 ff ff       	call   8049a44 <close@plt>
 80547a8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80547ab:	89 74 24 14          	mov    %esi,0x14(%esp)
 80547af:	83 c6 01             	add    $0x1,%esi
 80547b2:	89 7c 24 10          	mov    %edi,0x10(%esp)
 80547b6:	c7 44 24 04 58 65 05 	movl   $0x8056558,0x4(%esp)
 80547bd:	08 
 80547be:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80547c2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80547c5:	89 1c 24             	mov    %ebx,(%esp)
 80547c8:	89 44 24 08          	mov    %eax,0x8(%esp)
 80547cc:	e8 33 51 ff ff       	call   8049904 <sprintf@plt>
 80547d1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80547d8:	00 
 80547d9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80547e0:	00 
 80547e1:	89 1c 24             	mov    %ebx,(%esp)
 80547e4:	e8 eb 51 ff ff       	call   80499d4 <open@plt>
 80547e9:	83 f8 ff             	cmp    $0xffffffff,%eax
 80547ec:	75 b2                	jne    80547a0 <tempnam+0x70>
 80547ee:	e8 11 4f ff ff       	call   8049704 <__get_errno_ptr@plt>
 80547f3:	83 38 59             	cmpl   $0x59,(%eax)
 80547f6:	0f 85 7a ff ff ff    	jne    8054776 <tempnam+0x46>
 80547fc:	c6 03 00             	movb   $0x0,(%ebx)
 80547ff:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8054806:	e9 6b ff ff ff       	jmp    8054776 <tempnam+0x46>
 805480b:	90                   	nop
 805480c:	90                   	nop
 805480d:	90                   	nop
 805480e:	90                   	nop
 805480f:	90                   	nop

08054810 <__udivdi3>:
 8054810:	55                   	push   %ebp
 8054811:	89 e5                	mov    %esp,%ebp
 8054813:	57                   	push   %edi
 8054814:	56                   	push   %esi
 8054815:	53                   	push   %ebx
 8054816:	83 ec 2c             	sub    $0x2c,%esp
 8054819:	8b 5d 10             	mov    0x10(%ebp),%ebx
 805481c:	8b 45 14             	mov    0x14(%ebp),%eax
 805481f:	8b 55 08             	mov    0x8(%ebp),%edx
 8054822:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8054825:	8b 75 0c             	mov    0xc(%ebp),%esi
 8054828:	85 c0                	test   %eax,%eax
 805482a:	75 34                	jne    8054860 <__udivdi3+0x50>
 805482c:	39 f3                	cmp    %esi,%ebx
 805482e:	77 60                	ja     8054890 <__udivdi3+0x80>
 8054830:	85 db                	test   %ebx,%ebx
 8054832:	75 0b                	jne    805483f <__udivdi3+0x2f>
 8054834:	b8 01 00 00 00       	mov    $0x1,%eax
 8054839:	31 d2                	xor    %edx,%edx
 805483b:	f7 f3                	div    %ebx
 805483d:	89 c3                	mov    %eax,%ebx
 805483f:	31 d2                	xor    %edx,%edx
 8054841:	89 f0                	mov    %esi,%eax
 8054843:	f7 f3                	div    %ebx
 8054845:	89 c6                	mov    %eax,%esi
 8054847:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 805484a:	89 f8                	mov    %edi,%eax
 805484c:	f7 f3                	div    %ebx
 805484e:	89 c7                	mov    %eax,%edi
 8054850:	89 f8                	mov    %edi,%eax
 8054852:	89 f2                	mov    %esi,%edx
 8054854:	83 c4 2c             	add    $0x2c,%esp
 8054857:	5b                   	pop    %ebx
 8054858:	5e                   	pop    %esi
 8054859:	5f                   	pop    %edi
 805485a:	5d                   	pop    %ebp
 805485b:	c3                   	ret    
 805485c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8054860:	39 f0                	cmp    %esi,%eax
 8054862:	77 1c                	ja     8054880 <__udivdi3+0x70>
 8054864:	0f bd f8             	bsr    %eax,%edi
 8054867:	83 f7 1f             	xor    $0x1f,%edi
 805486a:	75 44                	jne    80548b0 <__udivdi3+0xa0>
 805486c:	39 f0                	cmp    %esi,%eax
 805486e:	0f 82 9c 00 00 00    	jb     8054910 <__udivdi3+0x100>
 8054874:	3b 5d e4             	cmp    -0x1c(%ebp),%ebx
 8054877:	0f 86 93 00 00 00    	jbe    8054910 <__udivdi3+0x100>
 805487d:	8d 76 00             	lea    0x0(%esi),%esi
 8054880:	31 f6                	xor    %esi,%esi
 8054882:	31 ff                	xor    %edi,%edi
 8054884:	89 f8                	mov    %edi,%eax
 8054886:	89 f2                	mov    %esi,%edx
 8054888:	83 c4 2c             	add    $0x2c,%esp
 805488b:	5b                   	pop    %ebx
 805488c:	5e                   	pop    %esi
 805488d:	5f                   	pop    %edi
 805488e:	5d                   	pop    %ebp
 805488f:	c3                   	ret    
 8054890:	89 d7                	mov    %edx,%edi
 8054892:	89 f2                	mov    %esi,%edx
 8054894:	89 f8                	mov    %edi,%eax
 8054896:	f7 f3                	div    %ebx
 8054898:	89 c7                	mov    %eax,%edi
 805489a:	31 f6                	xor    %esi,%esi
 805489c:	89 f8                	mov    %edi,%eax
 805489e:	89 f2                	mov    %esi,%edx
 80548a0:	83 c4 2c             	add    $0x2c,%esp
 80548a3:	5b                   	pop    %ebx
 80548a4:	5e                   	pop    %esi
 80548a5:	5f                   	pop    %edi
 80548a6:	5d                   	pop    %ebp
 80548a7:	c3                   	ret    
 80548a8:	90                   	nop
 80548a9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 80548b0:	89 f9                	mov    %edi,%ecx
 80548b2:	d3 e0                	shl    %cl,%eax
 80548b4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80548b7:	ba 20 00 00 00       	mov    $0x20,%edx
 80548bc:	29 fa                	sub    %edi,%edx
 80548be:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 80548c1:	89 d8                	mov    %ebx,%eax
 80548c3:	8a 4d d4             	mov    -0x2c(%ebp),%cl
 80548c6:	d3 e8                	shr    %cl,%eax
 80548c8:	0b 45 e0             	or     -0x20(%ebp),%eax
 80548cb:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80548ce:	89 f9                	mov    %edi,%ecx
 80548d0:	d3 e3                	shl    %cl,%ebx
 80548d2:	89 f0                	mov    %esi,%eax
 80548d4:	8a 4d d4             	mov    -0x2c(%ebp),%cl
 80548d7:	d3 e8                	shr    %cl,%eax
 80548d9:	89 f9                	mov    %edi,%ecx
 80548db:	d3 e6                	shl    %cl,%esi
 80548dd:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80548e0:	8a 4d d4             	mov    -0x2c(%ebp),%cl
 80548e3:	d3 ea                	shr    %cl,%edx
 80548e5:	09 d6                	or     %edx,%esi
 80548e7:	89 c1                	mov    %eax,%ecx
 80548e9:	89 f0                	mov    %esi,%eax
 80548eb:	89 ca                	mov    %ecx,%edx
 80548ed:	f7 75 e0             	divl   -0x20(%ebp)
 80548f0:	89 d1                	mov    %edx,%ecx
 80548f2:	89 c6                	mov    %eax,%esi
 80548f4:	f7 e3                	mul    %ebx
 80548f6:	39 d1                	cmp    %edx,%ecx
 80548f8:	72 46                	jb     8054940 <__udivdi3+0x130>
 80548fa:	74 34                	je     8054930 <__udivdi3+0x120>
 80548fc:	89 f7                	mov    %esi,%edi
 80548fe:	31 f6                	xor    %esi,%esi
 8054900:	eb 82                	jmp    8054884 <__udivdi3+0x74>
 8054902:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8054909:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8054910:	31 f6                	xor    %esi,%esi
 8054912:	bf 01 00 00 00       	mov    $0x1,%edi
 8054917:	89 f8                	mov    %edi,%eax
 8054919:	89 f2                	mov    %esi,%edx
 805491b:	83 c4 2c             	add    $0x2c,%esp
 805491e:	5b                   	pop    %ebx
 805491f:	5e                   	pop    %esi
 8054920:	5f                   	pop    %edi
 8054921:	5d                   	pop    %ebp
 8054922:	c3                   	ret    
 8054923:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8054929:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8054930:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8054933:	89 f9                	mov    %edi,%ecx
 8054935:	d3 e2                	shl    %cl,%edx
 8054937:	39 c2                	cmp    %eax,%edx
 8054939:	73 c1                	jae    80548fc <__udivdi3+0xec>
 805493b:	90                   	nop
 805493c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8054940:	8d 7e ff             	lea    -0x1(%esi),%edi
 8054943:	31 f6                	xor    %esi,%esi
 8054945:	e9 3a ff ff ff       	jmp    8054884 <__udivdi3+0x74>
 805494a:	90                   	nop
 805494b:	90                   	nop
 805494c:	90                   	nop
 805494d:	90                   	nop
 805494e:	90                   	nop
 805494f:	90                   	nop

08054950 <__umoddi3>:
 8054950:	55                   	push   %ebp
 8054951:	89 e5                	mov    %esp,%ebp
 8054953:	57                   	push   %edi
 8054954:	56                   	push   %esi
 8054955:	53                   	push   %ebx
 8054956:	83 ec 1c             	sub    $0x1c,%esp
 8054959:	8b 55 08             	mov    0x8(%ebp),%edx
 805495c:	8b 75 10             	mov    0x10(%ebp),%esi
 805495f:	8b 7d 14             	mov    0x14(%ebp),%edi
 8054962:	89 d0                	mov    %edx,%eax
 8054964:	89 d1                	mov    %edx,%ecx
 8054966:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8054969:	85 ff                	test   %edi,%edi
 805496b:	75 23                	jne    8054990 <__umoddi3+0x40>
 805496d:	39 de                	cmp    %ebx,%esi
 805496f:	0f 86 9b 00 00 00    	jbe    8054a10 <__umoddi3+0xc0>
 8054975:	89 da                	mov    %ebx,%edx
 8054977:	f7 f6                	div    %esi
 8054979:	89 d0                	mov    %edx,%eax
 805497b:	31 d2                	xor    %edx,%edx
 805497d:	83 c4 1c             	add    $0x1c,%esp
 8054980:	5b                   	pop    %ebx
 8054981:	5e                   	pop    %esi
 8054982:	5f                   	pop    %edi
 8054983:	5d                   	pop    %ebp
 8054984:	c3                   	ret    
 8054985:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8054989:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8054990:	39 df                	cmp    %ebx,%edi
 8054992:	0f 87 98 00 00 00    	ja     8054a30 <__umoddi3+0xe0>
 8054998:	0f bd d7             	bsr    %edi,%edx
 805499b:	83 f2 1f             	xor    $0x1f,%edx
 805499e:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 80549a1:	0f 84 99 00 00 00    	je     8054a40 <__umoddi3+0xf0>
 80549a7:	8a 4d e4             	mov    -0x1c(%ebp),%cl
 80549aa:	d3 e7                	shl    %cl,%edi
 80549ac:	89 7d e0             	mov    %edi,-0x20(%ebp)
 80549af:	bf 20 00 00 00       	mov    $0x20,%edi
 80549b4:	2b 7d e4             	sub    -0x1c(%ebp),%edi
 80549b7:	89 f2                	mov    %esi,%edx
 80549b9:	89 f9                	mov    %edi,%ecx
 80549bb:	d3 ea                	shr    %cl,%edx
 80549bd:	0b 55 e0             	or     -0x20(%ebp),%edx
 80549c0:	89 55 e0             	mov    %edx,-0x20(%ebp)
 80549c3:	8a 4d e4             	mov    -0x1c(%ebp),%cl
 80549c6:	d3 e6                	shl    %cl,%esi
 80549c8:	89 75 dc             	mov    %esi,-0x24(%ebp)
 80549cb:	89 da                	mov    %ebx,%edx
 80549cd:	d3 e2                	shl    %cl,%edx
 80549cf:	89 c6                	mov    %eax,%esi
 80549d1:	d3 e6                	shl    %cl,%esi
 80549d3:	89 f9                	mov    %edi,%ecx
 80549d5:	d3 e8                	shr    %cl,%eax
 80549d7:	09 d0                	or     %edx,%eax
 80549d9:	d3 eb                	shr    %cl,%ebx
 80549db:	89 da                	mov    %ebx,%edx
 80549dd:	f7 75 e0             	divl   -0x20(%ebp)
 80549e0:	89 d3                	mov    %edx,%ebx
 80549e2:	f7 65 dc             	mull   -0x24(%ebp)
 80549e5:	39 d3                	cmp    %edx,%ebx
 80549e7:	72 77                	jb     8054a60 <__umoddi3+0x110>
 80549e9:	0f 84 81 00 00 00    	je     8054a70 <__umoddi3+0x120>
 80549ef:	29 c6                	sub    %eax,%esi
 80549f1:	19 d3                	sbb    %edx,%ebx
 80549f3:	8a 4d e4             	mov    -0x1c(%ebp),%cl
 80549f6:	d3 ee                	shr    %cl,%esi
 80549f8:	89 d8                	mov    %ebx,%eax
 80549fa:	89 f9                	mov    %edi,%ecx
 80549fc:	d3 e0                	shl    %cl,%eax
 80549fe:	09 f0                	or     %esi,%eax
 8054a00:	89 da                	mov    %ebx,%edx
 8054a02:	8a 4d e4             	mov    -0x1c(%ebp),%cl
 8054a05:	d3 ea                	shr    %cl,%edx
 8054a07:	83 c4 1c             	add    $0x1c,%esp
 8054a0a:	5b                   	pop    %ebx
 8054a0b:	5e                   	pop    %esi
 8054a0c:	5f                   	pop    %edi
 8054a0d:	5d                   	pop    %ebp
 8054a0e:	c3                   	ret    
 8054a0f:	90                   	nop
 8054a10:	85 f6                	test   %esi,%esi
 8054a12:	75 0b                	jne    8054a1f <__umoddi3+0xcf>
 8054a14:	b8 01 00 00 00       	mov    $0x1,%eax
 8054a19:	31 d2                	xor    %edx,%edx
 8054a1b:	f7 f6                	div    %esi
 8054a1d:	89 c6                	mov    %eax,%esi
 8054a1f:	89 d8                	mov    %ebx,%eax
 8054a21:	31 d2                	xor    %edx,%edx
 8054a23:	f7 f6                	div    %esi
 8054a25:	89 c8                	mov    %ecx,%eax
 8054a27:	f7 f6                	div    %esi
 8054a29:	e9 4b ff ff ff       	jmp    8054979 <__umoddi3+0x29>
 8054a2e:	66 90                	xchg   %ax,%ax
 8054a30:	89 d0                	mov    %edx,%eax
 8054a32:	89 da                	mov    %ebx,%edx
 8054a34:	83 c4 1c             	add    $0x1c,%esp
 8054a37:	5b                   	pop    %ebx
 8054a38:	5e                   	pop    %esi
 8054a39:	5f                   	pop    %edi
 8054a3a:	5d                   	pop    %ebp
 8054a3b:	c3                   	ret    
 8054a3c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8054a40:	39 df                	cmp    %ebx,%edi
 8054a42:	72 04                	jb     8054a48 <__umoddi3+0xf8>
 8054a44:	39 c6                	cmp    %eax,%esi
 8054a46:	77 04                	ja     8054a4c <__umoddi3+0xfc>
 8054a48:	29 f1                	sub    %esi,%ecx
 8054a4a:	19 fb                	sbb    %edi,%ebx
 8054a4c:	89 c8                	mov    %ecx,%eax
 8054a4e:	89 da                	mov    %ebx,%edx
 8054a50:	83 c4 1c             	add    $0x1c,%esp
 8054a53:	5b                   	pop    %ebx
 8054a54:	5e                   	pop    %esi
 8054a55:	5f                   	pop    %edi
 8054a56:	5d                   	pop    %ebp
 8054a57:	c3                   	ret    
 8054a58:	90                   	nop
 8054a59:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8054a60:	2b 45 dc             	sub    -0x24(%ebp),%eax
 8054a63:	1b 55 e0             	sbb    -0x20(%ebp),%edx
 8054a66:	eb 87                	jmp    80549ef <__umoddi3+0x9f>
 8054a68:	90                   	nop
 8054a69:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8054a70:	39 c6                	cmp    %eax,%esi
 8054a72:	72 ec                	jb     8054a60 <__umoddi3+0x110>
 8054a74:	89 da                	mov    %ebx,%edx
 8054a76:	e9 74 ff ff ff       	jmp    80549ef <__umoddi3+0x9f>
 8054a7b:	90                   	nop
 8054a7c:	90                   	nop
 8054a7d:	90                   	nop
 8054a7e:	90                   	nop
 8054a7f:	90                   	nop
 8054a80:	55                   	push   %ebp
 8054a81:	89 e5                	mov    %esp,%ebp
 8054a83:	56                   	push   %esi
 8054a84:	53                   	push   %ebx
 8054a85:	e8 00 00 00 00       	call   8054a8a <__umoddi3+0x13a>
 8054a8a:	5b                   	pop    %ebx
 8054a8b:	81 c3 42 2c 00 00    	add    $0x2c42,%ebx
 8054a91:	8b 83 f4 fe ff ff    	mov    -0x10c(%ebx),%eax
 8054a97:	83 f8 ff             	cmp    $0xffffffff,%eax
 8054a9a:	74 20                	je     8054abc <__umoddi3+0x16c>
 8054a9c:	8d b3 f4 fe ff ff    	lea    -0x10c(%ebx),%esi
 8054aa2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8054aa9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8054ab0:	ff d0                	call   *%eax
 8054ab2:	83 ee 04             	sub    $0x4,%esi
 8054ab5:	8b 06                	mov    (%esi),%eax
 8054ab7:	83 f8 ff             	cmp    $0xffffffff,%eax
 8054aba:	75 f4                	jne    8054ab0 <__umoddi3+0x160>
 8054abc:	5b                   	pop    %ebx
 8054abd:	5e                   	pop    %esi
 8054abe:	5d                   	pop    %ebp
 8054abf:	c3                   	ret    

Disassembly of section .fini:

08054ac0 <.fini>:
 8054ac0:	e8 4b 50 ff ff       	call   8049b10 <_btext+0xa0>
 8054ac5:	c2 00 00             	ret    $0x0
