#CompileTestUnit
# g++ Player.cpp Game.cpp Cell.cpp Renderable.cpp Product.cpp FarmAnimal.cpp Cell/Facility.cpp Cell/Facility/Mixer.cpp Cell/Facility/Truck.cpp Cell/Facility/Well.cpp Cell/Land.cpp Cell/Land/Barn.cpp Cell/Land/Coop.cpp Cell/Land/Grassland.cpp FarmAnimal/Angsa.cpp FarmAnimal/Ayam.cpp FarmAnimal/Bebek.cpp FarmAnimal/Kambing.cpp FarmAnimal/EggProducingAnimal.cpp FarmAnimal/Kuda.cpp FarmAnimal/MeatProducingAnimal.cpp FarmAnimal/MilkProducingAnimal.cpp FarmAnimal/Sapi.cpp Product/FarmProduct.cpp Product/FarmProduct/Egg.cpp Product/FarmProduct/Egg/ChickenEgg.cpp Product/FarmProduct/Egg/DuckEgg.cpp Product/FarmProduct/Egg/GooseEgg.cpp Product/FarmProduct/Meat.cpp Product/FarmProduct/Meat/ChickenMeat.cpp Product/FarmProduct/Meat/CowMeat.cpp Product/FarmProduct/Meat/DuckMeat.cpp Product/FarmProduct/Meat/GoatMeat.cpp Product/FarmProduct/Meat/GooseMeat.cpp Product/FarmProduct/Meat/HorseMeat.cpp Product/FarmProduct/Milk.cpp Product/FarmProduct/Milk/CowMilk.cpp Product/FarmProduct/Milk/GoatMilk.cpp Product/FarmProduct/Milk/HorseMilk.cpp Product/SideProduct.cpp Product/SideProduct/AngsaGeprek.cpp Product/SideProduct/ChickenRolade.cpp Product/SideProduct/KambingGuling.cpp Product/SideProduct/KapsulEkstrakSusuKuda.cpp Product/SideProduct/KudaBakarTelur.cpp Product/SideProduct/NasiHainan.cpp Product/SideProduct/SapiOmelete.cpp Product/SideProduct/SusuKambingInstan.cpp Product/SideProduct/SusuTelurMaduJahe.cpp TestUnit.cpp
# -L/usr/lib/ -lgtest -lgtest_main -pthread -o engisFarm
# ./engisFarm
# g++
# Player.cpp \
# Game.cpp \
# Renderable.cpp \
# Product.cpp \
# FarmAnimal.cpp \
# Cell/Facility.cpp \
# Cell/Facility/Mixer.cpp \
# Cell/Facility/Truck.cpp \
# Cell/Facility/Well.cpp \
# Cell/Land.cpp \
# Cell/Land/Barn.cpp \
# Cell/Land/Coop.cpp \
# Cell/Land/Grassland.cpp \
# FarmAnimal/Angsa.cpp \
# FarmAnimal/Ayam.cpp \
# FarmAnimal/Bebek.cpp \
# FarmAnimal/Kambing.cpp \
# FarmAnimal/EggProducingAnimal.cpp \
# FarmAnimal/Kuda.cpp \
# FarmAnimal/MeatProducingAnimal.cpp \
# FarmAnimal/MilkProducingAnimal.cpp \
# FarmAnimal/Sapi.cpp \
# Product/FarmProduct.cpp \
# Product/FarmProduct/Egg.cpp \
# Product/FarmProduct/Egg/ChickenEgg.cpp \
# Product/FarmProduct/Egg/DuckEgg.cpp \
# Product/FarmProduct/Egg/GooseEgg.cpp \
# Product/FarmProduct/Meat.cpp \
# Product/FarmProduct/Meat/ChickenMeat.cpp \
# Product/FarmProduct/Meat/CowMeat.cpp \
# Product/FarmProduct/Meat/DuckMeat.cpp \
# Product/FarmProduct/Meat/GoatMeat.cpp \
# Product/FarmProduct/Meat/GooseMeat.cpp \
# Product/FarmProduct/Meat/HorseMeat.cpp \
# Product/FarmProduct/Milk.cpp \
# Product/FarmProduct/Milk/CowMilk.cpp \
# Product/FarmProduct/Milk/GoatMilk.cpp \
# Product/FarmProduct/Milk/HorseMilk.cpp \
# Product/SideProduct.cpp \
# Product/SideProduct/AngsaGeprek.cpp \
# Product/SideProduct/ChickenRolade.cpp \
# Product/SideProduct/KambingGuling.cpp \
# Product/SideProduct/KapsulEkstrakSusuKuda.cpp \
# Product/SideProduct/KudaBakarTelur.cpp \
# Product/SideProduct/NasiHainan.cpp \
# Product/SideProduct/SapiOmelete.cpp \
# Product/SideProduct/SusuKambingInstan.cpp \
# Product/SideProduct/SusuTelurMaduJahe.cpp \
clear
g++ Cell.cpp FarmAnimal.cpp Game.cpp List.hpp Player.cpp Product.cpp Cell/Facility.cpp Cell/Land.cpp Cell/Facility/Mixer.cpp Cell/Facility/Truck.cpp Cell/Facility/Well.cpp Cell/Land/Barn.cpp Cell/Land/Coop.cpp Cell/Land/Grassland.cpp FarmAnimal/Angsa.cpp FarmAnimal/Ayam.cpp FarmAnimal/Bebek.cpp FarmAnimal/EggProducingAnimal.cpp FarmAnimal/Kambing.cpp FarmAnimal/Kuda.cpp FarmAnimal/MeatProducingAnimal.cpp FarmAnimal/MilkProducingAnimal.cpp FarmAnimal/Sapi.cpp Product/FarmProduct.cpp Product/SideProduct.cpp Product/FarmProduct/Egg.cpp Product/FarmProduct/Meat.cpp Product/FarmProduct/Milk.cpp Product/FarmProduct/Egg/ChickenEgg.cpp Product/FarmProduct/Egg/DuckEgg.cpp Product/FarmProduct/Egg/GooseEgg.cpp Product/FarmProduct/Meat/ChickenMeat.cpp Product/FarmProduct/Meat/CowMeat.cpp Product/FarmProduct/Meat/DuckMeat.cpp Product/FarmProduct/Meat/GoatMeat.cpp Product/FarmProduct/Meat/GooseMeat.cpp Product/FarmProduct/Meat/HorseMeat.cpp Product/FarmProduct/Milk/CowMilk.cpp Product/FarmProduct/Milk/GoatMilk.cpp Product/FarmProduct/Milk/HorseMilk.cpp Product/SideProduct/AngsaGeprek.cpp Product/SideProduct/ChickenRolade.cpp Product/SideProduct/KambingGuling.cpp Product/SideProduct/KapsulEkstrakSusuKuda.cpp Product/SideProduct/KudaBakarTelur.cpp Product/SideProduct/NasiHainan.cpp Product/SideProduct/SapiOmelete.cpp Product/SideProduct/SusuKambingInstan.cpp Product/SideProduct/SusuTelurMaduJahe.cpp Renderable.cpp \
TestUnit.cpp \
-L/usr/lib/ -lgtest -lgtest_main -pthread -o engisFarm

./engisFarm