package assignment3;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int first,second=0;
        System.out.println("Enter the limit");
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter values of array");
        int[] arr = new int[100];
        for(int i=0;i<10;i++){
            arr[i]=sc.nextInt();
        }
        first=arr[0];
        for(int i=0;i<10;i++){
            if(first<arr[i]){
                second =first;
                first = arr[i];
            }else if(second < arr[i] && arr[i] < first){
                second = arr[i];
            }
        }

        System.out.println("Second largest number is : "+second);
        
    }
}
