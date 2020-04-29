class am{
    public static void main(String args[]){
        int arr[]=new int[]{-2, -3, 4, -1, -2, 1, 5, -3};
        int max_end = 0;
        int max = 0;
        for(int i=0;i<arr.length;i++){
            max_end = Math.max(arr[i], max_end+arr[i]);
            max = Math.max(max_end,max);
        }
        System.out.println(max);
    }
}