
bomb:     file format elf32-i386


Disassembly of section .init:

0804873c <_init>:
 804873c:	53                   	push   %ebx
 804873d:	83 ec 08             	sub    $0x8,%esp
 8048740:	e8 fb 01 00 00       	call   8048940 <__x86.get_pc_thunk.bx>
 8048745:	81 c3 bb 38 00 00    	add    $0x38bb,%ebx
 804874b:	8b 83 fc ff ff ff    	mov    -0x4(%ebx),%eax
 8048751:	85 c0                	test   %eax,%eax
 8048753:	74 05                	je     804875a <_init+0x1e>
 8048755:	e8 a6 01 00 00       	call   8048900 <__gmon_start__@plt>
 804875a:	83 c4 08             	add    $0x8,%esp
 804875d:	5b                   	pop    %ebx
 804875e:	c3                   	ret    

Disassembly of section .plt:

08048760 <.plt>:
 8048760:	ff 35 04 c0 04 08    	pushl  0x804c004
 8048766:	ff 25 08 c0 04 08    	jmp    *0x804c008
 804876c:	00 00                	add    %al,(%eax)
	...

08048770 <read@plt>:
 8048770:	ff 25 0c c0 04 08    	jmp    *0x804c00c
 8048776:	68 00 00 00 00       	push   $0x0
 804877b:	e9 e0 ff ff ff       	jmp    8048760 <.plt>

08048780 <printf@plt>:
 8048780:	ff 25 10 c0 04 08    	jmp    *0x804c010
 8048786:	68 08 00 00 00       	push   $0x8
 804878b:	e9 d0 ff ff ff       	jmp    8048760 <.plt>

08048790 <fflush@plt>:
 8048790:	ff 25 14 c0 04 08    	jmp    *0x804c014
 8048796:	68 10 00 00 00       	push   $0x10
 804879b:	e9 c0 ff ff ff       	jmp    8048760 <.plt>

080487a0 <fgets@plt>:
 80487a0:	ff 25 18 c0 04 08    	jmp    *0x804c018
 80487a6:	68 18 00 00 00       	push   $0x18
 80487ab:	e9 b0 ff ff ff       	jmp    8048760 <.plt>

080487b0 <signal@plt>:
 80487b0:	ff 25 1c c0 04 08    	jmp    *0x804c01c
 80487b6:	68 20 00 00 00       	push   $0x20
 80487bb:	e9 a0 ff ff ff       	jmp    8048760 <.plt>

080487c0 <sleep@plt>:
 80487c0:	ff 25 20 c0 04 08    	jmp    *0x804c020
 80487c6:	68 28 00 00 00       	push   $0x28
 80487cb:	e9 90 ff ff ff       	jmp    8048760 <.plt>

080487d0 <alarm@plt>:
 80487d0:	ff 25 24 c0 04 08    	jmp    *0x804c024
 80487d6:	68 30 00 00 00       	push   $0x30
 80487db:	e9 80 ff ff ff       	jmp    8048760 <.plt>

080487e0 <bcopy@plt>:
 80487e0:	ff 25 28 c0 04 08    	jmp    *0x804c028
 80487e6:	68 38 00 00 00       	push   $0x38
 80487eb:	e9 70 ff ff ff       	jmp    8048760 <.plt>

080487f0 <strcpy@plt>:
 80487f0:	ff 25 2c c0 04 08    	jmp    *0x804c02c
 80487f6:	68 40 00 00 00       	push   $0x40
 80487fb:	e9 60 ff ff ff       	jmp    8048760 <.plt>

08048800 <getenv@plt>:
 8048800:	ff 25 30 c0 04 08    	jmp    *0x804c030
 8048806:	68 48 00 00 00       	push   $0x48
 804880b:	e9 50 ff ff ff       	jmp    8048760 <.plt>

08048810 <puts@plt>:
 8048810:	ff 25 34 c0 04 08    	jmp    *0x804c034
 8048816:	68 50 00 00 00       	push   $0x50
 804881b:	e9 40 ff ff ff       	jmp    8048760 <.plt>

08048820 <exit@plt>:
 8048820:	ff 25 38 c0 04 08    	jmp    *0x804c038
 8048826:	68 58 00 00 00       	push   $0x58
 804882b:	e9 30 ff ff ff       	jmp    8048760 <.plt>

08048830 <__libc_start_main@plt>:
 8048830:	ff 25 3c c0 04 08    	jmp    *0x804c03c
 8048836:	68 60 00 00 00       	push   $0x60
 804883b:	e9 20 ff ff ff       	jmp    8048760 <.plt>

08048840 <fprintf@plt>:
 8048840:	ff 25 40 c0 04 08    	jmp    *0x804c040
 8048846:	68 68 00 00 00       	push   $0x68
 804884b:	e9 10 ff ff ff       	jmp    8048760 <.plt>

08048850 <write@plt>:
 8048850:	ff 25 44 c0 04 08    	jmp    *0x804c044
 8048856:	68 70 00 00 00       	push   $0x70
 804885b:	e9 00 ff ff ff       	jmp    8048760 <.plt>

08048860 <__isoc99_sscanf@plt>:
 8048860:	ff 25 48 c0 04 08    	jmp    *0x804c048
 8048866:	68 78 00 00 00       	push   $0x78
 804886b:	e9 f0 fe ff ff       	jmp    8048760 <.plt>

08048870 <fopen@plt>:
 8048870:	ff 25 4c c0 04 08    	jmp    *0x804c04c
 8048876:	68 80 00 00 00       	push   $0x80
 804887b:	e9 e0 fe ff ff       	jmp    8048760 <.plt>

08048880 <__errno_location@plt>:
 8048880:	ff 25 50 c0 04 08    	jmp    *0x804c050
 8048886:	68 88 00 00 00       	push   $0x88
 804888b:	e9 d0 fe ff ff       	jmp    8048760 <.plt>

08048890 <sprintf@plt>:
 8048890:	ff 25 54 c0 04 08    	jmp    *0x804c054
 8048896:	68 90 00 00 00       	push   $0x90
 804889b:	e9 c0 fe ff ff       	jmp    8048760 <.plt>

080488a0 <socket@plt>:
 80488a0:	ff 25 58 c0 04 08    	jmp    *0x804c058
 80488a6:	68 98 00 00 00       	push   $0x98
 80488ab:	e9 b0 fe ff ff       	jmp    8048760 <.plt>

080488b0 <gethostbyname@plt>:
 80488b0:	ff 25 5c c0 04 08    	jmp    *0x804c05c
 80488b6:	68 a0 00 00 00       	push   $0xa0
 80488bb:	e9 a0 fe ff ff       	jmp    8048760 <.plt>

080488c0 <strtol@plt>:
 80488c0:	ff 25 60 c0 04 08    	jmp    *0x804c060
 80488c6:	68 a8 00 00 00       	push   $0xa8
 80488cb:	e9 90 fe ff ff       	jmp    8048760 <.plt>

080488d0 <connect@plt>:
 80488d0:	ff 25 64 c0 04 08    	jmp    *0x804c064
 80488d6:	68 b0 00 00 00       	push   $0xb0
 80488db:	e9 80 fe ff ff       	jmp    8048760 <.plt>

080488e0 <close@plt>:
 80488e0:	ff 25 68 c0 04 08    	jmp    *0x804c068
 80488e6:	68 b8 00 00 00       	push   $0xb8
 80488eb:	e9 70 fe ff ff       	jmp    8048760 <.plt>

080488f0 <__ctype_b_loc@plt>:
 80488f0:	ff 25 6c c0 04 08    	jmp    *0x804c06c
 80488f6:	68 c0 00 00 00       	push   $0xc0
 80488fb:	e9 60 fe ff ff       	jmp    8048760 <.plt>

Disassembly of section .plt.got:

08048900 <__gmon_start__@plt>:
 8048900:	ff 25 fc bf 04 08    	jmp    *0x804bffc
 8048906:	66 90                	xchg   %ax,%ax

Disassembly of section .text:

08048910 <_start>:
 8048910:	31 ed                	xor    %ebp,%ebp
 8048912:	5e                   	pop    %esi
 8048913:	89 e1                	mov    %esp,%ecx
 8048915:	83 e4 f0             	and    $0xfffffff0,%esp
 8048918:	50                   	push   %eax
 8048919:	54                   	push   %esp
 804891a:	52                   	push   %edx
 804891b:	68 10 9e 04 08       	push   $0x8049e10
 8048920:	68 b0 9d 04 08       	push   $0x8049db0
 8048925:	51                   	push   %ecx
 8048926:	56                   	push   %esi
 8048927:	68 06 8a 04 08       	push   $0x8048a06
 804892c:	e8 ff fe ff ff       	call   8048830 <__libc_start_main@plt>
 8048931:	f4                   	hlt    
 8048932:	66 90                	xchg   %ax,%ax
 8048934:	66 90                	xchg   %ax,%ax
 8048936:	66 90                	xchg   %ax,%ax
 8048938:	66 90                	xchg   %ax,%ax
 804893a:	66 90                	xchg   %ax,%ax
 804893c:	66 90                	xchg   %ax,%ax
 804893e:	66 90                	xchg   %ax,%ax

08048940 <__x86.get_pc_thunk.bx>:
 8048940:	8b 1c 24             	mov    (%esp),%ebx
 8048943:	c3                   	ret    
 8048944:	66 90                	xchg   %ax,%ax
 8048946:	66 90                	xchg   %ax,%ax
 8048948:	66 90                	xchg   %ax,%ax
 804894a:	66 90                	xchg   %ax,%ax
 804894c:	66 90                	xchg   %ax,%ax
 804894e:	66 90                	xchg   %ax,%ax

08048950 <deregister_tm_clones>:
 8048950:	b8 a0 c3 04 08       	mov    $0x804c3a0,%eax
 8048955:	3d a0 c3 04 08       	cmp    $0x804c3a0,%eax
 804895a:	74 24                	je     8048980 <deregister_tm_clones+0x30>
 804895c:	b8 00 00 00 00       	mov    $0x0,%eax
 8048961:	85 c0                	test   %eax,%eax
 8048963:	74 1b                	je     8048980 <deregister_tm_clones+0x30>
 8048965:	55                   	push   %ebp
 8048966:	89 e5                	mov    %esp,%ebp
 8048968:	83 ec 14             	sub    $0x14,%esp
 804896b:	68 a0 c3 04 08       	push   $0x804c3a0
 8048970:	ff d0                	call   *%eax
 8048972:	83 c4 10             	add    $0x10,%esp
 8048975:	c9                   	leave  
 8048976:	c3                   	ret    
 8048977:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 804897e:	66 90                	xchg   %ax,%ax
 8048980:	f3 c3                	repz ret 
 8048982:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8048989:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

08048990 <register_tm_clones>:
 8048990:	b8 a0 c3 04 08       	mov    $0x804c3a0,%eax
 8048995:	2d a0 c3 04 08       	sub    $0x804c3a0,%eax
 804899a:	c1 f8 02             	sar    $0x2,%eax
 804899d:	89 c2                	mov    %eax,%edx
 804899f:	c1 ea 1f             	shr    $0x1f,%edx
 80489a2:	01 d0                	add    %edx,%eax
 80489a4:	d1 f8                	sar    %eax
 80489a6:	74 20                	je     80489c8 <register_tm_clones+0x38>
 80489a8:	ba 00 00 00 00       	mov    $0x0,%edx
 80489ad:	85 d2                	test   %edx,%edx
 80489af:	74 17                	je     80489c8 <register_tm_clones+0x38>
 80489b1:	55                   	push   %ebp
 80489b2:	89 e5                	mov    %esp,%ebp
 80489b4:	83 ec 10             	sub    $0x10,%esp
 80489b7:	50                   	push   %eax
 80489b8:	68 a0 c3 04 08       	push   $0x804c3a0
 80489bd:	ff d2                	call   *%edx
 80489bf:	83 c4 10             	add    $0x10,%esp
 80489c2:	c9                   	leave  
 80489c3:	c3                   	ret    
 80489c4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 80489c8:	f3 c3                	repz ret 
 80489ca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

080489d0 <__do_global_dtors_aux>:
 80489d0:	80 3d c8 c3 04 08 00 	cmpb   $0x0,0x804c3c8
 80489d7:	75 17                	jne    80489f0 <__do_global_dtors_aux+0x20>
 80489d9:	55                   	push   %ebp
 80489da:	89 e5                	mov    %esp,%ebp
 80489dc:	83 ec 08             	sub    $0x8,%esp
 80489df:	e8 6c ff ff ff       	call   8048950 <deregister_tm_clones>
 80489e4:	c6 05 c8 c3 04 08 01 	movb   $0x1,0x804c3c8
 80489eb:	c9                   	leave  
 80489ec:	c3                   	ret    
 80489ed:	8d 76 00             	lea    0x0(%esi),%esi
 80489f0:	f3 c3                	repz ret 
 80489f2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 80489f9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

08048a00 <frame_dummy>:
 8048a00:	55                   	push   %ebp
 8048a01:	89 e5                	mov    %esp,%ebp
 8048a03:	5d                   	pop    %ebp
 8048a04:	eb 8a                	jmp    8048990 <register_tm_clones>

08048a06 <main>:
 8048a06:	8d 4c 24 04          	lea    0x4(%esp),%ecx
 8048a0a:	83 e4 f0             	and    $0xfffffff0,%esp
 8048a0d:	ff 71 fc             	pushl  -0x4(%ecx)
 8048a10:	55                   	push   %ebp
 8048a11:	89 e5                	mov    %esp,%ebp
 8048a13:	53                   	push   %ebx
 8048a14:	51                   	push   %ecx
 8048a15:	8b 01                	mov    (%ecx),%eax
 8048a17:	8b 59 04             	mov    0x4(%ecx),%ebx
 8048a1a:	83 f8 01             	cmp    $0x1,%eax
 8048a1d:	0f 84 fe 00 00 00    	je     8048b21 <main+0x11b>
 8048a23:	83 f8 02             	cmp    $0x2,%eax
 8048a26:	0f 85 22 01 00 00    	jne    8048b4e <main+0x148>
 8048a2c:	83 ec 08             	sub    $0x8,%esp
 8048a2f:	68 30 9e 04 08       	push   $0x8049e30
 8048a34:	ff 73 04             	pushl  0x4(%ebx)
 8048a37:	e8 34 fe ff ff       	call   8048870 <fopen@plt>
 8048a3c:	a3 d0 c3 04 08       	mov    %eax,0x804c3d0
 8048a41:	83 c4 10             	add    $0x10,%esp
 8048a44:	85 c0                	test   %eax,%eax
 8048a46:	0f 84 e4 00 00 00    	je     8048b30 <main+0x12a>
 8048a4c:	e8 f6 05 00 00       	call   8049047 <initialize_bomb>
 8048a51:	83 ec 0c             	sub    $0xc,%esp
 8048a54:	68 b4 9e 04 08       	push   $0x8049eb4
 8048a59:	e8 b2 fd ff ff       	call   8048810 <puts@plt>
 8048a5e:	c7 04 24 f0 9e 04 08 	movl   $0x8049ef0,(%esp)
 8048a65:	e8 a6 fd ff ff       	call   8048810 <puts@plt>
 8048a6a:	e8 d1 06 00 00       	call   8049140 <read_line>
 8048a6f:	89 04 24             	mov    %eax,(%esp)
 8048a72:	e8 f2 00 00 00       	call   8048b69 <phase_1>
 8048a77:	e8 d5 07 00 00       	call   8049251 <phase_defused>
 8048a7c:	c7 04 24 1c 9f 04 08 	movl   $0x8049f1c,(%esp)
 8048a83:	e8 88 fd ff ff       	call   8048810 <puts@plt>
 8048a88:	e8 b3 06 00 00       	call   8049140 <read_line>
 8048a8d:	89 04 24             	mov    %eax,(%esp)
 8048a90:	e8 f7 00 00 00       	call   8048b8c <phase_2>
 8048a95:	e8 b7 07 00 00       	call   8049251 <phase_defused>
 8048a9a:	c7 04 24 69 9e 04 08 	movl   $0x8049e69,(%esp)
 8048aa1:	e8 6a fd ff ff       	call   8048810 <puts@plt>
 8048aa6:	e8 95 06 00 00       	call   8049140 <read_line>
 8048aab:	89 04 24             	mov    %eax,(%esp)
 8048aae:	e8 23 01 00 00       	call   8048bd6 <phase_3>
 8048ab3:	e8 99 07 00 00       	call   8049251 <phase_defused>
 8048ab8:	c7 04 24 87 9e 04 08 	movl   $0x8049e87,(%esp)
 8048abf:	e8 4c fd ff ff       	call   8048810 <puts@plt>
 8048ac4:	e8 77 06 00 00       	call   8049140 <read_line>
 8048ac9:	89 04 24             	mov    %eax,(%esp)
 8048acc:	e8 13 02 00 00       	call   8048ce4 <phase_4>
 8048ad1:	e8 7b 07 00 00       	call   8049251 <phase_defused>
 8048ad6:	c7 04 24 48 9f 04 08 	movl   $0x8049f48,(%esp)
 8048add:	e8 2e fd ff ff       	call   8048810 <puts@plt>
 8048ae2:	e8 59 06 00 00       	call   8049140 <read_line>
 8048ae7:	89 04 24             	mov    %eax,(%esp)
 8048aea:	e8 47 02 00 00       	call   8048d36 <phase_5>
 8048aef:	e8 5d 07 00 00       	call   8049251 <phase_defused>
 8048af4:	c7 04 24 96 9e 04 08 	movl   $0x8049e96,(%esp)
 8048afb:	e8 10 fd ff ff       	call   8048810 <puts@plt>
 8048b00:	e8 3b 06 00 00       	call   8049140 <read_line>
 8048b05:	89 04 24             	mov    %eax,(%esp)
 8048b08:	e8 8f 02 00 00       	call   8048d9c <phase_6>
 8048b0d:	e8 3f 07 00 00       	call   8049251 <phase_defused>
 8048b12:	b8 00 00 00 00       	mov    $0x0,%eax
 8048b17:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8048b1a:	59                   	pop    %ecx
 8048b1b:	5b                   	pop    %ebx
 8048b1c:	5d                   	pop    %ebp
 8048b1d:	8d 61 fc             	lea    -0x4(%ecx),%esp
 8048b20:	c3                   	ret    
 8048b21:	a1 c0 c3 04 08       	mov    0x804c3c0,%eax
 8048b26:	a3 d0 c3 04 08       	mov    %eax,0x804c3d0
 8048b2b:	e9 1c ff ff ff       	jmp    8048a4c <main+0x46>
 8048b30:	83 ec 04             	sub    $0x4,%esp
 8048b33:	ff 73 04             	pushl  0x4(%ebx)
 8048b36:	ff 33                	pushl  (%ebx)
 8048b38:	68 32 9e 04 08       	push   $0x8049e32
 8048b3d:	e8 3e fc ff ff       	call   8048780 <printf@plt>
 8048b42:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8048b49:	e8 d2 fc ff ff       	call   8048820 <exit@plt>
 8048b4e:	83 ec 08             	sub    $0x8,%esp
 8048b51:	ff 33                	pushl  (%ebx)
 8048b53:	68 4f 9e 04 08       	push   $0x8049e4f
 8048b58:	e8 23 fc ff ff       	call   8048780 <printf@plt>
 8048b5d:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8048b64:	e8 b7 fc ff ff       	call   8048820 <exit@plt>

08048b69 <phase_1>:
 8048b69:	55                   	push   %ebp
 8048b6a:	89 e5                	mov    %esp,%ebp
 8048b6c:	83 ec 10             	sub    $0x10,%esp
 8048b6f:	68 6c 9f 04 08       	push   $0x8049f6c
 8048b74:	ff 75 08             	pushl  0x8(%ebp)
 8048b77:	e8 61 04 00 00       	call   8048fdd <strings_not_equal>
 8048b7c:	83 c4 10             	add    $0x10,%esp
 8048b7f:	85 c0                	test   %eax,%eax
 8048b81:	75 02                	jne    8048b85 <phase_1+0x1c>
 8048b83:	c9                   	leave  
 8048b84:	c3                   	ret    
 8048b85:	e8 54 05 00 00       	call   80490de <explode_bomb>
 8048b8a:	eb f7                	jmp    8048b83 <phase_1+0x1a>

08048b8c <phase_2>:
 8048b8c:	55                   	push   %ebp
 8048b8d:	89 e5                	mov    %esp,%ebp
 8048b8f:	56                   	push   %esi
 8048b90:	53                   	push   %ebx
 8048b91:	83 ec 28             	sub    $0x28,%esp
 8048b94:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8048b97:	50                   	push   %eax
 8048b98:	ff 75 08             	pushl  0x8(%ebp)
 8048b9b:	e8 66 05 00 00       	call   8049106 <read_six_numbers>
 8048ba0:	83 c4 10             	add    $0x10,%esp
 8048ba3:	83 7d e0 01          	cmpl   $0x1,-0x20(%ebp)
 8048ba7:	75 08                	jne    8048bb1 <phase_2+0x25>
 8048ba9:	8d 5d e0             	lea    -0x20(%ebp),%ebx
 8048bac:	8d 75 f4             	lea    -0xc(%ebp),%esi
 8048baf:	eb 0e                	jmp    8048bbf <phase_2+0x33>
 8048bb1:	e8 28 05 00 00       	call   80490de <explode_bomb>
 8048bb6:	eb f1                	jmp    8048ba9 <phase_2+0x1d>
 8048bb8:	83 c3 04             	add    $0x4,%ebx
 8048bbb:	39 f3                	cmp    %esi,%ebx
 8048bbd:	74 10                	je     8048bcf <phase_2+0x43>
 8048bbf:	8b 03                	mov    (%ebx),%eax
 8048bc1:	01 c0                	add    %eax,%eax
 8048bc3:	39 43 04             	cmp    %eax,0x4(%ebx)
 8048bc6:	74 f0                	je     8048bb8 <phase_2+0x2c>
 8048bc8:	e8 11 05 00 00       	call   80490de <explode_bomb>
 8048bcd:	eb e9                	jmp    8048bb8 <phase_2+0x2c>
 8048bcf:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8048bd2:	5b                   	pop    %ebx
 8048bd3:	5e                   	pop    %esi
 8048bd4:	5d                   	pop    %ebp
 8048bd5:	c3                   	ret    

08048bd6 <phase_3>:
 8048bd6:	55                   	push   %ebp
 8048bd7:	89 e5                	mov    %esp,%ebp
 8048bd9:	83 ec 18             	sub    $0x18,%esp
 8048bdc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8048bdf:	50                   	push   %eax
 8048be0:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8048be3:	50                   	push   %eax
 8048be4:	68 0b a1 04 08       	push   $0x804a10b
 8048be9:	ff 75 08             	pushl  0x8(%ebp)
 8048bec:	e8 6f fc ff ff       	call   8048860 <__isoc99_sscanf@plt>
 8048bf1:	83 c4 10             	add    $0x10,%esp
 8048bf4:	83 f8 01             	cmp    $0x1,%eax
 8048bf7:	7e 10                	jle    8048c09 <phase_3+0x33>
 8048bf9:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 8048bfd:	77 7c                	ja     8048c7b <phase_3+0xa5>
 8048bff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8048c02:	ff 24 85 cc 9f 04 08 	jmp    *0x8049fcc(,%eax,4)
 8048c09:	e8 d0 04 00 00       	call   80490de <explode_bomb>
 8048c0e:	eb e9                	jmp    8048bf9 <phase_3+0x23>
 8048c10:	b8 52 02 00 00       	mov    $0x252,%eax
 8048c15:	eb 05                	jmp    8048c1c <phase_3+0x46>
 8048c17:	b8 00 00 00 00       	mov    $0x0,%eax
 8048c1c:	2d 13 03 00 00       	sub    $0x313,%eax
 8048c21:	05 79 02 00 00       	add    $0x279,%eax
 8048c26:	2d b1 01 00 00       	sub    $0x1b1,%eax
 8048c2b:	05 b1 01 00 00       	add    $0x1b1,%eax
 8048c30:	2d b1 01 00 00       	sub    $0x1b1,%eax
 8048c35:	05 b1 01 00 00       	add    $0x1b1,%eax
 8048c3a:	2d b1 01 00 00       	sub    $0x1b1,%eax
 8048c3f:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 8048c43:	7f 05                	jg     8048c4a <phase_3+0x74>
 8048c45:	39 45 f0             	cmp    %eax,-0x10(%ebp)
 8048c48:	74 05                	je     8048c4f <phase_3+0x79>
 8048c4a:	e8 8f 04 00 00       	call   80490de <explode_bomb>
 8048c4f:	c9                   	leave  
 8048c50:	c3                   	ret    
 8048c51:	b8 00 00 00 00       	mov    $0x0,%eax
 8048c56:	eb c9                	jmp    8048c21 <phase_3+0x4b>
 8048c58:	b8 00 00 00 00       	mov    $0x0,%eax
 8048c5d:	eb c7                	jmp    8048c26 <phase_3+0x50>
 8048c5f:	b8 00 00 00 00       	mov    $0x0,%eax
 8048c64:	eb c5                	jmp    8048c2b <phase_3+0x55>
 8048c66:	b8 00 00 00 00       	mov    $0x0,%eax
 8048c6b:	eb c3                	jmp    8048c30 <phase_3+0x5a>
 8048c6d:	b8 00 00 00 00       	mov    $0x0,%eax
 8048c72:	eb c1                	jmp    8048c35 <phase_3+0x5f>
 8048c74:	b8 00 00 00 00       	mov    $0x0,%eax
 8048c79:	eb bf                	jmp    8048c3a <phase_3+0x64>
 8048c7b:	e8 5e 04 00 00       	call   80490de <explode_bomb>
 8048c80:	b8 00 00 00 00       	mov    $0x0,%eax
 8048c85:	eb b8                	jmp    8048c3f <phase_3+0x69>

08048c87 <func4>:
 8048c87:	55                   	push   %ebp
 8048c88:	89 e5                	mov    %esp,%ebp
 8048c8a:	53                   	push   %ebx
 8048c8b:	83 ec 04             	sub    $0x4,%esp
 8048c8e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8048c91:	8b 45 0c             	mov    0xc(%ebp),%eax
 8048c94:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8048c97:	29 c3                	sub    %eax,%ebx
 8048c99:	89 da                	mov    %ebx,%edx
 8048c9b:	c1 ea 1f             	shr    $0x1f,%edx
 8048c9e:	01 da                	add    %ebx,%edx
 8048ca0:	d1 fa                	sar    %edx
 8048ca2:	01 c2                	add    %eax,%edx
 8048ca4:	39 ca                	cmp    %ecx,%edx
 8048ca6:	7f 0e                	jg     8048cb6 <func4+0x2f>
 8048ca8:	b8 00 00 00 00       	mov    $0x0,%eax
 8048cad:	39 ca                	cmp    %ecx,%edx
 8048caf:	7c 1a                	jl     8048ccb <func4+0x44>
 8048cb1:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8048cb4:	c9                   	leave  
 8048cb5:	c3                   	ret    
 8048cb6:	83 ec 04             	sub    $0x4,%esp
 8048cb9:	83 ea 01             	sub    $0x1,%edx
 8048cbc:	52                   	push   %edx
 8048cbd:	50                   	push   %eax
 8048cbe:	51                   	push   %ecx
 8048cbf:	e8 c3 ff ff ff       	call   8048c87 <func4>
 8048cc4:	83 c4 10             	add    $0x10,%esp
 8048cc7:	01 c0                	add    %eax,%eax
 8048cc9:	eb e6                	jmp    8048cb1 <func4+0x2a>
 8048ccb:	83 ec 04             	sub    $0x4,%esp
 8048cce:	ff 75 10             	pushl  0x10(%ebp)
 8048cd1:	83 c2 01             	add    $0x1,%edx
 8048cd4:	52                   	push   %edx
 8048cd5:	51                   	push   %ecx
 8048cd6:	e8 ac ff ff ff       	call   8048c87 <func4>
 8048cdb:	83 c4 10             	add    $0x10,%esp
 8048cde:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
 8048ce2:	eb cd                	jmp    8048cb1 <func4+0x2a>

08048ce4 <phase_4>:
 8048ce4:	55                   	push   %ebp
 8048ce5:	89 e5                	mov    %esp,%ebp
 8048ce7:	83 ec 18             	sub    $0x18,%esp
 8048cea:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8048ced:	50                   	push   %eax
 8048cee:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8048cf1:	50                   	push   %eax
 8048cf2:	68 0b a1 04 08       	push   $0x804a10b
 8048cf7:	ff 75 08             	pushl  0x8(%ebp)
 8048cfa:	e8 61 fb ff ff       	call   8048860 <__isoc99_sscanf@plt>
 8048cff:	83 c4 10             	add    $0x10,%esp
 8048d02:	83 f8 02             	cmp    $0x2,%eax
 8048d05:	75 06                	jne    8048d0d <phase_4+0x29>
 8048d07:	83 7d f4 0e          	cmpl   $0xe,-0xc(%ebp)
 8048d0b:	76 05                	jbe    8048d12 <phase_4+0x2e>
 8048d0d:	e8 cc 03 00 00       	call   80490de <explode_bomb>
 8048d12:	83 ec 04             	sub    $0x4,%esp
 8048d15:	6a 0e                	push   $0xe
 8048d17:	6a 00                	push   $0x0
 8048d19:	ff 75 f4             	pushl  -0xc(%ebp)
 8048d1c:	e8 66 ff ff ff       	call   8048c87 <func4>
 8048d21:	83 c4 10             	add    $0x10,%esp
 8048d24:	83 f8 03             	cmp    $0x3,%eax
 8048d27:	75 06                	jne    8048d2f <phase_4+0x4b>
 8048d29:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 8048d2d:	74 05                	je     8048d34 <phase_4+0x50>
 8048d2f:	e8 aa 03 00 00       	call   80490de <explode_bomb>
 8048d34:	c9                   	leave  
 8048d35:	c3                   	ret    

08048d36 <phase_5>:
 8048d36:	55                   	push   %ebp
 8048d37:	89 e5                	mov    %esp,%ebp
 8048d39:	53                   	push   %ebx
 8048d3a:	83 ec 20             	sub    $0x20,%esp
 8048d3d:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8048d40:	53                   	push   %ebx
 8048d41:	e8 75 02 00 00       	call   8048fbb <string_length>
 8048d46:	83 c4 10             	add    $0x10,%esp
 8048d49:	83 f8 06             	cmp    $0x6,%eax
 8048d4c:	75 40                	jne    8048d8e <phase_5+0x58>
 8048d4e:	b8 00 00 00 00       	mov    $0x0,%eax
 8048d53:	0f b6 14 03          	movzbl (%ebx,%eax,1),%edx
 8048d57:	83 e2 0f             	and    $0xf,%edx
 8048d5a:	0f b6 92 ec 9f 04 08 	movzbl 0x8049fec(%edx),%edx
 8048d61:	88 54 05 f1          	mov    %dl,-0xf(%ebp,%eax,1)
 8048d65:	83 c0 01             	add    $0x1,%eax
 8048d68:	83 f8 06             	cmp    $0x6,%eax
 8048d6b:	75 e6                	jne    8048d53 <phase_5+0x1d>
 8048d6d:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8048d71:	83 ec 08             	sub    $0x8,%esp
 8048d74:	68 c2 9f 04 08       	push   $0x8049fc2
 8048d79:	8d 45 f1             	lea    -0xf(%ebp),%eax
 8048d7c:	50                   	push   %eax
 8048d7d:	e8 5b 02 00 00       	call   8048fdd <strings_not_equal>
 8048d82:	83 c4 10             	add    $0x10,%esp
 8048d85:	85 c0                	test   %eax,%eax
 8048d87:	75 0c                	jne    8048d95 <phase_5+0x5f>
 8048d89:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8048d8c:	c9                   	leave  
 8048d8d:	c3                   	ret    
 8048d8e:	e8 4b 03 00 00       	call   80490de <explode_bomb>
 8048d93:	eb b9                	jmp    8048d4e <phase_5+0x18>
 8048d95:	e8 44 03 00 00       	call   80490de <explode_bomb>
 8048d9a:	eb ed                	jmp    8048d89 <phase_5+0x53>

08048d9c <phase_6>:
 8048d9c:	55                   	push   %ebp
 8048d9d:	89 e5                	mov    %esp,%ebp
 8048d9f:	56                   	push   %esi
 8048da0:	53                   	push   %ebx
 8048da1:	83 ec 38             	sub    $0x38,%esp
 8048da4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8048da7:	50                   	push   %eax
 8048da8:	ff 75 08             	pushl  0x8(%ebp)
 8048dab:	e8 56 03 00 00       	call   8049106 <read_six_numbers>
 8048db0:	83 c4 10             	add    $0x10,%esp
 8048db3:	be 00 00 00 00       	mov    $0x0,%esi
 8048db8:	8b 44 b5 e0          	mov    -0x20(%ebp,%esi,4),%eax
 8048dbc:	83 e8 01             	sub    $0x1,%eax
 8048dbf:	83 f8 05             	cmp    $0x5,%eax
 8048dc2:	77 0c                	ja     8048dd0 <phase_6+0x34>
 8048dc4:	83 c6 01             	add    $0x1,%esi
 8048dc7:	83 fe 06             	cmp    $0x6,%esi
 8048dca:	74 24                	je     8048df0 <phase_6+0x54>
 8048dcc:	89 f3                	mov    %esi,%ebx
 8048dce:	eb 0f                	jmp    8048ddf <phase_6+0x43>
 8048dd0:	e8 09 03 00 00       	call   80490de <explode_bomb>
 8048dd5:	eb ed                	jmp    8048dc4 <phase_6+0x28>
 8048dd7:	83 c3 01             	add    $0x1,%ebx
 8048dda:	83 fb 05             	cmp    $0x5,%ebx
 8048ddd:	7f d9                	jg     8048db8 <phase_6+0x1c>
 8048ddf:	8b 44 9d e0          	mov    -0x20(%ebp,%ebx,4),%eax
 8048de3:	39 44 b5 dc          	cmp    %eax,-0x24(%ebp,%esi,4)
 8048de7:	75 ee                	jne    8048dd7 <phase_6+0x3b>
 8048de9:	e8 f0 02 00 00       	call   80490de <explode_bomb>
 8048dee:	eb e7                	jmp    8048dd7 <phase_6+0x3b>
 8048df0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8048df3:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 8048df6:	b9 07 00 00 00       	mov    $0x7,%ecx
 8048dfb:	89 ca                	mov    %ecx,%edx
 8048dfd:	2b 10                	sub    (%eax),%edx
 8048dff:	89 10                	mov    %edx,(%eax)
 8048e01:	83 c0 04             	add    $0x4,%eax
 8048e04:	39 c3                	cmp    %eax,%ebx
 8048e06:	75 f3                	jne    8048dfb <phase_6+0x5f>
 8048e08:	bb 00 00 00 00       	mov    $0x0,%ebx
 8048e0d:	eb 16                	jmp    8048e25 <phase_6+0x89>
 8048e0f:	8b 52 08             	mov    0x8(%edx),%edx
 8048e12:	83 c0 01             	add    $0x1,%eax
 8048e15:	39 c8                	cmp    %ecx,%eax
 8048e17:	75 f6                	jne    8048e0f <phase_6+0x73>
 8048e19:	89 54 b5 c8          	mov    %edx,-0x38(%ebp,%esi,4)
 8048e1d:	83 c3 01             	add    $0x1,%ebx
 8048e20:	83 fb 06             	cmp    $0x6,%ebx
 8048e23:	74 17                	je     8048e3c <phase_6+0xa0>
 8048e25:	89 de                	mov    %ebx,%esi
 8048e27:	8b 4c 9d e0          	mov    -0x20(%ebp,%ebx,4),%ecx
 8048e2b:	b8 01 00 00 00       	mov    $0x1,%eax
 8048e30:	ba 3c c1 04 08       	mov    $0x804c13c,%edx
 8048e35:	83 f9 01             	cmp    $0x1,%ecx
 8048e38:	7f d5                	jg     8048e0f <phase_6+0x73>
 8048e3a:	eb dd                	jmp    8048e19 <phase_6+0x7d>
 8048e3c:	8b 5d c8             	mov    -0x38(%ebp),%ebx
 8048e3f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8048e42:	89 43 08             	mov    %eax,0x8(%ebx)
 8048e45:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8048e48:	89 50 08             	mov    %edx,0x8(%eax)
 8048e4b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8048e4e:	89 42 08             	mov    %eax,0x8(%edx)
 8048e51:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8048e54:	89 50 08             	mov    %edx,0x8(%eax)
 8048e57:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8048e5a:	89 42 08             	mov    %eax,0x8(%edx)
 8048e5d:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8048e64:	be 05 00 00 00       	mov    $0x5,%esi
 8048e69:	eb 08                	jmp    8048e73 <phase_6+0xd7>
 8048e6b:	8b 5b 08             	mov    0x8(%ebx),%ebx
 8048e6e:	83 ee 01             	sub    $0x1,%esi
 8048e71:	74 10                	je     8048e83 <phase_6+0xe7>
 8048e73:	8b 43 08             	mov    0x8(%ebx),%eax
 8048e76:	8b 00                	mov    (%eax),%eax
 8048e78:	39 03                	cmp    %eax,(%ebx)
 8048e7a:	7d ef                	jge    8048e6b <phase_6+0xcf>
 8048e7c:	e8 5d 02 00 00       	call   80490de <explode_bomb>
 8048e81:	eb e8                	jmp    8048e6b <phase_6+0xcf>
 8048e83:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8048e86:	5b                   	pop    %ebx
 8048e87:	5e                   	pop    %esi
 8048e88:	5d                   	pop    %ebp
 8048e89:	c3                   	ret    

08048e8a <fun7>:
 8048e8a:	55                   	push   %ebp
 8048e8b:	89 e5                	mov    %esp,%ebp
 8048e8d:	53                   	push   %ebx
 8048e8e:	83 ec 04             	sub    $0x4,%esp
 8048e91:	8b 55 08             	mov    0x8(%ebp),%edx
 8048e94:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8048e97:	85 d2                	test   %edx,%edx
 8048e99:	74 3c                	je     8048ed7 <fun7+0x4d>
 8048e9b:	8b 1a                	mov    (%edx),%ebx
 8048e9d:	39 cb                	cmp    %ecx,%ebx
 8048e9f:	7f 0e                	jg     8048eaf <fun7+0x25>
 8048ea1:	b8 00 00 00 00       	mov    $0x0,%eax
 8048ea6:	39 cb                	cmp    %ecx,%ebx
 8048ea8:	75 18                	jne    8048ec2 <fun7+0x38>
 8048eaa:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8048ead:	c9                   	leave  
 8048eae:	c3                   	ret    
 8048eaf:	83 ec 08             	sub    $0x8,%esp
 8048eb2:	51                   	push   %ecx
 8048eb3:	ff 72 04             	pushl  0x4(%edx)
 8048eb6:	e8 cf ff ff ff       	call   8048e8a <fun7>
 8048ebb:	83 c4 10             	add    $0x10,%esp
 8048ebe:	01 c0                	add    %eax,%eax
 8048ec0:	eb e8                	jmp    8048eaa <fun7+0x20>
 8048ec2:	83 ec 08             	sub    $0x8,%esp
 8048ec5:	51                   	push   %ecx
 8048ec6:	ff 72 08             	pushl  0x8(%edx)
 8048ec9:	e8 bc ff ff ff       	call   8048e8a <fun7>
 8048ece:	83 c4 10             	add    $0x10,%esp
 8048ed1:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
 8048ed5:	eb d3                	jmp    8048eaa <fun7+0x20>
 8048ed7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8048edc:	eb cc                	jmp    8048eaa <fun7+0x20>

08048ede <secret_phase>:
 8048ede:	55                   	push   %ebp
 8048edf:	89 e5                	mov    %esp,%ebp
 8048ee1:	53                   	push   %ebx
 8048ee2:	83 ec 04             	sub    $0x4,%esp
 8048ee5:	e8 56 02 00 00       	call   8049140 <read_line>
 8048eea:	83 ec 04             	sub    $0x4,%esp
 8048eed:	6a 0a                	push   $0xa
 8048eef:	6a 00                	push   $0x0
 8048ef1:	50                   	push   %eax
 8048ef2:	e8 c9 f9 ff ff       	call   80488c0 <strtol@plt>
 8048ef7:	89 c3                	mov    %eax,%ebx
 8048ef9:	8d 40 ff             	lea    -0x1(%eax),%eax
 8048efc:	83 c4 10             	add    $0x10,%esp
 8048eff:	3d e8 03 00 00       	cmp    $0x3e8,%eax
 8048f04:	77 35                	ja     8048f3b <secret_phase+0x5d>
 8048f06:	83 ec 08             	sub    $0x8,%esp
 8048f09:	53                   	push   %ebx
 8048f0a:	68 88 c0 04 08       	push   $0x804c088
 8048f0f:	e8 76 ff ff ff       	call   8048e8a <fun7>
 8048f14:	83 c4 10             	add    $0x10,%esp
 8048f17:	83 f8 01             	cmp    $0x1,%eax
 8048f1a:	74 05                	je     8048f21 <secret_phase+0x43>
 8048f1c:	e8 bd 01 00 00       	call   80490de <explode_bomb>
 8048f21:	83 ec 0c             	sub    $0xc,%esp
 8048f24:	68 9c 9f 04 08       	push   $0x8049f9c
 8048f29:	e8 e2 f8 ff ff       	call   8048810 <puts@plt>
 8048f2e:	e8 1e 03 00 00       	call   8049251 <phase_defused>
 8048f33:	83 c4 10             	add    $0x10,%esp
 8048f36:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8048f39:	c9                   	leave  
 8048f3a:	c3                   	ret    
 8048f3b:	e8 9e 01 00 00       	call   80490de <explode_bomb>
 8048f40:	eb c4                	jmp    8048f06 <secret_phase+0x28>

08048f42 <sig_handler>:
 8048f42:	55                   	push   %ebp
 8048f43:	89 e5                	mov    %esp,%ebp
 8048f45:	83 ec 14             	sub    $0x14,%esp
 8048f48:	68 fc 9f 04 08       	push   $0x8049ffc
 8048f4d:	e8 be f8 ff ff       	call   8048810 <puts@plt>
 8048f52:	c7 04 24 03 00 00 00 	movl   $0x3,(%esp)
 8048f59:	e8 62 f8 ff ff       	call   80487c0 <sleep@plt>
 8048f5e:	c7 04 24 be a0 04 08 	movl   $0x804a0be,(%esp)
 8048f65:	e8 16 f8 ff ff       	call   8048780 <printf@plt>
 8048f6a:	83 c4 04             	add    $0x4,%esp
 8048f6d:	ff 35 c4 c3 04 08    	pushl  0x804c3c4
 8048f73:	e8 18 f8 ff ff       	call   8048790 <fflush@plt>
 8048f78:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8048f7f:	e8 3c f8 ff ff       	call   80487c0 <sleep@plt>
 8048f84:	c7 04 24 c6 a0 04 08 	movl   $0x804a0c6,(%esp)
 8048f8b:	e8 80 f8 ff ff       	call   8048810 <puts@plt>
 8048f90:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8048f97:	e8 84 f8 ff ff       	call   8048820 <exit@plt>

08048f9c <invalid_phase>:
 8048f9c:	55                   	push   %ebp
 8048f9d:	89 e5                	mov    %esp,%ebp
 8048f9f:	83 ec 10             	sub    $0x10,%esp
 8048fa2:	ff 75 08             	pushl  0x8(%ebp)
 8048fa5:	68 ce a0 04 08       	push   $0x804a0ce
 8048faa:	e8 d1 f7 ff ff       	call   8048780 <printf@plt>
 8048faf:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8048fb6:	e8 65 f8 ff ff       	call   8048820 <exit@plt>

08048fbb <string_length>:
 8048fbb:	55                   	push   %ebp
 8048fbc:	89 e5                	mov    %esp,%ebp
 8048fbe:	8b 55 08             	mov    0x8(%ebp),%edx
 8048fc1:	80 3a 00             	cmpb   $0x0,(%edx)
 8048fc4:	74 10                	je     8048fd6 <string_length+0x1b>
 8048fc6:	b8 00 00 00 00       	mov    $0x0,%eax
 8048fcb:	83 c0 01             	add    $0x1,%eax
 8048fce:	80 3c 02 00          	cmpb   $0x0,(%edx,%eax,1)
 8048fd2:	75 f7                	jne    8048fcb <string_length+0x10>
 8048fd4:	5d                   	pop    %ebp
 8048fd5:	c3                   	ret    
 8048fd6:	b8 00 00 00 00       	mov    $0x0,%eax
 8048fdb:	eb f7                	jmp    8048fd4 <string_length+0x19>

08048fdd <strings_not_equal>:
 8048fdd:	55                   	push   %ebp
 8048fde:	89 e5                	mov    %esp,%ebp
 8048fe0:	57                   	push   %edi
 8048fe1:	56                   	push   %esi
 8048fe2:	53                   	push   %ebx
 8048fe3:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8048fe6:	8b 75 0c             	mov    0xc(%ebp),%esi
 8048fe9:	53                   	push   %ebx
 8048fea:	e8 cc ff ff ff       	call   8048fbb <string_length>
 8048fef:	89 c7                	mov    %eax,%edi
 8048ff1:	89 34 24             	mov    %esi,(%esp)
 8048ff4:	e8 c2 ff ff ff       	call   8048fbb <string_length>
 8048ff9:	83 c4 04             	add    $0x4,%esp
 8048ffc:	ba 01 00 00 00       	mov    $0x1,%edx
 8049001:	39 c7                	cmp    %eax,%edi
 8049003:	74 0a                	je     804900f <strings_not_equal+0x32>
 8049005:	89 d0                	mov    %edx,%eax
 8049007:	8d 65 f4             	lea    -0xc(%ebp),%esp
 804900a:	5b                   	pop    %ebx
 804900b:	5e                   	pop    %esi
 804900c:	5f                   	pop    %edi
 804900d:	5d                   	pop    %ebp
 804900e:	c3                   	ret    
 804900f:	0f b6 03             	movzbl (%ebx),%eax
 8049012:	84 c0                	test   %al,%al
 8049014:	74 23                	je     8049039 <strings_not_equal+0x5c>
 8049016:	3a 06                	cmp    (%esi),%al
 8049018:	75 26                	jne    8049040 <strings_not_equal+0x63>
 804901a:	83 c3 01             	add    $0x1,%ebx
 804901d:	83 c6 01             	add    $0x1,%esi
 8049020:	0f b6 03             	movzbl (%ebx),%eax
 8049023:	84 c0                	test   %al,%al
 8049025:	74 0b                	je     8049032 <strings_not_equal+0x55>
 8049027:	38 06                	cmp    %al,(%esi)
 8049029:	74 ef                	je     804901a <strings_not_equal+0x3d>
 804902b:	ba 01 00 00 00       	mov    $0x1,%edx
 8049030:	eb d3                	jmp    8049005 <strings_not_equal+0x28>
 8049032:	ba 00 00 00 00       	mov    $0x0,%edx
 8049037:	eb cc                	jmp    8049005 <strings_not_equal+0x28>
 8049039:	ba 00 00 00 00       	mov    $0x0,%edx
 804903e:	eb c5                	jmp    8049005 <strings_not_equal+0x28>
 8049040:	ba 01 00 00 00       	mov    $0x1,%edx
 8049045:	eb be                	jmp    8049005 <strings_not_equal+0x28>

08049047 <initialize_bomb>:
 8049047:	55                   	push   %ebp
 8049048:	89 e5                	mov    %esp,%ebp
 804904a:	83 ec 10             	sub    $0x10,%esp
 804904d:	68 42 8f 04 08       	push   $0x8048f42
 8049052:	6a 02                	push   $0x2
 8049054:	e8 57 f7 ff ff       	call   80487b0 <signal@plt>
 8049059:	83 c4 10             	add    $0x10,%esp
 804905c:	c9                   	leave  
 804905d:	c3                   	ret    

0804905e <initialize_bomb_solve>:
 804905e:	55                   	push   %ebp
 804905f:	89 e5                	mov    %esp,%ebp
 8049061:	5d                   	pop    %ebp
 8049062:	c3                   	ret    

08049063 <blank_line>:
 8049063:	55                   	push   %ebp
 8049064:	89 e5                	mov    %esp,%ebp
 8049066:	56                   	push   %esi
 8049067:	53                   	push   %ebx
 8049068:	8b 75 08             	mov    0x8(%ebp),%esi
 804906b:	0f b6 1e             	movzbl (%esi),%ebx
 804906e:	84 db                	test   %bl,%bl
 8049070:	74 1b                	je     804908d <blank_line+0x2a>
 8049072:	e8 79 f8 ff ff       	call   80488f0 <__ctype_b_loc@plt>
 8049077:	83 c6 01             	add    $0x1,%esi
 804907a:	0f be db             	movsbl %bl,%ebx
 804907d:	8b 00                	mov    (%eax),%eax
 804907f:	f6 44 58 01 20       	testb  $0x20,0x1(%eax,%ebx,2)
 8049084:	75 e5                	jne    804906b <blank_line+0x8>
 8049086:	b8 00 00 00 00       	mov    $0x0,%eax
 804908b:	eb 05                	jmp    8049092 <blank_line+0x2f>
 804908d:	b8 01 00 00 00       	mov    $0x1,%eax
 8049092:	5b                   	pop    %ebx
 8049093:	5e                   	pop    %esi
 8049094:	5d                   	pop    %ebp
 8049095:	c3                   	ret    

08049096 <skip>:
 8049096:	55                   	push   %ebp
 8049097:	89 e5                	mov    %esp,%ebp
 8049099:	53                   	push   %ebx
 804909a:	83 ec 04             	sub    $0x4,%esp
 804909d:	83 ec 04             	sub    $0x4,%esp
 80490a0:	ff 35 d0 c3 04 08    	pushl  0x804c3d0
 80490a6:	6a 50                	push   $0x50
 80490a8:	a1 cc c3 04 08       	mov    0x804c3cc,%eax
 80490ad:	8d 04 80             	lea    (%eax,%eax,4),%eax
 80490b0:	c1 e0 04             	shl    $0x4,%eax
 80490b3:	05 e0 c3 04 08       	add    $0x804c3e0,%eax
 80490b8:	50                   	push   %eax
 80490b9:	e8 e2 f6 ff ff       	call   80487a0 <fgets@plt>
 80490be:	89 c3                	mov    %eax,%ebx
 80490c0:	83 c4 10             	add    $0x10,%esp
 80490c3:	85 c0                	test   %eax,%eax
 80490c5:	74 10                	je     80490d7 <skip+0x41>
 80490c7:	83 ec 0c             	sub    $0xc,%esp
 80490ca:	50                   	push   %eax
 80490cb:	e8 93 ff ff ff       	call   8049063 <blank_line>
 80490d0:	83 c4 10             	add    $0x10,%esp
 80490d3:	85 c0                	test   %eax,%eax
 80490d5:	75 c6                	jne    804909d <skip+0x7>
 80490d7:	89 d8                	mov    %ebx,%eax
 80490d9:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 80490dc:	c9                   	leave  
 80490dd:	c3                   	ret    

080490de <explode_bomb>:
 80490de:	55                   	push   %ebp
 80490df:	89 e5                	mov    %esp,%ebp
 80490e1:	83 ec 14             	sub    $0x14,%esp
 80490e4:	68 df a0 04 08       	push   $0x804a0df
 80490e9:	e8 22 f7 ff ff       	call   8048810 <puts@plt>
 80490ee:	c7 04 24 e8 a0 04 08 	movl   $0x804a0e8,(%esp)
 80490f5:	e8 16 f7 ff ff       	call   8048810 <puts@plt>
 80490fa:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8049101:	e8 1a f7 ff ff       	call   8048820 <exit@plt>

08049106 <read_six_numbers>:
 8049106:	55                   	push   %ebp
 8049107:	89 e5                	mov    %esp,%ebp
 8049109:	83 ec 08             	sub    $0x8,%esp
 804910c:	8b 45 0c             	mov    0xc(%ebp),%eax
 804910f:	8d 50 14             	lea    0x14(%eax),%edx
 8049112:	52                   	push   %edx
 8049113:	8d 50 10             	lea    0x10(%eax),%edx
 8049116:	52                   	push   %edx
 8049117:	8d 50 0c             	lea    0xc(%eax),%edx
 804911a:	52                   	push   %edx
 804911b:	8d 50 08             	lea    0x8(%eax),%edx
 804911e:	52                   	push   %edx
 804911f:	8d 50 04             	lea    0x4(%eax),%edx
 8049122:	52                   	push   %edx
 8049123:	50                   	push   %eax
 8049124:	68 ff a0 04 08       	push   $0x804a0ff
 8049129:	ff 75 08             	pushl  0x8(%ebp)
 804912c:	e8 2f f7 ff ff       	call   8048860 <__isoc99_sscanf@plt>
 8049131:	83 c4 20             	add    $0x20,%esp
 8049134:	83 f8 05             	cmp    $0x5,%eax
 8049137:	7e 02                	jle    804913b <read_six_numbers+0x35>
 8049139:	c9                   	leave  
 804913a:	c3                   	ret    
 804913b:	e8 9e ff ff ff       	call   80490de <explode_bomb>

08049140 <read_line>:
 8049140:	55                   	push   %ebp
 8049141:	89 e5                	mov    %esp,%ebp
 8049143:	57                   	push   %edi
 8049144:	56                   	push   %esi
 8049145:	53                   	push   %ebx
 8049146:	83 ec 0c             	sub    $0xc,%esp
 8049149:	e8 48 ff ff ff       	call   8049096 <skip>
 804914e:	85 c0                	test   %eax,%eax
 8049150:	74 53                	je     80491a5 <read_line+0x65>
 8049152:	8b 15 cc c3 04 08    	mov    0x804c3cc,%edx
 8049158:	8d 1c 92             	lea    (%edx,%edx,4),%ebx
 804915b:	c1 e3 04             	shl    $0x4,%ebx
 804915e:	81 c3 e0 c3 04 08    	add    $0x804c3e0,%ebx
 8049164:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
 8049169:	b8 00 00 00 00       	mov    $0x0,%eax
 804916e:	89 df                	mov    %ebx,%edi
 8049170:	f2 ae                	repnz scas %es:(%edi),%al
 8049172:	89 ce                	mov    %ecx,%esi
 8049174:	f7 d6                	not    %esi
 8049176:	89 f1                	mov    %esi,%ecx
 8049178:	83 e9 01             	sub    $0x1,%ecx
 804917b:	83 f9 4e             	cmp    $0x4e,%ecx
 804917e:	0f 8f 95 00 00 00    	jg     8049219 <read_line+0xd9>
 8049184:	8d 04 92             	lea    (%edx,%edx,4),%eax
 8049187:	c1 e0 04             	shl    $0x4,%eax
 804918a:	c6 84 01 df c3 04 08 	movb   $0x0,0x804c3df(%ecx,%eax,1)
 8049191:	00 
 8049192:	83 c2 01             	add    $0x1,%edx
 8049195:	89 15 cc c3 04 08    	mov    %edx,0x804c3cc
 804919b:	89 d8                	mov    %ebx,%eax
 804919d:	8d 65 f4             	lea    -0xc(%ebp),%esp
 80491a0:	5b                   	pop    %ebx
 80491a1:	5e                   	pop    %esi
 80491a2:	5f                   	pop    %edi
 80491a3:	5d                   	pop    %ebp
 80491a4:	c3                   	ret    
 80491a5:	a1 c0 c3 04 08       	mov    0x804c3c0,%eax
 80491aa:	39 05 d0 c3 04 08    	cmp    %eax,0x804c3d0
 80491b0:	74 1e                	je     80491d0 <read_line+0x90>
 80491b2:	83 ec 0c             	sub    $0xc,%esp
 80491b5:	68 2f a1 04 08       	push   $0x804a12f
 80491ba:	e8 41 f6 ff ff       	call   8048800 <getenv@plt>
 80491bf:	83 c4 10             	add    $0x10,%esp
 80491c2:	85 c0                	test   %eax,%eax
 80491c4:	74 23                	je     80491e9 <read_line+0xa9>
 80491c6:	83 ec 0c             	sub    $0xc,%esp
 80491c9:	6a 00                	push   $0x0
 80491cb:	e8 50 f6 ff ff       	call   8048820 <exit@plt>
 80491d0:	83 ec 0c             	sub    $0xc,%esp
 80491d3:	68 11 a1 04 08       	push   $0x804a111
 80491d8:	e8 33 f6 ff ff       	call   8048810 <puts@plt>
 80491dd:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 80491e4:	e8 37 f6 ff ff       	call   8048820 <exit@plt>
 80491e9:	a1 c0 c3 04 08       	mov    0x804c3c0,%eax
 80491ee:	a3 d0 c3 04 08       	mov    %eax,0x804c3d0
 80491f3:	e8 9e fe ff ff       	call   8049096 <skip>
 80491f8:	85 c0                	test   %eax,%eax
 80491fa:	0f 85 52 ff ff ff    	jne    8049152 <read_line+0x12>
 8049200:	83 ec 0c             	sub    $0xc,%esp
 8049203:	68 11 a1 04 08       	push   $0x804a111
 8049208:	e8 03 f6 ff ff       	call   8048810 <puts@plt>
 804920d:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8049214:	e8 07 f6 ff ff       	call   8048820 <exit@plt>
 8049219:	83 ec 0c             	sub    $0xc,%esp
 804921c:	68 3a a1 04 08       	push   $0x804a13a
 8049221:	e8 ea f5 ff ff       	call   8048810 <puts@plt>
 8049226:	a1 cc c3 04 08       	mov    0x804c3cc,%eax
 804922b:	8d 50 01             	lea    0x1(%eax),%edx
 804922e:	89 15 cc c3 04 08    	mov    %edx,0x804c3cc
 8049234:	6b c0 50             	imul   $0x50,%eax,%eax
 8049237:	05 e0 c3 04 08       	add    $0x804c3e0,%eax
 804923c:	ba 55 a1 04 08       	mov    $0x804a155,%edx
 8049241:	b9 04 00 00 00       	mov    $0x4,%ecx
 8049246:	89 c7                	mov    %eax,%edi
 8049248:	89 d6                	mov    %edx,%esi
 804924a:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 804924c:	e8 8d fe ff ff       	call   80490de <explode_bomb>

08049251 <phase_defused>:
 8049251:	83 3d cc c3 04 08 06 	cmpl   $0x6,0x804c3cc
 8049258:	74 02                	je     804925c <phase_defused+0xb>
 804925a:	f3 c3                	repz ret 
 804925c:	55                   	push   %ebp
 804925d:	89 e5                	mov    %esp,%ebp
 804925f:	83 ec 74             	sub    $0x74,%esp
 8049262:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8049265:	50                   	push   %eax
 8049266:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8049269:	50                   	push   %eax
 804926a:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 804926d:	50                   	push   %eax
 804926e:	68 65 a1 04 08       	push   $0x804a165
 8049273:	68 d0 c4 04 08       	push   $0x804c4d0
 8049278:	e8 e3 f5 ff ff       	call   8048860 <__isoc99_sscanf@plt>
 804927d:	83 c4 20             	add    $0x20,%esp
 8049280:	83 f8 03             	cmp    $0x3,%eax
 8049283:	74 12                	je     8049297 <phase_defused+0x46>
 8049285:	83 ec 0c             	sub    $0xc,%esp
 8049288:	68 94 a0 04 08       	push   $0x804a094
 804928d:	e8 7e f5 ff ff       	call   8048810 <puts@plt>
 8049292:	83 c4 10             	add    $0x10,%esp
 8049295:	c9                   	leave  
 8049296:	c3                   	ret    
 8049297:	83 ec 08             	sub    $0x8,%esp
 804929a:	68 6e a1 04 08       	push   $0x804a16e
 804929f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 80492a2:	50                   	push   %eax
 80492a3:	e8 35 fd ff ff       	call   8048fdd <strings_not_equal>
 80492a8:	83 c4 10             	add    $0x10,%esp
 80492ab:	85 c0                	test   %eax,%eax
 80492ad:	75 d6                	jne    8049285 <phase_defused+0x34>
 80492af:	83 ec 0c             	sub    $0xc,%esp
 80492b2:	68 34 a0 04 08       	push   $0x804a034
 80492b7:	e8 54 f5 ff ff       	call   8048810 <puts@plt>
 80492bc:	c7 04 24 5c a0 04 08 	movl   $0x804a05c,(%esp)
 80492c3:	e8 48 f5 ff ff       	call   8048810 <puts@plt>
 80492c8:	e8 11 fc ff ff       	call   8048ede <secret_phase>
 80492cd:	83 c4 10             	add    $0x10,%esp
 80492d0:	eb b3                	jmp    8049285 <phase_defused+0x34>

080492d2 <sigalrm_handler>:
 80492d2:	55                   	push   %ebp
 80492d3:	89 e5                	mov    %esp,%ebp
 80492d5:	83 ec 0c             	sub    $0xc,%esp
 80492d8:	6a 00                	push   $0x0
 80492da:	68 c4 a1 04 08       	push   $0x804a1c4
 80492df:	ff 35 a0 c3 04 08    	pushl  0x804c3a0
 80492e5:	e8 56 f5 ff ff       	call   8048840 <fprintf@plt>
 80492ea:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80492f1:	e8 2a f5 ff ff       	call   8048820 <exit@plt>

080492f6 <rio_readlineb>:
 80492f6:	55                   	push   %ebp
 80492f7:	89 e5                	mov    %esp,%ebp
 80492f9:	57                   	push   %edi
 80492fa:	56                   	push   %esi
 80492fb:	53                   	push   %ebx
 80492fc:	83 ec 1c             	sub    $0x1c,%esp
 80492ff:	89 d7                	mov    %edx,%edi
 8049301:	83 f9 01             	cmp    $0x1,%ecx
 8049304:	76 7d                	jbe    8049383 <rio_readlineb+0x8d>
 8049306:	89 c3                	mov    %eax,%ebx
 8049308:	8d 44 0a ff          	lea    -0x1(%edx,%ecx,1),%eax
 804930c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 804930f:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 8049316:	8d 73 0c             	lea    0xc(%ebx),%esi
 8049319:	eb 0a                	jmp    8049325 <rio_readlineb+0x2f>
 804931b:	e8 60 f5 ff ff       	call   8048880 <__errno_location@plt>
 8049320:	83 38 04             	cmpl   $0x4,(%eax)
 8049323:	75 67                	jne    804938c <rio_readlineb+0x96>
 8049325:	8b 43 04             	mov    0x4(%ebx),%eax
 8049328:	85 c0                	test   %eax,%eax
 804932a:	7f 23                	jg     804934f <rio_readlineb+0x59>
 804932c:	83 ec 04             	sub    $0x4,%esp
 804932f:	68 00 20 00 00       	push   $0x2000
 8049334:	56                   	push   %esi
 8049335:	ff 33                	pushl  (%ebx)
 8049337:	e8 34 f4 ff ff       	call   8048770 <read@plt>
 804933c:	89 43 04             	mov    %eax,0x4(%ebx)
 804933f:	83 c4 10             	add    $0x10,%esp
 8049342:	85 c0                	test   %eax,%eax
 8049344:	78 d5                	js     804931b <rio_readlineb+0x25>
 8049346:	85 c0                	test   %eax,%eax
 8049348:	74 49                	je     8049393 <rio_readlineb+0x9d>
 804934a:	89 73 08             	mov    %esi,0x8(%ebx)
 804934d:	eb d6                	jmp    8049325 <rio_readlineb+0x2f>
 804934f:	8b 4b 08             	mov    0x8(%ebx),%ecx
 8049352:	0f b6 11             	movzbl (%ecx),%edx
 8049355:	83 c1 01             	add    $0x1,%ecx
 8049358:	89 4b 08             	mov    %ecx,0x8(%ebx)
 804935b:	83 e8 01             	sub    $0x1,%eax
 804935e:	89 43 04             	mov    %eax,0x4(%ebx)
 8049361:	83 c7 01             	add    $0x1,%edi
 8049364:	88 57 ff             	mov    %dl,-0x1(%edi)
 8049367:	80 fa 0a             	cmp    $0xa,%dl
 804936a:	74 09                	je     8049375 <rio_readlineb+0x7f>
 804936c:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8049370:	3b 7d e0             	cmp    -0x20(%ebp),%edi
 8049373:	75 b0                	jne    8049325 <rio_readlineb+0x2f>
 8049375:	c6 07 00             	movb   $0x0,(%edi)
 8049378:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 804937b:	8d 65 f4             	lea    -0xc(%ebp),%esp
 804937e:	5b                   	pop    %ebx
 804937f:	5e                   	pop    %esi
 8049380:	5f                   	pop    %edi
 8049381:	5d                   	pop    %ebp
 8049382:	c3                   	ret    
 8049383:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 804938a:	eb e9                	jmp    8049375 <rio_readlineb+0x7f>
 804938c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8049391:	eb 05                	jmp    8049398 <rio_readlineb+0xa2>
 8049393:	b8 00 00 00 00       	mov    $0x0,%eax
 8049398:	85 c0                	test   %eax,%eax
 804939a:	75 0f                	jne    80493ab <rio_readlineb+0xb5>
 804939c:	83 7d e4 01          	cmpl   $0x1,-0x1c(%ebp)
 80493a0:	75 d3                	jne    8049375 <rio_readlineb+0x7f>
 80493a2:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 80493a9:	eb cd                	jmp    8049378 <rio_readlineb+0x82>
 80493ab:	c7 45 e4 ff ff ff ff 	movl   $0xffffffff,-0x1c(%ebp)
 80493b2:	eb c4                	jmp    8049378 <rio_readlineb+0x82>

080493b4 <submitr>:
 80493b4:	55                   	push   %ebp
 80493b5:	89 e5                	mov    %esp,%ebp
 80493b7:	57                   	push   %edi
 80493b8:	56                   	push   %esi
 80493b9:	53                   	push   %ebx
 80493ba:	81 ec 50 a0 00 00    	sub    $0xa050,%esp
 80493c0:	8b 5d 1c             	mov    0x1c(%ebp),%ebx
 80493c3:	c7 85 c8 7f ff ff 00 	movl   $0x0,-0x8038(%ebp)
 80493ca:	00 00 00 
 80493cd:	6a 00                	push   $0x0
 80493cf:	6a 01                	push   $0x1
 80493d1:	6a 02                	push   $0x2
 80493d3:	e8 c8 f4 ff ff       	call   80488a0 <socket@plt>
 80493d8:	89 85 b0 5f ff ff    	mov    %eax,-0xa050(%ebp)
 80493de:	83 c4 10             	add    $0x10,%esp
 80493e1:	85 c0                	test   %eax,%eax
 80493e3:	0f 88 0f 01 00 00    	js     80494f8 <submitr+0x144>
 80493e9:	83 ec 0c             	sub    $0xc,%esp
 80493ec:	ff 75 08             	pushl  0x8(%ebp)
 80493ef:	e8 bc f4 ff ff       	call   80488b0 <gethostbyname@plt>
 80493f4:	83 c4 10             	add    $0x10,%esp
 80493f7:	85 c0                	test   %eax,%eax
 80493f9:	0f 84 4a 01 00 00    	je     8049549 <submitr+0x195>
 80493ff:	8d 75 d8             	lea    -0x28(%ebp),%esi
 8049402:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8049409:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8049410:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8049417:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 804941e:	66 c7 45 d8 02 00    	movw   $0x2,-0x28(%ebp)
 8049424:	83 ec 04             	sub    $0x4,%esp
 8049427:	ff 70 0c             	pushl  0xc(%eax)
 804942a:	8d 55 dc             	lea    -0x24(%ebp),%edx
 804942d:	52                   	push   %edx
 804942e:	8b 40 10             	mov    0x10(%eax),%eax
 8049431:	ff 30                	pushl  (%eax)
 8049433:	e8 a8 f3 ff ff       	call   80487e0 <bcopy@plt>
 8049438:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 804943c:	66 c1 c8 08          	ror    $0x8,%ax
 8049440:	66 89 45 da          	mov    %ax,-0x26(%ebp)
 8049444:	83 c4 0c             	add    $0xc,%esp
 8049447:	6a 10                	push   $0x10
 8049449:	56                   	push   %esi
 804944a:	ff b5 b0 5f ff ff    	pushl  -0xa050(%ebp)
 8049450:	e8 7b f4 ff ff       	call   80488d0 <connect@plt>
 8049455:	83 c4 10             	add    $0x10,%esp
 8049458:	85 c0                	test   %eax,%eax
 804945a:	0f 88 5d 01 00 00    	js     80495bd <submitr+0x209>
 8049460:	ba ff ff ff ff       	mov    $0xffffffff,%edx
 8049465:	b8 00 00 00 00       	mov    $0x0,%eax
 804946a:	89 d1                	mov    %edx,%ecx
 804946c:	89 df                	mov    %ebx,%edi
 804946e:	f2 ae                	repnz scas %es:(%edi),%al
 8049470:	89 ce                	mov    %ecx,%esi
 8049472:	f7 d6                	not    %esi
 8049474:	89 d1                	mov    %edx,%ecx
 8049476:	8b 7d 10             	mov    0x10(%ebp),%edi
 8049479:	f2 ae                	repnz scas %es:(%edi),%al
 804947b:	89 8d b4 5f ff ff    	mov    %ecx,-0xa04c(%ebp)
 8049481:	89 d1                	mov    %edx,%ecx
 8049483:	8b 7d 14             	mov    0x14(%ebp),%edi
 8049486:	f2 ae                	repnz scas %es:(%edi),%al
 8049488:	89 cf                	mov    %ecx,%edi
 804948a:	f7 d7                	not    %edi
 804948c:	89 bd ac 5f ff ff    	mov    %edi,-0xa054(%ebp)
 8049492:	89 d1                	mov    %edx,%ecx
 8049494:	8b 7d 18             	mov    0x18(%ebp),%edi
 8049497:	f2 ae                	repnz scas %es:(%edi),%al
 8049499:	8b 95 ac 5f ff ff    	mov    -0xa054(%ebp),%edx
 804949f:	2b 95 b4 5f ff ff    	sub    -0xa04c(%ebp),%edx
 80494a5:	29 ca                	sub    %ecx,%edx
 80494a7:	8d 44 76 fd          	lea    -0x3(%esi,%esi,2),%eax
 80494ab:	8d 44 02 7b          	lea    0x7b(%edx,%eax,1),%eax
 80494af:	3d 00 20 00 00       	cmp    $0x2000,%eax
 80494b4:	0f 87 69 01 00 00    	ja     8049623 <submitr+0x26f>
 80494ba:	8d 95 cc 9f ff ff    	lea    -0x6034(%ebp),%edx
 80494c0:	b9 00 08 00 00       	mov    $0x800,%ecx
 80494c5:	b8 00 00 00 00       	mov    $0x0,%eax
 80494ca:	89 d7                	mov    %edx,%edi
 80494cc:	f3 ab                	rep stos %eax,%es:(%edi)
 80494ce:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
 80494d3:	89 df                	mov    %ebx,%edi
 80494d5:	f2 ae                	repnz scas %es:(%edi),%al
 80494d7:	89 ce                	mov    %ecx,%esi
 80494d9:	f7 d6                	not    %esi
 80494db:	89 f1                	mov    %esi,%ecx
 80494dd:	83 e9 01             	sub    $0x1,%ecx
 80494e0:	89 8d b4 5f ff ff    	mov    %ecx,-0xa04c(%ebp)
 80494e6:	0f 84 01 06 00 00    	je     8049aed <submitr+0x739>
 80494ec:	89 d6                	mov    %edx,%esi
 80494ee:	bf 01 00 00 00       	mov    $0x1,%edi
 80494f3:	e9 bf 01 00 00       	jmp    80496b7 <submitr+0x303>
 80494f8:	8b 45 20             	mov    0x20(%ebp),%eax
 80494fb:	c7 00 45 72 72 6f    	movl   $0x6f727245,(%eax)
 8049501:	c7 40 04 72 3a 20 43 	movl   $0x43203a72,0x4(%eax)
 8049508:	c7 40 08 6c 69 65 6e 	movl   $0x6e65696c,0x8(%eax)
 804950f:	c7 40 0c 74 20 75 6e 	movl   $0x6e752074,0xc(%eax)
 8049516:	c7 40 10 61 62 6c 65 	movl   $0x656c6261,0x10(%eax)
 804951d:	c7 40 14 20 74 6f 20 	movl   $0x206f7420,0x14(%eax)
 8049524:	c7 40 18 63 72 65 61 	movl   $0x61657263,0x18(%eax)
 804952b:	c7 40 1c 74 65 20 73 	movl   $0x73206574,0x1c(%eax)
 8049532:	c7 40 20 6f 63 6b 65 	movl   $0x656b636f,0x20(%eax)
 8049539:	66 c7 40 24 74 00    	movw   $0x74,0x24(%eax)
 804953f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8049544:	e9 d1 04 00 00       	jmp    8049a1a <submitr+0x666>
 8049549:	8b 45 20             	mov    0x20(%ebp),%eax
 804954c:	c7 00 45 72 72 6f    	movl   $0x6f727245,(%eax)
 8049552:	c7 40 04 72 3a 20 44 	movl   $0x44203a72,0x4(%eax)
 8049559:	c7 40 08 4e 53 20 69 	movl   $0x6920534e,0x8(%eax)
 8049560:	c7 40 0c 73 20 75 6e 	movl   $0x6e752073,0xc(%eax)
 8049567:	c7 40 10 61 62 6c 65 	movl   $0x656c6261,0x10(%eax)
 804956e:	c7 40 14 20 74 6f 20 	movl   $0x206f7420,0x14(%eax)
 8049575:	c7 40 18 72 65 73 6f 	movl   $0x6f736572,0x18(%eax)
 804957c:	c7 40 1c 6c 76 65 20 	movl   $0x2065766c,0x1c(%eax)
 8049583:	c7 40 20 73 65 72 76 	movl   $0x76726573,0x20(%eax)
 804958a:	c7 40 24 65 72 20 61 	movl   $0x61207265,0x24(%eax)
 8049591:	c7 40 28 64 64 72 65 	movl   $0x65726464,0x28(%eax)
 8049598:	66 c7 40 2c 73 73    	movw   $0x7373,0x2c(%eax)
 804959e:	c6 40 2e 00          	movb   $0x0,0x2e(%eax)
 80495a2:	83 ec 0c             	sub    $0xc,%esp
 80495a5:	ff b5 b0 5f ff ff    	pushl  -0xa050(%ebp)
 80495ab:	e8 30 f3 ff ff       	call   80488e0 <close@plt>
 80495b0:	83 c4 10             	add    $0x10,%esp
 80495b3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 80495b8:	e9 5d 04 00 00       	jmp    8049a1a <submitr+0x666>
 80495bd:	8b 45 20             	mov    0x20(%ebp),%eax
 80495c0:	c7 00 45 72 72 6f    	movl   $0x6f727245,(%eax)
 80495c6:	c7 40 04 72 3a 20 55 	movl   $0x55203a72,0x4(%eax)
 80495cd:	c7 40 08 6e 61 62 6c 	movl   $0x6c62616e,0x8(%eax)
 80495d4:	c7 40 0c 65 20 74 6f 	movl   $0x6f742065,0xc(%eax)
 80495db:	c7 40 10 20 63 6f 6e 	movl   $0x6e6f6320,0x10(%eax)
 80495e2:	c7 40 14 6e 65 63 74 	movl   $0x7463656e,0x14(%eax)
 80495e9:	c7 40 18 20 74 6f 20 	movl   $0x206f7420,0x18(%eax)
 80495f0:	c7 40 1c 74 68 65 20 	movl   $0x20656874,0x1c(%eax)
 80495f7:	c7 40 20 73 65 72 76 	movl   $0x76726573,0x20(%eax)
 80495fe:	66 c7 40 24 65 72    	movw   $0x7265,0x24(%eax)
 8049604:	c6 40 26 00          	movb   $0x0,0x26(%eax)
 8049608:	83 ec 0c             	sub    $0xc,%esp
 804960b:	ff b5 b0 5f ff ff    	pushl  -0xa050(%ebp)
 8049611:	e8 ca f2 ff ff       	call   80488e0 <close@plt>
 8049616:	83 c4 10             	add    $0x10,%esp
 8049619:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 804961e:	e9 f7 03 00 00       	jmp    8049a1a <submitr+0x666>
 8049623:	8b 45 20             	mov    0x20(%ebp),%eax
 8049626:	c7 00 45 72 72 6f    	movl   $0x6f727245,(%eax)
 804962c:	c7 40 04 72 3a 20 52 	movl   $0x52203a72,0x4(%eax)
 8049633:	c7 40 08 65 73 75 6c 	movl   $0x6c757365,0x8(%eax)
 804963a:	c7 40 0c 74 20 73 74 	movl   $0x74732074,0xc(%eax)
 8049641:	c7 40 10 72 69 6e 67 	movl   $0x676e6972,0x10(%eax)
 8049648:	c7 40 14 20 74 6f 6f 	movl   $0x6f6f7420,0x14(%eax)
 804964f:	c7 40 18 20 6c 61 72 	movl   $0x72616c20,0x18(%eax)
 8049656:	c7 40 1c 67 65 2e 20 	movl   $0x202e6567,0x1c(%eax)
 804965d:	c7 40 20 49 6e 63 72 	movl   $0x72636e49,0x20(%eax)
 8049664:	c7 40 24 65 61 73 65 	movl   $0x65736165,0x24(%eax)
 804966b:	c7 40 28 20 53 55 42 	movl   $0x42555320,0x28(%eax)
 8049672:	c7 40 2c 4d 49 54 52 	movl   $0x5254494d,0x2c(%eax)
 8049679:	c7 40 30 5f 4d 41 58 	movl   $0x58414d5f,0x30(%eax)
 8049680:	c7 40 34 42 55 46 00 	movl   $0x465542,0x34(%eax)
 8049687:	83 ec 0c             	sub    $0xc,%esp
 804968a:	ff b5 b0 5f ff ff    	pushl  -0xa050(%ebp)
 8049690:	e8 4b f2 ff ff       	call   80488e0 <close@plt>
 8049695:	83 c4 10             	add    $0x10,%esp
 8049698:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 804969d:	e9 78 03 00 00       	jmp    8049a1a <submitr+0x666>
 80496a2:	88 16                	mov    %dl,(%esi)
 80496a4:	8d 76 01             	lea    0x1(%esi),%esi
 80496a7:	83 c3 01             	add    $0x1,%ebx
 80496aa:	83 ad b4 5f ff ff 01 	subl   $0x1,-0xa04c(%ebp)
 80496b1:	0f 84 36 04 00 00    	je     8049aed <submitr+0x739>
 80496b7:	0f b6 13             	movzbl (%ebx),%edx
 80496ba:	8d 4a d6             	lea    -0x2a(%edx),%ecx
 80496bd:	89 f8                	mov    %edi,%eax
 80496bf:	80 f9 0f             	cmp    $0xf,%cl
 80496c2:	77 0d                	ja     80496d1 <submitr+0x31d>
 80496c4:	b8 d9 ff 00 00       	mov    $0xffd9,%eax
 80496c9:	d3 e8                	shr    %cl,%eax
 80496cb:	83 f0 01             	xor    $0x1,%eax
 80496ce:	83 e0 01             	and    $0x1,%eax
 80496d1:	84 c0                	test   %al,%al
 80496d3:	74 cd                	je     80496a2 <submitr+0x2ee>
 80496d5:	80 fa 5f             	cmp    $0x5f,%dl
 80496d8:	74 c8                	je     80496a2 <submitr+0x2ee>
 80496da:	89 d0                	mov    %edx,%eax
 80496dc:	83 e0 df             	and    $0xffffffdf,%eax
 80496df:	83 e8 41             	sub    $0x41,%eax
 80496e2:	3c 19                	cmp    $0x19,%al
 80496e4:	76 bc                	jbe    80496a2 <submitr+0x2ee>
 80496e6:	80 fa 20             	cmp    $0x20,%dl
 80496e9:	74 50                	je     804973b <submitr+0x387>
 80496eb:	8d 42 e0             	lea    -0x20(%edx),%eax
 80496ee:	3c 5f                	cmp    $0x5f,%al
 80496f0:	76 09                	jbe    80496fb <submitr+0x347>
 80496f2:	80 fa 09             	cmp    $0x9,%dl
 80496f5:	0f 85 a6 03 00 00    	jne    8049aa1 <submitr+0x6ed>
 80496fb:	83 ec 04             	sub    $0x4,%esp
 80496fe:	0f b6 d2             	movzbl %dl,%edx
 8049701:	52                   	push   %edx
 8049702:	68 ce a2 04 08       	push   $0x804a2ce
 8049707:	8d 85 c0 5f ff ff    	lea    -0xa040(%ebp),%eax
 804970d:	50                   	push   %eax
 804970e:	e8 7d f1 ff ff       	call   8048890 <sprintf@plt>
 8049713:	0f b6 85 c0 5f ff ff 	movzbl -0xa040(%ebp),%eax
 804971a:	88 06                	mov    %al,(%esi)
 804971c:	0f b6 85 c1 5f ff ff 	movzbl -0xa03f(%ebp),%eax
 8049723:	88 46 01             	mov    %al,0x1(%esi)
 8049726:	0f b6 85 c2 5f ff ff 	movzbl -0xa03e(%ebp),%eax
 804972d:	88 46 02             	mov    %al,0x2(%esi)
 8049730:	83 c4 10             	add    $0x10,%esp
 8049733:	8d 76 03             	lea    0x3(%esi),%esi
 8049736:	e9 6c ff ff ff       	jmp    80496a7 <submitr+0x2f3>
 804973b:	c6 06 2b             	movb   $0x2b,(%esi)
 804973e:	8d 76 01             	lea    0x1(%esi),%esi
 8049741:	e9 61 ff ff ff       	jmp    80496a7 <submitr+0x2f3>
 8049746:	01 c6                	add    %eax,%esi
 8049748:	29 c3                	sub    %eax,%ebx
 804974a:	74 27                	je     8049773 <submitr+0x3bf>
 804974c:	83 ec 04             	sub    $0x4,%esp
 804974f:	53                   	push   %ebx
 8049750:	56                   	push   %esi
 8049751:	57                   	push   %edi
 8049752:	e8 f9 f0 ff ff       	call   8048850 <write@plt>
 8049757:	83 c4 10             	add    $0x10,%esp
 804975a:	85 c0                	test   %eax,%eax
 804975c:	7f e8                	jg     8049746 <submitr+0x392>
 804975e:	e8 1d f1 ff ff       	call   8048880 <__errno_location@plt>
 8049763:	83 38 04             	cmpl   $0x4,(%eax)
 8049766:	0f 85 3e 01 00 00    	jne    80498aa <submitr+0x4f6>
 804976c:	b8 00 00 00 00       	mov    $0x0,%eax
 8049771:	eb d3                	jmp    8049746 <submitr+0x392>
 8049773:	8b bd b4 5f ff ff    	mov    -0xa04c(%ebp),%edi
 8049779:	85 ff                	test   %edi,%edi
 804977b:	0f 88 29 01 00 00    	js     80498aa <submitr+0x4f6>
 8049781:	8b 85 b0 5f ff ff    	mov    -0xa050(%ebp),%eax
 8049787:	89 85 cc df ff ff    	mov    %eax,-0x2034(%ebp)
 804978d:	c7 85 d0 df ff ff 00 	movl   $0x0,-0x2030(%ebp)
 8049794:	00 00 00 
 8049797:	8d 85 d8 df ff ff    	lea    -0x2028(%ebp),%eax
 804979d:	89 85 d4 df ff ff    	mov    %eax,-0x202c(%ebp)
 80497a3:	b9 00 20 00 00       	mov    $0x2000,%ecx
 80497a8:	8d 95 cc bf ff ff    	lea    -0x4034(%ebp),%edx
 80497ae:	8d 85 cc df ff ff    	lea    -0x2034(%ebp),%eax
 80497b4:	e8 3d fb ff ff       	call   80492f6 <rio_readlineb>
 80497b9:	85 c0                	test   %eax,%eax
 80497bb:	0f 8e 53 01 00 00    	jle    8049914 <submitr+0x560>
 80497c1:	83 ec 0c             	sub    $0xc,%esp
 80497c4:	8d 85 c8 5f ff ff    	lea    -0xa038(%ebp),%eax
 80497ca:	50                   	push   %eax
 80497cb:	8d 85 c8 7f ff ff    	lea    -0x8038(%ebp),%eax
 80497d1:	50                   	push   %eax
 80497d2:	8d 85 cc 7f ff ff    	lea    -0x8034(%ebp),%eax
 80497d8:	50                   	push   %eax
 80497d9:	68 d5 a2 04 08       	push   $0x804a2d5
 80497de:	8d 85 cc bf ff ff    	lea    -0x4034(%ebp),%eax
 80497e4:	50                   	push   %eax
 80497e5:	e8 76 f0 ff ff       	call   8048860 <__isoc99_sscanf@plt>
 80497ea:	8b 85 c8 7f ff ff    	mov    -0x8038(%ebp),%eax
 80497f0:	83 c4 20             	add    $0x20,%esp
 80497f3:	3d c8 00 00 00       	cmp    $0xc8,%eax
 80497f8:	0f 85 94 01 00 00    	jne    8049992 <submitr+0x5de>
 80497fe:	8d 9d cc bf ff ff    	lea    -0x4034(%ebp),%ebx
 8049804:	bf e6 a2 04 08       	mov    $0x804a2e6,%edi
 8049809:	b9 03 00 00 00       	mov    $0x3,%ecx
 804980e:	89 de                	mov    %ebx,%esi
 8049810:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 8049812:	0f 97 c0             	seta   %al
 8049815:	1c 00                	sbb    $0x0,%al
 8049817:	84 c0                	test   %al,%al
 8049819:	0f 84 a0 01 00 00    	je     80499bf <submitr+0x60b>
 804981f:	b9 00 20 00 00       	mov    $0x2000,%ecx
 8049824:	89 da                	mov    %ebx,%edx
 8049826:	8d 85 cc df ff ff    	lea    -0x2034(%ebp),%eax
 804982c:	e8 c5 fa ff ff       	call   80492f6 <rio_readlineb>
 8049831:	85 c0                	test   %eax,%eax
 8049833:	7f cf                	jg     8049804 <submitr+0x450>
 8049835:	8b 45 20             	mov    0x20(%ebp),%eax
 8049838:	c7 00 45 72 72 6f    	movl   $0x6f727245,(%eax)
 804983e:	c7 40 04 72 3a 20 43 	movl   $0x43203a72,0x4(%eax)
 8049845:	c7 40 08 6c 69 65 6e 	movl   $0x6e65696c,0x8(%eax)
 804984c:	c7 40 0c 74 20 75 6e 	movl   $0x6e752074,0xc(%eax)
 8049853:	c7 40 10 61 62 6c 65 	movl   $0x656c6261,0x10(%eax)
 804985a:	c7 40 14 20 74 6f 20 	movl   $0x206f7420,0x14(%eax)
 8049861:	c7 40 18 72 65 61 64 	movl   $0x64616572,0x18(%eax)
 8049868:	c7 40 1c 20 68 65 61 	movl   $0x61656820,0x1c(%eax)
 804986f:	c7 40 20 64 65 72 73 	movl   $0x73726564,0x20(%eax)
 8049876:	c7 40 24 20 66 72 6f 	movl   $0x6f726620,0x24(%eax)
 804987d:	c7 40 28 6d 20 73 65 	movl   $0x6573206d,0x28(%eax)
 8049884:	c7 40 2c 72 76 65 72 	movl   $0x72657672,0x2c(%eax)
 804988b:	c6 40 30 00          	movb   $0x0,0x30(%eax)
 804988f:	83 ec 0c             	sub    $0xc,%esp
 8049892:	ff b5 b0 5f ff ff    	pushl  -0xa050(%ebp)
 8049898:	e8 43 f0 ff ff       	call   80488e0 <close@plt>
 804989d:	83 c4 10             	add    $0x10,%esp
 80498a0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 80498a5:	e9 70 01 00 00       	jmp    8049a1a <submitr+0x666>
 80498aa:	8b 45 20             	mov    0x20(%ebp),%eax
 80498ad:	c7 00 45 72 72 6f    	movl   $0x6f727245,(%eax)
 80498b3:	c7 40 04 72 3a 20 43 	movl   $0x43203a72,0x4(%eax)
 80498ba:	c7 40 08 6c 69 65 6e 	movl   $0x6e65696c,0x8(%eax)
 80498c1:	c7 40 0c 74 20 75 6e 	movl   $0x6e752074,0xc(%eax)
 80498c8:	c7 40 10 61 62 6c 65 	movl   $0x656c6261,0x10(%eax)
 80498cf:	c7 40 14 20 74 6f 20 	movl   $0x206f7420,0x14(%eax)
 80498d6:	c7 40 18 77 72 69 74 	movl   $0x74697277,0x18(%eax)
 80498dd:	c7 40 1c 65 20 74 6f 	movl   $0x6f742065,0x1c(%eax)
 80498e4:	c7 40 20 20 74 68 65 	movl   $0x65687420,0x20(%eax)
 80498eb:	c7 40 24 20 73 65 72 	movl   $0x72657320,0x24(%eax)
 80498f2:	c7 40 28 76 65 72 00 	movl   $0x726576,0x28(%eax)
 80498f9:	83 ec 0c             	sub    $0xc,%esp
 80498fc:	ff b5 b0 5f ff ff    	pushl  -0xa050(%ebp)
 8049902:	e8 d9 ef ff ff       	call   80488e0 <close@plt>
 8049907:	83 c4 10             	add    $0x10,%esp
 804990a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 804990f:	e9 06 01 00 00       	jmp    8049a1a <submitr+0x666>
 8049914:	8b 45 20             	mov    0x20(%ebp),%eax
 8049917:	c7 00 45 72 72 6f    	movl   $0x6f727245,(%eax)
 804991d:	c7 40 04 72 3a 20 43 	movl   $0x43203a72,0x4(%eax)
 8049924:	c7 40 08 6c 69 65 6e 	movl   $0x6e65696c,0x8(%eax)
 804992b:	c7 40 0c 74 20 75 6e 	movl   $0x6e752074,0xc(%eax)
 8049932:	c7 40 10 61 62 6c 65 	movl   $0x656c6261,0x10(%eax)
 8049939:	c7 40 14 20 74 6f 20 	movl   $0x206f7420,0x14(%eax)
 8049940:	c7 40 18 72 65 61 64 	movl   $0x64616572,0x18(%eax)
 8049947:	c7 40 1c 20 66 69 72 	movl   $0x72696620,0x1c(%eax)
 804994e:	c7 40 20 73 74 20 68 	movl   $0x68207473,0x20(%eax)
 8049955:	c7 40 24 65 61 64 65 	movl   $0x65646165,0x24(%eax)
 804995c:	c7 40 28 72 20 66 72 	movl   $0x72662072,0x28(%eax)
 8049963:	c7 40 2c 6f 6d 20 73 	movl   $0x73206d6f,0x2c(%eax)
 804996a:	c7 40 30 65 72 76 65 	movl   $0x65767265,0x30(%eax)
 8049971:	66 c7 40 34 72 00    	movw   $0x72,0x34(%eax)
 8049977:	83 ec 0c             	sub    $0xc,%esp
 804997a:	ff b5 b0 5f ff ff    	pushl  -0xa050(%ebp)
 8049980:	e8 5b ef ff ff       	call   80488e0 <close@plt>
 8049985:	83 c4 10             	add    $0x10,%esp
 8049988:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 804998d:	e9 88 00 00 00       	jmp    8049a1a <submitr+0x666>
 8049992:	8d 95 c8 5f ff ff    	lea    -0xa038(%ebp),%edx
 8049998:	52                   	push   %edx
 8049999:	50                   	push   %eax
 804999a:	68 e8 a1 04 08       	push   $0x804a1e8
 804999f:	ff 75 20             	pushl  0x20(%ebp)
 80499a2:	e8 e9 ee ff ff       	call   8048890 <sprintf@plt>
 80499a7:	83 c4 04             	add    $0x4,%esp
 80499aa:	ff b5 b0 5f ff ff    	pushl  -0xa050(%ebp)
 80499b0:	e8 2b ef ff ff       	call   80488e0 <close@plt>
 80499b5:	83 c4 10             	add    $0x10,%esp
 80499b8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 80499bd:	eb 5b                	jmp    8049a1a <submitr+0x666>
 80499bf:	b9 00 20 00 00       	mov    $0x2000,%ecx
 80499c4:	8d 95 cc bf ff ff    	lea    -0x4034(%ebp),%edx
 80499ca:	8d 85 cc df ff ff    	lea    -0x2034(%ebp),%eax
 80499d0:	e8 21 f9 ff ff       	call   80492f6 <rio_readlineb>
 80499d5:	85 c0                	test   %eax,%eax
 80499d7:	7e 49                	jle    8049a22 <submitr+0x66e>
 80499d9:	83 ec 08             	sub    $0x8,%esp
 80499dc:	8d 85 cc bf ff ff    	lea    -0x4034(%ebp),%eax
 80499e2:	50                   	push   %eax
 80499e3:	ff 75 20             	pushl  0x20(%ebp)
 80499e6:	e8 05 ee ff ff       	call   80487f0 <strcpy@plt>
 80499eb:	83 c4 04             	add    $0x4,%esp
 80499ee:	ff b5 b0 5f ff ff    	pushl  -0xa050(%ebp)
 80499f4:	e8 e7 ee ff ff       	call   80488e0 <close@plt>
 80499f9:	bf e9 a2 04 08       	mov    $0x804a2e9,%edi
 80499fe:	b9 03 00 00 00       	mov    $0x3,%ecx
 8049a03:	8b 75 20             	mov    0x20(%ebp),%esi
 8049a06:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 8049a08:	0f 97 c0             	seta   %al
 8049a0b:	1c 00                	sbb    $0x0,%al
 8049a0d:	83 c4 10             	add    $0x10,%esp
 8049a10:	84 c0                	test   %al,%al
 8049a12:	0f 95 c0             	setne  %al
 8049a15:	0f b6 c0             	movzbl %al,%eax
 8049a18:	f7 d8                	neg    %eax
 8049a1a:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8049a1d:	5b                   	pop    %ebx
 8049a1e:	5e                   	pop    %esi
 8049a1f:	5f                   	pop    %edi
 8049a20:	5d                   	pop    %ebp
 8049a21:	c3                   	ret    
 8049a22:	8b 45 20             	mov    0x20(%ebp),%eax
 8049a25:	c7 00 45 72 72 6f    	movl   $0x6f727245,(%eax)
 8049a2b:	c7 40 04 72 3a 20 43 	movl   $0x43203a72,0x4(%eax)
 8049a32:	c7 40 08 6c 69 65 6e 	movl   $0x6e65696c,0x8(%eax)
 8049a39:	c7 40 0c 74 20 75 6e 	movl   $0x6e752074,0xc(%eax)
 8049a40:	c7 40 10 61 62 6c 65 	movl   $0x656c6261,0x10(%eax)
 8049a47:	c7 40 14 20 74 6f 20 	movl   $0x206f7420,0x14(%eax)
 8049a4e:	c7 40 18 72 65 61 64 	movl   $0x64616572,0x18(%eax)
 8049a55:	c7 40 1c 20 73 74 61 	movl   $0x61747320,0x1c(%eax)
 8049a5c:	c7 40 20 74 75 73 20 	movl   $0x20737574,0x20(%eax)
 8049a63:	c7 40 24 6d 65 73 73 	movl   $0x7373656d,0x24(%eax)
 8049a6a:	c7 40 28 61 67 65 20 	movl   $0x20656761,0x28(%eax)
 8049a71:	c7 40 2c 66 72 6f 6d 	movl   $0x6d6f7266,0x2c(%eax)
 8049a78:	c7 40 30 20 73 65 72 	movl   $0x72657320,0x30(%eax)
 8049a7f:	c7 40 34 76 65 72 00 	movl   $0x726576,0x34(%eax)
 8049a86:	83 ec 0c             	sub    $0xc,%esp
 8049a89:	ff b5 b0 5f ff ff    	pushl  -0xa050(%ebp)
 8049a8f:	e8 4c ee ff ff       	call   80488e0 <close@plt>
 8049a94:	83 c4 10             	add    $0x10,%esp
 8049a97:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8049a9c:	e9 79 ff ff ff       	jmp    8049a1a <submitr+0x666>
 8049aa1:	a1 18 a2 04 08       	mov    0x804a218,%eax
 8049aa6:	8b 7d 20             	mov    0x20(%ebp),%edi
 8049aa9:	89 07                	mov    %eax,(%edi)
 8049aab:	a1 57 a2 04 08       	mov    0x804a257,%eax
 8049ab0:	8b 7d 20             	mov    0x20(%ebp),%edi
 8049ab3:	89 47 3f             	mov    %eax,0x3f(%edi)
 8049ab6:	8b 45 20             	mov    0x20(%ebp),%eax
 8049ab9:	8d 78 04             	lea    0x4(%eax),%edi
 8049abc:	83 e7 fc             	and    $0xfffffffc,%edi
 8049abf:	29 f8                	sub    %edi,%eax
 8049ac1:	be 18 a2 04 08       	mov    $0x804a218,%esi
 8049ac6:	29 c6                	sub    %eax,%esi
 8049ac8:	83 c0 43             	add    $0x43,%eax
 8049acb:	c1 e8 02             	shr    $0x2,%eax
 8049ace:	89 c1                	mov    %eax,%ecx
 8049ad0:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 8049ad2:	83 ec 0c             	sub    $0xc,%esp
 8049ad5:	ff b5 b0 5f ff ff    	pushl  -0xa050(%ebp)
 8049adb:	e8 00 ee ff ff       	call   80488e0 <close@plt>
 8049ae0:	83 c4 10             	add    $0x10,%esp
 8049ae3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8049ae8:	e9 2d ff ff ff       	jmp    8049a1a <submitr+0x666>
 8049aed:	83 ec 08             	sub    $0x8,%esp
 8049af0:	8d 85 cc 9f ff ff    	lea    -0x6034(%ebp),%eax
 8049af6:	50                   	push   %eax
 8049af7:	ff 75 18             	pushl  0x18(%ebp)
 8049afa:	ff 75 14             	pushl  0x14(%ebp)
 8049afd:	ff 75 10             	pushl  0x10(%ebp)
 8049b00:	68 5c a2 04 08       	push   $0x804a25c
 8049b05:	8d bd cc bf ff ff    	lea    -0x4034(%ebp),%edi
 8049b0b:	57                   	push   %edi
 8049b0c:	e8 7f ed ff ff       	call   8048890 <sprintf@plt>
 8049b11:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
 8049b16:	b8 00 00 00 00       	mov    $0x0,%eax
 8049b1b:	f2 ae                	repnz scas %es:(%edi),%al
 8049b1d:	89 cb                	mov    %ecx,%ebx
 8049b1f:	f7 d3                	not    %ebx
 8049b21:	8d 7b ff             	lea    -0x1(%ebx),%edi
 8049b24:	83 c4 20             	add    $0x20,%esp
 8049b27:	89 fb                	mov    %edi,%ebx
 8049b29:	8d b5 cc bf ff ff    	lea    -0x4034(%ebp),%esi
 8049b2f:	85 ff                	test   %edi,%edi
 8049b31:	0f 84 4a fc ff ff    	je     8049781 <submitr+0x3cd>
 8049b37:	89 bd b4 5f ff ff    	mov    %edi,-0xa04c(%ebp)
 8049b3d:	8b bd b0 5f ff ff    	mov    -0xa050(%ebp),%edi
 8049b43:	e9 04 fc ff ff       	jmp    804974c <submitr+0x398>

08049b48 <init_timeout>:
 8049b48:	55                   	push   %ebp
 8049b49:	89 e5                	mov    %esp,%ebp
 8049b4b:	53                   	push   %ebx
 8049b4c:	83 ec 04             	sub    $0x4,%esp
 8049b4f:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8049b52:	85 db                	test   %ebx,%ebx
 8049b54:	74 24                	je     8049b7a <init_timeout+0x32>
 8049b56:	83 ec 08             	sub    $0x8,%esp
 8049b59:	68 d2 92 04 08       	push   $0x80492d2
 8049b5e:	6a 0e                	push   $0xe
 8049b60:	e8 4b ec ff ff       	call   80487b0 <signal@plt>
 8049b65:	85 db                	test   %ebx,%ebx
 8049b67:	b8 00 00 00 00       	mov    $0x0,%eax
 8049b6c:	0f 48 d8             	cmovs  %eax,%ebx
 8049b6f:	89 1c 24             	mov    %ebx,(%esp)
 8049b72:	e8 59 ec ff ff       	call   80487d0 <alarm@plt>
 8049b77:	83 c4 10             	add    $0x10,%esp
 8049b7a:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8049b7d:	c9                   	leave  
 8049b7e:	c3                   	ret    

08049b7f <init_driver>:
 8049b7f:	55                   	push   %ebp
 8049b80:	89 e5                	mov    %esp,%ebp
 8049b82:	57                   	push   %edi
 8049b83:	56                   	push   %esi
 8049b84:	53                   	push   %ebx
 8049b85:	83 ec 24             	sub    $0x24,%esp
 8049b88:	8b 75 08             	mov    0x8(%ebp),%esi
 8049b8b:	6a 01                	push   $0x1
 8049b8d:	6a 0d                	push   $0xd
 8049b8f:	e8 1c ec ff ff       	call   80487b0 <signal@plt>
 8049b94:	83 c4 08             	add    $0x8,%esp
 8049b97:	6a 01                	push   $0x1
 8049b99:	6a 1d                	push   $0x1d
 8049b9b:	e8 10 ec ff ff       	call   80487b0 <signal@plt>
 8049ba0:	83 c4 08             	add    $0x8,%esp
 8049ba3:	6a 01                	push   $0x1
 8049ba5:	6a 1d                	push   $0x1d
 8049ba7:	e8 04 ec ff ff       	call   80487b0 <signal@plt>
 8049bac:	83 c4 0c             	add    $0xc,%esp
 8049baf:	6a 00                	push   $0x0
 8049bb1:	6a 01                	push   $0x1
 8049bb3:	6a 02                	push   $0x2
 8049bb5:	e8 e6 ec ff ff       	call   80488a0 <socket@plt>
 8049bba:	83 c4 10             	add    $0x10,%esp
 8049bbd:	85 c0                	test   %eax,%eax
 8049bbf:	0f 88 92 00 00 00    	js     8049c57 <init_driver+0xd8>
 8049bc5:	89 c3                	mov    %eax,%ebx
 8049bc7:	83 ec 0c             	sub    $0xc,%esp
 8049bca:	68 ec a2 04 08       	push   $0x804a2ec
 8049bcf:	e8 dc ec ff ff       	call   80488b0 <gethostbyname@plt>
 8049bd4:	83 c4 10             	add    $0x10,%esp
 8049bd7:	85 c0                	test   %eax,%eax
 8049bd9:	0f 84 c3 00 00 00    	je     8049ca2 <init_driver+0x123>
 8049bdf:	8d 7d d8             	lea    -0x28(%ebp),%edi
 8049be2:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8049be9:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8049bf0:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8049bf7:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8049bfe:	66 c7 45 d8 02 00    	movw   $0x2,-0x28(%ebp)
 8049c04:	83 ec 04             	sub    $0x4,%esp
 8049c07:	ff 70 0c             	pushl  0xc(%eax)
 8049c0a:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8049c0d:	52                   	push   %edx
 8049c0e:	8b 40 10             	mov    0x10(%eax),%eax
 8049c11:	ff 30                	pushl  (%eax)
 8049c13:	e8 c8 eb ff ff       	call   80487e0 <bcopy@plt>
 8049c18:	66 c7 45 da 3b 6e    	movw   $0x6e3b,-0x26(%ebp)
 8049c1e:	83 c4 0c             	add    $0xc,%esp
 8049c21:	6a 10                	push   $0x10
 8049c23:	57                   	push   %edi
 8049c24:	53                   	push   %ebx
 8049c25:	e8 a6 ec ff ff       	call   80488d0 <connect@plt>
 8049c2a:	83 c4 10             	add    $0x10,%esp
 8049c2d:	85 c0                	test   %eax,%eax
 8049c2f:	0f 88 d9 00 00 00    	js     8049d0e <init_driver+0x18f>
 8049c35:	83 ec 0c             	sub    $0xc,%esp
 8049c38:	53                   	push   %ebx
 8049c39:	e8 a2 ec ff ff       	call   80488e0 <close@plt>
 8049c3e:	66 c7 06 4f 4b       	movw   $0x4b4f,(%esi)
 8049c43:	c6 46 02 00          	movb   $0x0,0x2(%esi)
 8049c47:	83 c4 10             	add    $0x10,%esp
 8049c4a:	b8 00 00 00 00       	mov    $0x0,%eax
 8049c4f:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8049c52:	5b                   	pop    %ebx
 8049c53:	5e                   	pop    %esi
 8049c54:	5f                   	pop    %edi
 8049c55:	5d                   	pop    %ebp
 8049c56:	c3                   	ret    
 8049c57:	c7 06 45 72 72 6f    	movl   $0x6f727245,(%esi)
 8049c5d:	c7 46 04 72 3a 20 43 	movl   $0x43203a72,0x4(%esi)
 8049c64:	c7 46 08 6c 69 65 6e 	movl   $0x6e65696c,0x8(%esi)
 8049c6b:	c7 46 0c 74 20 75 6e 	movl   $0x6e752074,0xc(%esi)
 8049c72:	c7 46 10 61 62 6c 65 	movl   $0x656c6261,0x10(%esi)
 8049c79:	c7 46 14 20 74 6f 20 	movl   $0x206f7420,0x14(%esi)
 8049c80:	c7 46 18 63 72 65 61 	movl   $0x61657263,0x18(%esi)
 8049c87:	c7 46 1c 74 65 20 73 	movl   $0x73206574,0x1c(%esi)
 8049c8e:	c7 46 20 6f 63 6b 65 	movl   $0x656b636f,0x20(%esi)
 8049c95:	66 c7 46 24 74 00    	movw   $0x74,0x24(%esi)
 8049c9b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8049ca0:	eb ad                	jmp    8049c4f <init_driver+0xd0>
 8049ca2:	c7 06 45 72 72 6f    	movl   $0x6f727245,(%esi)
 8049ca8:	c7 46 04 72 3a 20 44 	movl   $0x44203a72,0x4(%esi)
 8049caf:	c7 46 08 4e 53 20 69 	movl   $0x6920534e,0x8(%esi)
 8049cb6:	c7 46 0c 73 20 75 6e 	movl   $0x6e752073,0xc(%esi)
 8049cbd:	c7 46 10 61 62 6c 65 	movl   $0x656c6261,0x10(%esi)
 8049cc4:	c7 46 14 20 74 6f 20 	movl   $0x206f7420,0x14(%esi)
 8049ccb:	c7 46 18 72 65 73 6f 	movl   $0x6f736572,0x18(%esi)
 8049cd2:	c7 46 1c 6c 76 65 20 	movl   $0x2065766c,0x1c(%esi)
 8049cd9:	c7 46 20 73 65 72 76 	movl   $0x76726573,0x20(%esi)
 8049ce0:	c7 46 24 65 72 20 61 	movl   $0x61207265,0x24(%esi)
 8049ce7:	c7 46 28 64 64 72 65 	movl   $0x65726464,0x28(%esi)
 8049cee:	66 c7 46 2c 73 73    	movw   $0x7373,0x2c(%esi)
 8049cf4:	c6 46 2e 00          	movb   $0x0,0x2e(%esi)
 8049cf8:	83 ec 0c             	sub    $0xc,%esp
 8049cfb:	53                   	push   %ebx
 8049cfc:	e8 df eb ff ff       	call   80488e0 <close@plt>
 8049d01:	83 c4 10             	add    $0x10,%esp
 8049d04:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8049d09:	e9 41 ff ff ff       	jmp    8049c4f <init_driver+0xd0>
 8049d0e:	83 ec 04             	sub    $0x4,%esp
 8049d11:	68 ec a2 04 08       	push   $0x804a2ec
 8049d16:	68 a8 a2 04 08       	push   $0x804a2a8
 8049d1b:	56                   	push   %esi
 8049d1c:	e8 6f eb ff ff       	call   8048890 <sprintf@plt>
 8049d21:	89 1c 24             	mov    %ebx,(%esp)
 8049d24:	e8 b7 eb ff ff       	call   80488e0 <close@plt>
 8049d29:	83 c4 10             	add    $0x10,%esp
 8049d2c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8049d31:	e9 19 ff ff ff       	jmp    8049c4f <init_driver+0xd0>

08049d36 <driver_post>:
 8049d36:	55                   	push   %ebp
 8049d37:	89 e5                	mov    %esp,%ebp
 8049d39:	53                   	push   %ebx
 8049d3a:	83 ec 04             	sub    $0x4,%esp
 8049d3d:	8b 55 08             	mov    0x8(%ebp),%edx
 8049d40:	8b 45 10             	mov    0x10(%ebp),%eax
 8049d43:	8b 5d 14             	mov    0x14(%ebp),%ebx
 8049d46:	85 c0                	test   %eax,%eax
 8049d48:	75 17                	jne    8049d61 <driver_post+0x2b>
 8049d4a:	85 d2                	test   %edx,%edx
 8049d4c:	74 05                	je     8049d53 <driver_post+0x1d>
 8049d4e:	80 3a 00             	cmpb   $0x0,(%edx)
 8049d51:	75 31                	jne    8049d84 <driver_post+0x4e>
 8049d53:	66 c7 03 4f 4b       	movw   $0x4b4f,(%ebx)
 8049d58:	c6 43 02 00          	movb   $0x0,0x2(%ebx)
 8049d5c:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8049d5f:	c9                   	leave  
 8049d60:	c3                   	ret    
 8049d61:	83 ec 08             	sub    $0x8,%esp
 8049d64:	ff 75 0c             	pushl  0xc(%ebp)
 8049d67:	68 fa a2 04 08       	push   $0x804a2fa
 8049d6c:	e8 0f ea ff ff       	call   8048780 <printf@plt>
 8049d71:	66 c7 03 4f 4b       	movw   $0x4b4f,(%ebx)
 8049d76:	c6 43 02 00          	movb   $0x0,0x2(%ebx)
 8049d7a:	83 c4 10             	add    $0x10,%esp
 8049d7d:	b8 00 00 00 00       	mov    $0x0,%eax
 8049d82:	eb d8                	jmp    8049d5c <driver_post+0x26>
 8049d84:	83 ec 04             	sub    $0x4,%esp
 8049d87:	53                   	push   %ebx
 8049d88:	ff 75 0c             	pushl  0xc(%ebp)
 8049d8b:	68 11 a3 04 08       	push   $0x804a311
 8049d90:	52                   	push   %edx
 8049d91:	68 20 a3 04 08       	push   $0x804a320
 8049d96:	68 6e 3b 00 00       	push   $0x3b6e
 8049d9b:	68 ec a2 04 08       	push   $0x804a2ec
 8049da0:	e8 0f f6 ff ff       	call   80493b4 <submitr>
 8049da5:	83 c4 20             	add    $0x20,%esp
 8049da8:	eb b2                	jmp    8049d5c <driver_post+0x26>
 8049daa:	66 90                	xchg   %ax,%ax
 8049dac:	66 90                	xchg   %ax,%ax
 8049dae:	66 90                	xchg   %ax,%ax

08049db0 <__libc_csu_init>:
 8049db0:	55                   	push   %ebp
 8049db1:	57                   	push   %edi
 8049db2:	56                   	push   %esi
 8049db3:	53                   	push   %ebx
 8049db4:	e8 87 eb ff ff       	call   8048940 <__x86.get_pc_thunk.bx>
 8049db9:	81 c3 47 22 00 00    	add    $0x2247,%ebx
 8049dbf:	83 ec 0c             	sub    $0xc,%esp
 8049dc2:	8b 6c 24 28          	mov    0x28(%esp),%ebp
 8049dc6:	8d b3 08 ff ff ff    	lea    -0xf8(%ebx),%esi
 8049dcc:	e8 6b e9 ff ff       	call   804873c <_init>
 8049dd1:	8d 83 04 ff ff ff    	lea    -0xfc(%ebx),%eax
 8049dd7:	29 c6                	sub    %eax,%esi
 8049dd9:	c1 fe 02             	sar    $0x2,%esi
 8049ddc:	85 f6                	test   %esi,%esi
 8049dde:	74 25                	je     8049e05 <__libc_csu_init+0x55>
 8049de0:	31 ff                	xor    %edi,%edi
 8049de2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8049de8:	83 ec 04             	sub    $0x4,%esp
 8049deb:	55                   	push   %ebp
 8049dec:	ff 74 24 2c          	pushl  0x2c(%esp)
 8049df0:	ff 74 24 2c          	pushl  0x2c(%esp)
 8049df4:	ff 94 bb 04 ff ff ff 	call   *-0xfc(%ebx,%edi,4)
 8049dfb:	83 c7 01             	add    $0x1,%edi
 8049dfe:	83 c4 10             	add    $0x10,%esp
 8049e01:	39 fe                	cmp    %edi,%esi
 8049e03:	75 e3                	jne    8049de8 <__libc_csu_init+0x38>
 8049e05:	83 c4 0c             	add    $0xc,%esp
 8049e08:	5b                   	pop    %ebx
 8049e09:	5e                   	pop    %esi
 8049e0a:	5f                   	pop    %edi
 8049e0b:	5d                   	pop    %ebp
 8049e0c:	c3                   	ret    
 8049e0d:	8d 76 00             	lea    0x0(%esi),%esi

08049e10 <__libc_csu_fini>:
 8049e10:	f3 c3                	repz ret 

Disassembly of section .fini:

08049e14 <_fini>:
 8049e14:	53                   	push   %ebx
 8049e15:	83 ec 08             	sub    $0x8,%esp
 8049e18:	e8 23 eb ff ff       	call   8048940 <__x86.get_pc_thunk.bx>
 8049e1d:	81 c3 e3 21 00 00    	add    $0x21e3,%ebx
 8049e23:	83 c4 08             	add    $0x8,%esp
 8049e26:	5b                   	pop    %ebx
 8049e27:	c3                   	ret    
