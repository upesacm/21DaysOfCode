int FindUnique(int * arr, int size)
{
  
 
   
 int i,j;

for(i=0;i<size;i++)

{
 
 
   
 for(j=0; j<size; j++)

{
     
   if(arr[i]==arr[j] && i!=j){
           
 break;
     
   }

    }


    if(j==size){
      
  return arr[i];
  
  }

}
    
    
}


