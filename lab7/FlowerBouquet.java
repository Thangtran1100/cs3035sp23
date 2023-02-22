public class FlowerBouquet {

    // Declare variables
    private String flowerName;
    private String flowerColor;

    // Constructor
    public FlowerBouquet(String flowerName, String flowerColor) {
        this.flowerName = flowerName;
        this.flowerColor = flowerColor;
    }

    // whichFlower method return information about the flower bouquet
    public String whichFlower() {
        return "This flower is a " + flowerColor + " colored " + flowerName;
    }

    // sameFlower method decide if two flower bouquets are the same
    public String sameFlower(FlowerBouquet flower) {
        if (this.flowerName.equals(flower.flowerName) && this.flowerColor.equals(flower.flowerColor)) {
            return "It is the same flower";
        }

        return "It is not the same flower";
    }


    // Driver
    public static void main(String[] args) {
        // Create 3 flower bouquets
        FlowerBouquet bouquet1 = new FlowerBouquet("Lavender", "Purple");
        FlowerBouquet bouquet2 = new FlowerBouquet("Rose", "Red");
        FlowerBouquet bouquet3 = new FlowerBouquet("Lavender", "Purple");

        // Print out information of flower bouquet
        System.out.println(bouquet1.whichFlower());

        // Compare two flower bouquets
        System.out.println(bouquet1.sameFlower(bouquet2));
        System.out.println(bouquet1.sameFlower(bouquet3));

    }
}
