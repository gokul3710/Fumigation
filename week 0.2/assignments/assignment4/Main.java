package assignment4;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.println("Enter the limit");
        Scanner sc = new Scanner(System.in);
        int limit = sc.nextInt();
        System.out.println("Enter values of array");
        int[] arr = new int[100];
        for(int i=0;i<limit;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<limit-1;i++){
            for(int j=i+1;j<limit;j++){
                if(arr[i]==arr[j]){
                    limit=limit-1;
                    for(int k=j;k<limit-1;k++){
                        arr[k]=arr[k+1];
                    }
                }
            }
        }
        System.out.println(limit);
        for(int i=0;i<limit;i++){
            System.out.print(arr[i]+ " ");
        }  
    }
}
