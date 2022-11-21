package assignment2;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int i,j,count;
        Scanner sc = new Scanner(System.in);
        int arr[]=new int[100];
        int fq[]=new int[100];
        
        for(i=0;i<10;i++){
            arr[i]=sc.nextInt();
            fq[i]=0;
        }

        for(i=0;i<10;i++){
            if(fq[i]==0){
                count=1;
                for(j=i+1;j<10;j++){
                    if(arr[i]==arr[j]){
                        count++;
                        fq[j]=-1;
                    }
                }
                fq[i]=count;
                System.out.println("Frequency of "+arr[i]+" is: "+count);
            }
        }
    }
}
