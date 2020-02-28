package test;
import java.util.Scanner;

class AreaCirculo{
    public static void main(String[] args){
        float pi = 3.14159;
        Scanner sc = new Scanner(System.in);
        float raio = sc.nextFloat();
        sc.nextLine();
        System.out.println("A=" + pi*(Math.pow(raio, 2)));
    }
}
