    #include<stdio.h>
    #include<stdlib.h>

    int main()
    {
        int n, flag = 0;
        scanf("%d", &n);
        int arr[n];

        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }   
        for (int i = 0; i < n; i++)
        {        
            if((arr[i] %2 == 0) && (i %2 == 0))
            {
                printf("%d ", arr[i]);
                flag++;
            }
        }
        if(flag == 0){
            printf("None\n");
        }

        return 0;
    }