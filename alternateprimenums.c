#include <stdio.h>
int isprime(int y){
	int i,cnt=0;
	for(i=1;i<=y;i++){
		if(y%i==0){
			cnt++;
		}
		
	}
	if(cnt==2){
		return 1;
	}
	return 0;
}
int main() {
    int n = 100, i, j,cntt=0;
    for(j=2;j<=n;j++){
    	
    	if(isprime(j)){
    		if(cntt%2==0){
    			printf("%d\t",j);
			}
    		cntt++;
		}
	}
	
	

}

