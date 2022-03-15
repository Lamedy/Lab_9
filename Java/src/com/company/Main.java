package com.company;

public class Main {

    public static void main(String[] args) {
        point a = new point();
        point b = new point(1);
        point c = new point(2,3);
        System.out.println( "Staticheskie:\n" + a.x + "\t" + a.y + "\n" + b.x + "\t" + b.y + "\n" + c.x + "\t" + c.y);

        massive numbers = new massive(5);
        System.out.println("\nDinamitchesky massive:");
        for (int i = 0; i < numbers.Size; i++)
        {
            System.out.print(numbers.data[i] + " ");
        }
        System.out.println();
    }
}
