#include "List.hpp"
#include "Player.hpp"
#include "Game.hpp"
#include "Renderable.hpp"
#include "Product.hpp"
#include "FarmAnimal.hpp"
#include "Cell/Facility.hpp"
#include "Cell/Facility/Mixer.hpp"
#include "Cell/Facility/Truck.hpp"
#include "Cell/Facility/Well.hpp"
#include "Cell/Land.hpp"
#include "Cell/Land/Barn.hpp"
#include "Cell/Land/Coop.hpp"
#include "Cell/Land/Grassland.hpp"
#include "FarmAnimal/Angsa.hpp"
#include "FarmAnimal/Ayam.hpp"
#include "FarmAnimal/Bebek.hpp"
#include "FarmAnimal/Kambing.hpp"
#include "FarmAnimal/EggProducingAnimal.hpp"
#include "FarmAnimal/Kuda.hpp"
#include "FarmAnimal/MeatProducingAnimal.hpp"
#include "FarmAnimal/MilkProducingAnimal.hpp"
#include "FarmAnimal/Sapi.hpp"
#include "Product/FarmProduct.hpp"
#include "Product/FarmProduct/Egg.hpp"
#include "Product/FarmProduct/Egg/ChickenEgg.hpp"
#include "Product/FarmProduct/Egg/DuckEgg.hpp"
#include "Product/FarmProduct/Egg/GooseEgg.hpp"
#include "Product/FarmProduct/Meat.hpp"
#include "Product/FarmProduct/Meat/ChickenMeat.hpp"
#include "Product/FarmProduct/Meat/CowMeat.hpp"
#include "Product/FarmProduct/Meat/DuckMeat.hpp"
#include "Product/FarmProduct/Meat/GoatMeat.hpp"
#include "Product/FarmProduct/Meat/GooseMeat.hpp"
#include "Product/FarmProduct/Meat/HorseMeat.hpp"
#include "Product/FarmProduct/Milk.hpp"
#include "Product/FarmProduct/Milk/CowMilk.hpp"
#include "Product/FarmProduct/Milk/GoatMilk.hpp"
#include "Product/FarmProduct/Milk/HorseMilk.hpp"
#include "Product/SideProduct.hpp"
#include "Product/SideProduct/AngsaGeprek.hpp"
#include "Product/SideProduct/ChickenRolade.hpp"
#include "Product/SideProduct/KambingGuling.hpp"
#include "Product/SideProduct/KapsulEkstrakSusuKuda.hpp"
#include "Product/SideProduct/KudaBakarTelur.hpp"
#include "Product/SideProduct/NasiHainan.hpp"
#include "Product/SideProduct/SapiOmelete.hpp"
#include "Product/SideProduct/SusuKambingInstan.hpp"
#include "Product/SideProduct/SusuTelurMaduJahe.hpp"
#include <bits/stdc++.h>
#include <gtest/gtest.h>

using namespace std;

TEST(ListTest, test1){
    List<int> listOfObject;
    listOfObject.add(1);
    listOfObject.add(2);
    listOfObject.add(3);
    listOfObject.add(4);
    listOfObject.add(5);
    listOfObject.add(6);
    ASSERT_EQ(listOfObject.getNeff(),6);
    ASSERT_EQ(listOfObject.get(5), 6);
    listOfObject.remove(1);
    ASSERT_EQ(listOfObject.find(1), -1);
    listOfObject.removeIdx(1);
    ASSERT_EQ(listOfObject.find(3), -1);
    ASSERT_EQ(listOfObject.isEmpty(),false);
    listOfObject.removeIdx(0);
    listOfObject.removeIdx(0);
    listOfObject.removeIdx(0);
    listOfObject.removeIdx(0);
    ASSERT_EQ(listOfObject.isEmpty(),true);
}

TEST(MixerTest, test2){
    Mixer* a1 = new Mixer();
    List<Product*> bag;
    bag.add(new ChickenEgg()); //0
    bag.add(new ChickenEgg()); //1
    bag.add(new ChickenEgg()); //2 
    bag.add(new ChickenEgg()); //3
    bag.add(new ChickenEgg()); //4
    bag.add(new ChickenEgg()); //5
    bag.add(new ChickenMeat()); //6
    bag.add(new DuckMeat()); //7
    bag.add(new CowMeat()); //8
    bag.add(new HorseMeat()); //9 
    bag.add(new GoatMeat()); //10
    bag.add(new CowMilk()); //11
    bag.add(new CowMilk()); //12
    bag.add(new HorseMilk()); //13 
    bag.add(new HorseMilk()); //14
    bag.add(new GoatMilk()); //15
    bag.add(new GoatMilk()); //16

    a1->Mix(0,2,&bag); //SideProduct not define
    ASSERT_LT(bag.get(bag.getNeff()-1)->getTypeProduct(),13);
    
    a1->Mix(0,7,&bag); //Tambah Nasi Hainan ke list
    ASSERT_EQ(bag.get(bag.getNeff()-1)->getTypeProduct(),14);

    a1->Mix(6,0,&bag); //Tambah Sapi Omelete ke list
    ASSERT_EQ(bag.get(bag.getNeff()-1)->getTypeProduct(),16);
}

TEST(WellTest, test3) {
    Well* w = new Well();
    int a = 50;
    Player p = Player(2,3);
    p.setWater(50);

    ASSERT_EQ(p.getWater(), 50);
    w -> getWater(&a);

    ASSERT_EQ(a,100);
}

TEST(TruckTest, test4){
    Truck* t1 = new Truck();
    List<Product*> bag;
    int gameMoney;

    bag.add(new ChickenEgg()); //0
    bag.add(new ChickenRolade()); //1
    bag.add(new CowMilk()); //2
    bag.add(new SusuKambingInstan()); //3
    bag.add(new GooseMeat()); //4
    bag.add(new KambingGuling()); //5
    
    t1->setStatus(true);
    ASSERT_EQ(t1->checkStatus(), true); //cek status truk menjadi available
    t1->sellProduct(&bag, &gameMoney,3);
    ASSERT_EQ(bag.isEmpty(),true); //cek apakah semua isi tas menjadi kosong
    cout << gameMoney << endl;
}

TEST(LandTest, test5){
    Barn b = Barn(false);
    Coop c = Coop(false);
    Grassland g = Grassland(false);

    ASSERT_EQ(b.getRender(), '@');
    ASSERT_EQ(c.getRender(), '#');
    ASSERT_EQ(g.getRender(), '*');
    
    ASSERT_EQ(b.getTypeCell(), 4);
    ASSERT_EQ(c.getTypeCell(), 5);
    ASSERT_EQ(g.getTypeCell(), 6);
}

TEST(FacilityTest, test6){
    Well w = Well();
    Mixer m = Mixer();
    Truck t = Truck();

    ASSERT_EQ(w.getRender(),'W');
    ASSERT_EQ(m.getRender(),'M');
    ASSERT_EQ(t.getRender(),'T');

    ASSERT_EQ(w.isHasGrass(), false);
    ASSERT_EQ(m.isHasGrass(), false);
    ASSERT_EQ(t.isHasGrass(), false);
}

TEST(FarmAnimal, test7){
    Angsa *a1 = new Angsa(0,0);
    Ayam *a2 = new Ayam(1,1);
    Bebek *b = new Bebek(2,2);
    Kambing *k1 = new Kambing(3,3);
    Kuda *k2 = new Kuda(4,4);
    Sapi *s = new Sapi(5,5);

    ASSERT_EQ(a1->getTypeAnimal(),1);
    ASSERT_EQ(a1->getHasProduct(),false);
    ASSERT_EQ(a1->getHungry(),5);
    ASSERT_EQ(a1->getDead(),false);
    ASSERT_EQ(a1->getVoice(),"Ngok ngok ngok");
    ASSERT_EQ(a1->getRender(),'a');
    ASSERT_EQ(a1->getX(),0);
    ASSERT_EQ(a1->getY(),0);

    ASSERT_EQ(a2->getTypeAnimal(),2);
    ASSERT_EQ(a2->getHasProduct(),false);
    ASSERT_EQ(a2->getHungry(),6);
    ASSERT_EQ(a2->getDead(),false);
    ASSERT_EQ(a2->getVoice(),"Petook");
    ASSERT_EQ(a2->getRender(),'c');
    ASSERT_EQ(a2->getX(),1);
    ASSERT_EQ(a2->getY(),1);
    
    ASSERT_EQ(b->getTypeAnimal(),3);
    ASSERT_EQ(b->getHasProduct(),false);
    ASSERT_EQ(b->getHungry(),7);
    ASSERT_EQ(b->getDead(),false);
    ASSERT_EQ(b->getVoice(),"Kwek kwek");
    ASSERT_EQ(b->getRender(),'b');
    ASSERT_EQ(b->getX(),2);
    ASSERT_EQ(b->getY(),2);

    ASSERT_EQ(k1->getTypeAnimal(),4);
    ASSERT_EQ(k1->getHasProduct(), false);
    ASSERT_EQ(k1->getHungry(), 8);
    ASSERT_EQ(k1->getDead(), false);
    ASSERT_EQ(k1->getVoice(), "Mbek");
    ASSERT_EQ(k1->getRender(), 'k');
    ASSERT_EQ(k1->getX(), 3);
    ASSERT_EQ(k1->getY(), 3);

    ASSERT_EQ(k2->getTypeAnimal(),5);
    ASSERT_EQ(k2->getHasProduct(),false);
    ASSERT_EQ(k2->getHungry(),9);
    ASSERT_EQ(k2->getDead(),false);
    ASSERT_EQ(k2->getVoice(),"Hikhik-hikhik");
    ASSERT_EQ(k2->getRender(),'h');
    ASSERT_EQ(k2->getX(),4);
    ASSERT_EQ(k2->getY(),4);

    ASSERT_EQ(s->getTypeAnimal(),6);
    ASSERT_EQ(s->getHasProduct(),false);
    ASSERT_EQ(s->getHungry(),10);
    ASSERT_EQ(s->getDead(),false);
    ASSERT_EQ(s->getVoice(),"Moo");
    ASSERT_EQ(s->getRender(),'s');
    ASSERT_EQ(s->getX(),5);
    ASSERT_EQ(s->getY(),5);

}

TEST(FarmProduct, test8){
    ChickenEgg *ce = new ChickenEgg();
    DuckEgg *de = new DuckEgg();
    GooseEgg *ge = new GooseEgg();
    ChickenMeat *cm = new ChickenMeat();
    CowMeat *com = new CowMeat();
    DuckMeat *dm = new DuckMeat();
    GoatMeat *gm = new GoatMeat();
    GooseMeat *gom = new GooseMeat();
    HorseMeat *hm = new HorseMeat();
    CowMilk *cmi = new CowMilk();
    GoatMilk *gmi = new GoatMilk();
    HorseMilk *hmi = new HorseMilk();

    ASSERT_EQ(ce->getTypeProduct(), 1);
    ASSERT_EQ(de->getTypeProduct(), 2);
    ASSERT_EQ(ge->getTypeProduct(), 3);
    ASSERT_EQ(cm->getTypeProduct(), 4);
    ASSERT_EQ(com->getTypeProduct(), 7);
    ASSERT_EQ(dm->getTypeProduct(), 5);
    ASSERT_EQ(gm->getTypeProduct(), 9);
    ASSERT_EQ(gom->getTypeProduct(), 6);
    ASSERT_EQ(hm->getTypeProduct(), 8);
    ASSERT_EQ(cmi->getTypeProduct(), 10);
    ASSERT_EQ(gmi->getTypeProduct(), 12);
    ASSERT_EQ(hmi->getTypeProduct(), 11);
}

TEST(SideProduct, test9){
    ChickenRolade *cr = new ChickenRolade();
    NasiHainan *nh = new NasiHainan();
    AngsaGeprek *ag = new AngsaGeprek();
    SapiOmelete *so = new SapiOmelete();
    KudaBakarTelur *kbt = new KudaBakarTelur();
    KambingGuling *kg = new KambingGuling();
    SusuTelurMaduJahe *stmj = new SusuTelurMaduJahe();
    KapsulEkstrakSusuKuda *kesk = new KapsulEkstrakSusuKuda();
    SusuKambingInstan *ski = new SusuKambingInstan();
    
    ASSERT_EQ(cr->getTypeProduct(), 13);
    ASSERT_EQ(nh->getTypeProduct(), 14);
    ASSERT_EQ(ag->getTypeProduct(), 15);
    ASSERT_EQ(so->getTypeProduct(), 16);
    ASSERT_EQ(kbt->getTypeProduct(),17);
    ASSERT_EQ(kg->getTypeProduct(), 18);
    ASSERT_EQ(stmj->getTypeProduct(), 19);
    ASSERT_EQ(kesk->getTypeProduct(), 20);
    ASSERT_EQ(ski->getTypeProduct(), 21);
}

TEST(TestGame, test10) {
    Game objGame;
    ASSERT_EQ(objGame.getPlayer().getMoney(), 0);
    ASSERT_EQ(objGame.getPlayer().getRender(), '^');
    ASSERT_EQ(objGame.getPlayer().getWater(), 100);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
