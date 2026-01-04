int powerRecursive(int base, int exponent) {
   if(exponent==0)
   return 1;
   int ans=base*powerRecursive(base,exponent-1);
}
//base=2 ,exponent=3, output=2*2*2=8
//remember only the first condition we have to solve all other is solved by the recurssion technique