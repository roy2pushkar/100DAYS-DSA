string reverseWord(string str){

  //Your code here
  int n=str.length();
  int st=0;
  int end=n-1;
  while(st<end){
      swap(str[st++],str[end--]);
  }
  return str;

}
