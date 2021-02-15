int _atoi(char *s)
{ 
    int temp = 0; 
    for (int i = 0; i < str.length(); i++) { 
  
        // Since ASCII value of character from '0' 
        // to '9' are contiguous. So if we subtract 
        // '0' from ASCII value of a digit, we get  
        // the integer value of the digit. 
        temp = temp * 10 + (str[i] - '0'); 
    } 
    return temp; 
}
