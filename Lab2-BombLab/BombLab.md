# phase_1

``` shell
> gdb bomb
(gdb) disas phase_1
```
``` assembly
Dump of assembler code for function phase_1:
   0x08048b69 <+0>:     push   %ebp
   0x08048b6a <+1>:     mov    %esp,%ebp
   0x08048b6c <+3>:     sub    $0x10,%esp
   0x08048b6f <+6>:     push   $0x8049f6c
   0x08048b74 <+11>:    push   0x8(%ebp)
   0x08048b77 <+14>:    call   0x8048fdd <strings_not_equal>
   0x08048b7c <+19>:    add    $0x10,%esp
   0x08048b7f <+22>:    test   %eax,%eax
   0x08048b81 <+24>:    jne    0x8048b85 <phase_1+28>
   0x08048b83 <+26>:    leave
   0x08048b84 <+27>:    ret
   0x08048b85 <+28>:    call   0x80490de <explode_bomb>
   0x08048b8a <+33>:    jmp    0x8048b83 <phase_1+26>
End of assembler dump.
```

```sh
(gdb) x/s 0x8049f6c
```

```assembly
0x8049f6c:      "Houses will begat jobs, jobs will begat houses."
```

# phase_2

```
(gdb) disas phase_2
```

``` assembly
Dump of assembler code for function phase_2:
   0x08048b8c <+0>:     push   %ebp
   0x08048b8d <+1>:     mov    %esp,%ebp
   0x08048b8f <+3>:     push   %esi
   0x08048b90 <+4>:     push   %ebx
   0x08048b91 <+5>:     sub    $0x28,%esp
   0x08048b94 <+8>:     lea    -0x20(%ebp),%eax
   0x08048b97 <+11>:    push   %eax
   0x08048b98 <+12>:    push   0x8(%ebp)
   0x08048b9b <+15>:    call   0x8049106 <read_six_numbers>
   0x08048ba0 <+20>:    add    $0x10,%esp
   0x08048ba3 <+23>:    cmpl   $0x1,-0x20(%ebp)
   0x08048ba7 <+27>:    jne    0x8048bb1 <phase_2+37>
   0x08048ba9 <+29>:    lea    -0x20(%ebp),%ebx
   0x08048bac <+32>:    lea    -0xc(%ebp),%esi
   0x08048baf <+35>:    jmp    0x8048bbf <phase_2+51>
   0x08048bb1 <+37>:    call   0x80490de <explode_bomb>
   0x08048bb6 <+42>:    jmp    0x8048ba9 <phase_2+29>
   0x08048bb8 <+44>:    add    $0x4,%ebx
   0x08048bbb <+47>:    cmp    %esi,%ebx
   0x08048bbd <+49>:    je     0x8048bcf <phase_2+67>
   0x08048bbf <+51>:    mov    (%ebx),%eax
   0x08048bc1 <+53>:    add    %eax,%eax
   0x08048bc3 <+55>:    cmp    %eax,0x4(%ebx)
   0x08048bc6 <+58>:    je     0x8048bb8 <phase_2+44>
   0x08048bc8 <+60>:    call   0x80490de <explode_bomb>
   0x08048bcd <+65>:    jmp    0x8048bb8 <phase_2+44>
   0x08048bcf <+67>:    lea    -0x8(%ebp),%esp
   0x08048bd2 <+70>:    pop    %ebx
   0x08048bd3 <+71>:    pop    %esi
   0x08048bd4 <+72>:    pop    %ebp
   0x08048bd5 <+73>:    ret
End of assembler dump.
```

```
1 2 4 8 16 32
```

# phase_3

```
(gdb) disas phase_3
```

``` assembly
Dump of assembler code for function phase_3:
   0x08048bd6 <+0>:     push   %ebp
   0x08048bd7 <+1>:     mov    %esp,%ebp
   0x08048bd9 <+3>:     sub    $0x18,%esp
   0x08048bdc <+6>:     lea    -0x10(%ebp),%eax
   0x08048bdf <+9>:     push   %eax
   0x08048be0 <+10>:    lea    -0xc(%ebp),%eax
   0x08048be3 <+13>:    push   %eax
   0x08048be4 <+14>:    push   $0x804a10b
   0x08048be9 <+19>:    push   0x8(%ebp)
   0x08048bec <+22>:    call   0x8048860 <__isoc99_sscanf@plt>
   0x08048bf1 <+27>:    add    $0x10,%esp
   0x08048bf4 <+30>:    cmp    $0x1,%eax
   0x08048bf7 <+33>:    jle    0x8048c09 <phase_3+51>
   0x08048bf9 <+35>:    cmpl   $0x7,-0xc(%ebp)
   0x08048bfd <+39>:    ja     0x8048c7b <phase_3+165>
   0x08048bff <+41>:    mov    -0xc(%ebp),%eax
   0x08048c02 <+44>:    jmp    *0x8049fcc(,%eax,4)
   0x08048c09 <+51>:    call   0x80490de <explode_bomb>
   0x08048c0e <+56>:    jmp    0x8048bf9 <phase_3+35>
   0x08048c10 <+58>:    mov    $0x252,%eax
   0x08048c15 <+63>:    jmp    0x8048c1c <phase_3+70>
   0x08048c17 <+65>:    mov    $0x0,%eax
   0x08048c1c <+70>:    sub    $0x313,%eax
   0x08048c21 <+75>:    add    $0x279,%eax
   0x08048c26 <+80>:    sub    $0x1b1,%eax
   0x08048c2b <+85>:    add    $0x1b1,%eax
   0x08048c30 <+90>:    sub    $0x1b1,%eax
   0x08048c35 <+95>:    add    $0x1b1,%eax
   0x08048c3a <+100>:   sub    $0x1b1,%eax
   0x08048c3f <+105>:   cmpl   $0x5,-0xc(%ebp)
   0x08048c43 <+109>:   jg     0x8048c4a <phase_3+116>
   0x08048c45 <+111>:   cmp    %eax,-0x10(%ebp)
   0x08048c48 <+114>:   je     0x8048c4f <phase_3+121>
   0x08048c4a <+116>:   call   0x80490de <explode_bomb>
--Type <RET> for more, q to quit, c to continue without paging--
   0x08048c4f <+121>:   leave
   0x08048c50 <+122>:   ret
   0x08048c51 <+123>:   mov    $0x0,%eax
   0x08048c56 <+128>:   jmp    0x8048c21 <phase_3+75>
   0x08048c58 <+130>:   mov    $0x0,%eax
   0x08048c5d <+135>:   jmp    0x8048c26 <phase_3+80>
   0x08048c5f <+137>:   mov    $0x0,%eax
   0x08048c64 <+142>:   jmp    0x8048c2b <phase_3+85>
   0x08048c66 <+144>:   mov    $0x0,%eax
   0x08048c6b <+149>:   jmp    0x8048c30 <phase_3+90>
   0x08048c6d <+151>:   mov    $0x0,%eax
   0x08048c72 <+156>:   jmp    0x8048c35 <phase_3+95>
   0x08048c74 <+158>:   mov    $0x0,%eax
   0x08048c79 <+163>:   jmp    0x8048c3a <phase_3+100>
   0x08048c7b <+165>:   call   0x80490de <explode_bomb>
   0x08048c80 <+170>:   mov    $0x0,%eax
   0x08048c85 <+175>:   jmp    0x8048c3f <phase_3+105>
End of assembler dump.
```
```assembly
(gdb) x/s 0x804a10b
0x804a10b:      "%d %d"
```


```
0 7
```

# phase_4

```
(gdb) disas phase_4
```
```assembly
Dump of assembler code for function phase_4:
   0x08048ce4 <+0>:     push   %ebp
   0x08048ce5 <+1>:     mov    %esp,%ebp
   0x08048ce7 <+3>:     sub    $0x18,%esp
   0x08048cea <+6>:     lea    -0x10(%ebp),%eax
   0x08048ced <+9>:     push   %eax
   0x08048cee <+10>:    lea    -0xc(%ebp),%eax
   0x08048cf1 <+13>:    push   %eax
   0x08048cf2 <+14>:    push   $0x804a10b
   0x08048cf7 <+19>:    push   0x8(%ebp)
   0x08048cfa <+22>:    call   0x8048860 <__isoc99_sscanf@plt>
   0x08048cff <+27>:    add    $0x10,%esp
   0x08048d02 <+30>:    cmp    $0x2,%eax
   0x08048d05 <+33>:    jne    0x8048d0d <phase_4+41>
   0x08048d07 <+35>:    cmpl   $0xe,-0xc(%ebp)
   0x08048d0b <+39>:    jbe    0x8048d12 <phase_4+46>
   0x08048d0d <+41>:    call   0x80490de <explode_bomb>
   0x08048d12 <+46>:    sub    $0x4,%esp
   0x08048d15 <+49>:    push   $0xe
   0x08048d17 <+51>:    push   $0x0
   0x08048d19 <+53>:    push   -0xc(%ebp)
   0x08048d1c <+56>:    call   0x8048c87 <func4>
   0x08048d21 <+61>:    add    $0x10,%esp
   0x08048d24 <+64>:    cmp    $0x3,%eax
   0x08048d27 <+67>:    jne    0x8048d2f <phase_4+75>
   0x08048d29 <+69>:    cmpl   $0x3,-0x10(%ebp)
   0x08048d2d <+73>:    je     0x8048d34 <phase_4+80>
   0x08048d2f <+75>:    call   0x80490de <explode_bomb>
   0x08048d34 <+80>:    leave
   0x08048d35 <+81>:    ret
End of assembler dump.
```

```
(gdb) disas func4
```

```assembly
Dump of assembler code for function func4:
   0x08048c87 <+0>:     push   %ebp
   0x08048c88 <+1>:     mov    %esp,%ebp
   0x08048c8a <+3>:     push   %ebx
   0x08048c8b <+4>:     sub    $0x4,%esp
   0x08048c8e <+7>:     mov    0x8(%ebp),%ecx
   0x08048c91 <+10>:    mov    0xc(%ebp),%eax
   0x08048c94 <+13>:    mov    0x10(%ebp),%ebx
   0x08048c97 <+16>:    sub    %eax,%ebx
   0x08048c99 <+18>:    mov    %ebx,%edx
   0x08048c9b <+20>:    shr    $0x1f,%edx
   0x08048c9e <+23>:    add    %ebx,%edx
   0x08048ca0 <+25>:    sar    %edx
   0x08048ca2 <+27>:    add    %eax,%edx
   0x08048ca4 <+29>:    cmp    %ecx,%edx
   0x08048ca6 <+31>:    jg     0x8048cb6 <func4+47>
   0x08048ca8 <+33>:    mov    $0x0,%eax
   0x08048cad <+38>:    cmp    %ecx,%edx
   0x08048caf <+40>:    jl     0x8048ccb <func4+68>
   0x08048cb1 <+42>:    mov    -0x4(%ebp),%ebx
   0x08048cb4 <+45>:    leave
   0x08048cb5 <+46>:    ret
   0x08048cb6 <+47>:    sub    $0x4,%esp
   0x08048cb9 <+50>:    sub    $0x1,%edx
   0x08048cbc <+53>:    push   %edx
   0x08048cbd <+54>:    push   %eax
   0x08048cbe <+55>:    push   %ecx
   0x08048cbf <+56>:    call   0x8048c87 <func4>
   0x08048cc4 <+61>:    add    $0x10,%esp
   0x08048cc7 <+64>:    add    %eax,%eax
   0x08048cc9 <+66>:    jmp    0x8048cb1 <func4+42>
   0x08048ccb <+68>:    sub    $0x4,%esp
   0x08048cce <+71>:    push   0x10(%ebp)
   0x08048cd1 <+74>:    add    $0x1,%edx
   0x08048cd4 <+77>:    push   %edx
--Type <RET> for more, q to quit, c to continue without paging--
   0x08048cd5 <+78>:    push   %ecx
   0x08048cd6 <+79>:    call   0x8048c87 <func4>
   0x08048cdb <+84>:    add    $0x10,%esp
   0x08048cde <+87>:    lea    0x1(%eax,%eax,1),%eax
   0x08048ce2 <+91>:    jmp    0x8048cb1 <func4+42>
End of assembler dump.
```

```
12 3
```

or

```
13 3
```

# phase_5



```assembly
(gdb) disas phase_5
Dump of assembler code for function phase_5:
   0x08048d36 <+0>:     push   %ebp
   0x08048d37 <+1>:     mov    %esp,%ebp
   0x08048d39 <+3>:     push   %ebx
   0x08048d3a <+4>:     sub    $0x20,%esp
   0x08048d3d <+7>:     mov    0x8(%ebp),%ebx
   0x08048d40 <+10>:    push   %ebx
   0x08048d41 <+11>:    call   0x8048fbb <string_length>
   0x08048d46 <+16>:    add    $0x10,%esp
   0x08048d49 <+19>:    cmp    $0x6,%eax
   0x08048d4c <+22>:    jne    0x8048d8e <phase_5+88>
   0x08048d4e <+24>:    mov    $0x0,%eax
   0x08048d53 <+29>:    movzbl (%ebx,%eax,1),%edx
   0x08048d57 <+33>:    and    $0xf,%edx
   0x08048d5a <+36>:    movzbl 0x8049fec(%edx),%edx
   0x08048d61 <+43>:    mov    %dl,-0xf(%ebp,%eax,1)
   0x08048d65 <+47>:    add    $0x1,%eax
   0x08048d68 <+50>:    cmp    $0x6,%eax
   0x08048d6b <+53>:    jne    0x8048d53 <phase_5+29>
   0x08048d6d <+55>:    movb   $0x0,-0x9(%ebp)
   0x08048d71 <+59>:    sub    $0x8,%esp
   0x08048d74 <+62>:    push   $0x8049fc2
   0x08048d79 <+67>:    lea    -0xf(%ebp),%eax
   0x08048d7c <+70>:    push   %eax
   0x08048d7d <+71>:    call   0x8048fdd <strings_not_equal>
   0x08048d82 <+76>:    add    $0x10,%esp
   0x08048d85 <+79>:    test   %eax,%eax
   0x08048d87 <+81>:    jne    0x8048d95 <phase_5+95>
   0x08048d89 <+83>:    mov    -0x4(%ebp),%ebx
   0x08048d8c <+86>:    leave
   0x08048d8d <+87>:    ret
   0x08048d8e <+88>:    call   0x80490de <explode_bomb>
   0x08048d93 <+93>:    jmp    0x8048d4e <phase_5+24>
   0x08048d95 <+95>:    call   0x80490de <explode_bomb>
   0x08048d9a <+100>:   jmp    0x8048d89 <phase_5+83>
--Type <RET> for more, q to quit, c to continue without paging--
End of assembler dump.
```

```assembly
(gdb) x/s 0x8049fec
0x8049fec <array.3041>: "maduiersnfotvbylSo you think you can stop the bomb with ctrl-c, do you?"
(gdb) x/s 0x8049fc2
0x8049fc2:      "oilers"
```

对应位置

```
13 4 15 5 6 7
```

```
jdouvw
```

# phase_6

```assembly
(gdb) x/3xw 0x804c13c
0x804c13c <node1>:      0x0000009e      0x00000001      0x0804c148
(gdb) x/3xw 0x804c148
0x804c148 <node2>:      0x000000ec      0x00000002      0x0804c154
(gdb) x/3xw 0x804c154
0x804c154 <node3>:      0x00000372      0x00000003      0x0804c160
(gdb) x/3xw 0x804c160
0x804c160 <node4>:      0x000000f5      0x00000004      0x0804c16c
(gdb) x/3xw 0x804c16c
0x804c16c <node5>:      0x00000330      0x00000005      0x0804c178
(gdb) x/3xw 0x804c178
0x804c178 <node6>:      0x000003a4      0x00000006      0x00000000
```

