; Program to find whether a person is eligible for voting or not on the basis of age


section .text

  global main
  extern printf
  extern scanf


section .data
   
   msg1: db 'Enter the age of the person',10,0   
   age_read: db "%d", 0               
   age_entered: dd 0             
   msg2:db 'The person is eligible for voting',10,0
   msg3:db 'The person is not Eligible for voting',10,0
   age: dd 18



main:

   push ebp 
   mov ebp,esp 
   push msg1
   call printf
   add esp, 4 
   push age_entered
   push age_read
   call scanf
   mov eax,[age_entered];
   cmp eax,[age];
   jge loop;
   push msg3
   call printf
   jmp exit;


   loop:

    push msg2
    call printf
    jmp exit

   exit:

     mov esp,ebp
     pop ebp
     ret


