int main() { 
    
    int t;
    scanf("%d", &t);
    
    for ( int i = 0; i < t; i++) {
    
        int n;
        scanf("%d", &n);
    
        int a[n];
        for (int i = 0; i < n; i++){
            scanf ("%d", &a[i]);
        }
    
        int tp;
    
        for (int i = 0; i < n; i++){ 
            for (int j = 0; j < n; j++){ 
            
                if (a[i] < a[j]){
                
                    tp = a[i];
                    a[i] = a[j];
                    a[j] = tp;
                }
            }
        }


        int p = 0, q = 0;
    
        int even[n/2], odd[n/2];
    
        for (int i = 0; i < n; i++){
        
            if (a[i]%2 == 0){
                even[p] = a[i];
                p++;
            }
        
            else {
                odd[q] = a[i];
                q++;
            }
        }
    
        int id = (n/2);
    
        for (int i = 0; i < n/2; i++)
        {
            if(i == id) {
                printf("%d ", odd[i]);
                printf("%d\n", even[i]);
            }
            
            else {
                printf("%d ", odd[i]);
                printf("%d ", even[i]);
            }
        
        }  
    }
}
