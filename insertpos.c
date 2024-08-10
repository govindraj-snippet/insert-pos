# include <stdio.h > 

int main(){
    int arr[100] ;
    int n ; 
    printf("the no. of elements in your array ");
    scanf("%d" , &n); 
    printf("enter the elements of array \n ") ;

    for(int i = 0 ; i < n ; i ++ ){

        scanf("%d" , &arr[i]);

    }

    int pos ; 
    printf("enter the position on that you want to insert your key ");
    scanf("%d" , &pos );

    int key ; 
    printf("enter the key that you want to insert ");
    scanf("%d" , &key);

    for(int i = n ; i > pos ; i-- ){
        arr[i] = arr[ i - 1 ];
    } 

    arr[pos] = key ; 

    printf("your new array : \n ") ; 

    for(int i = 0 ; i < n ; i ++ ){
        printf("%d \n " , arr[i]);
        
    }

    return 0 ; 

    
}