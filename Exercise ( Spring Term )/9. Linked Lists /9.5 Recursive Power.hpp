double pow(double x, int n){
    if(n == 0){
        return 1; // base case 
    }
    else{
        return x*pow(x,n-1); // recursive call
    }
}