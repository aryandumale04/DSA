import java.util.*;
public class Solution {
    public static void main(String[] args) {

    }
}

class Product {
    private int id;
    private String name;
    private double price;
    private List<Double> ratings;

    Product(int id, String name, double price) {
        this.id = id;
        this.name = name;
        this.price = price;
        this.ratings = new ArrayList<>();
    }

    //getters 
    public int getId() {
        return this.id;
    }
    public String getName() {
        return this.name;
    }
    public double getPrice() {
        return this.price;
    }
    public List<Double> getRatings() {
        return this.ratings;
    }

    //setters 
    void setId(int id) {
        this.id = id;
    }
    void setName(String s) {
        this.name = s;
    }
    void setPrice(double p) {
        this.price = p;
    }
    void setRatings(List<Double> r) {
        this.ratings = r;
    }
}

class ProductService {

    //that stores all products ???
    private List<Product> products =  new ArrayList<>();

    public Product Add() {

    }

    public Product Update() {

    }

    public Product Get() {

    }

    public Product Average() {

    }

    public Product WeightedAverage() {

    }
}
