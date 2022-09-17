int main() {
	
    int n;
    scanf("%d", &n);
    int sum; 
    sum = n % 10 + (n/10)%10 + (n/100) % 10 + (n/1000) % 10 + (n/10000) % 10;
    printf("%d" , sum);
    return 0;
}