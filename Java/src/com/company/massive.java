package com.company;

public class massive {
    public int[] data;
    public int Size;

    public massive(int size)
    {
        this.data = new int[size];
        this.Size = size;
        for (int i = 0; i < size; i++)
        {
            data[i] = i + 1;
        }
    }
}
