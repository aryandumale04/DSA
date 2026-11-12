import java.util.Scanner; 

public class MyClass {
    public static void main(String[] args) {

        Scanner sc =  new Scanner(System.in);

        Fruits[] arr =  new Fruits[4];
        int fruitId;
        String fruitName;
        int price;
        int rating;
        int p;

        for (int i = 0; i < 4; i++) {
            fruitId = sc.nextInt();
            sc.nextLine();
            fruitName = sc.nextLine();
            price = sc.nextInt();
            rating = sc.nextInt();


            arr[i] = new Fruits(fruitId, fruitName,price,rating);

        }
        p = sc.nextInt();


        Fruits n = findMaximumPriceByRating(arr, p);
        if (n == null) {
            System.out.println("No such Fruit");
        } else {
            System.out.println(n.getFruitId());
        }

    }

    static Fruits findMaximumPriceByRating(Fruits[] arr, int p) {
        int highestPrice =  Integer.MIN_VALUE;
        int highestPriceFruitIndex = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i].getRating() > p && arr[i].getFruitPrice() > highestPrice) {
                highestPrice = arr[i].getFruitPrice();
                highestPriceFruitIndex = i;
            }
        }

        if (highestPrice == Integer.MIN_VALUE) {
            return null;
        } else {
            return arr[highestPriceFruitIndex];
        }

    }
}

class Fruits {
    private int fruitId;
    private String fruitName;
    private int price;
    private int rating;

    Fruits(int fId,String name,int price,int rat) {
        this.fruitId = fId;
        this.fruitName = name;
        this.price = price;
        this.rating = rat;
    }

    //getters

    public int getFruitId() {
        return this.fruitId;
    }

    public String getFruitName() {
        return this.fruitName;
    }

    public int getFruitPrice() {
        return this.price;
    }

    public int getRating() {
        return this.rating;
    }


    //setters 
    public void setFruitId(int fId) {
        this.fruitId = fId;
    }

    public void setFruitName(String name) {
        this.fruitName = name;
    }

    public void setFruitPrice(int p) {
        this.price = p;
    }

    public void setFruitRating(int r) {
        this.rating = r;
    }

}