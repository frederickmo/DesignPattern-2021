#include "shop.h"

void Shop::showShopInformation() {
    cout << "店铺ID: " << _shopID << endl;
    cout << "店铺名称: " + _shopName << endl;
    cout << "开店日期: " + _shopDate << endl;
    cout << "店铺库存: " << _shopStorage << endl;
    cout << "店铺评分: " << this->getTotalRemarkScore() << endl;
    cout << "--以下是评价--" << endl;
    for (ShopRemark *shopRemark:_shopRemarks) {
        cout << "*" << endl;
        cout << "评价日期: " << shopRemark->getRemarkDate() << endl;
        cout << "评价用户: " << shopRemark->getRemarkUser() << endl;
        cout << "评价内容: " << shopRemark->getRemarkBody() << endl;
        cout << "*" << endl << endl;
    }
    cout << "--评价到底了--" << endl;
    cout << endl;
}

void foodShop::accept(Visitor &v) {
    return v.visit(this);
}

foodShop::foodShop(const string &shopName, int shopId, const string &shopType, const string &shopDate, int shopStorage,
                   double shopScore, const list<ShopRemark *> &shopRemarks,
                   const map<CommodityInformation *, int> &itemList) : Shop(
        shopName, shopId, shopType, shopDate, shopStorage, shopScore, shopRemarks, itemList) {}


void drinkShop::accept(Visitor &v) {
    return v.visit(this);
}

drinkShop::drinkShop(const string &shopName, int shopId, const string &shopType, const string &shopDate,
                     int shopStorage, double shopScore, const list<ShopRemark *> &shopRemarks,
                     const map<CommodityInformation *, int> &itemList) : Shop(shopName, shopId, shopType, shopDate,
                                                                              shopStorage,
                                                                              shopScore, shopRemarks, itemList) {}


void digitalShop::accept(Visitor &v) {
    return v.visit(this);
}

digitalShop::digitalShop(const string &shopName, int shopId, const string &shopType, const string &shopDate,
                         int shopStorage, double shopScore, const list<ShopRemark *> &shopRemarks,
                         const map<CommodityInformation *, int> &itemList) : Shop(shopName, shopId, shopType, shopDate,
                                                                                  shopStorage,
                                                                                  shopScore, shopRemarks, itemList) {}


void bookShop::accept(Visitor &v) {
    return v.visit(this);
}

bookShop::bookShop(const string &shopName, int shopId, const string &shopType, const string &shopDate, int shopStorage,
                   double shopScore, const list<ShopRemark *> &shopRemarks,
                   const map<CommodityInformation *, int> &itemList) : Shop(
        shopName, shopId, shopType, shopDate, shopStorage, shopScore, shopRemarks, itemList) {}


void dailyShop::accept(Visitor &v) {
    return v.visit(this);
}

dailyShop::dailyShop(const string &shopName, int shopId, const string &shopType, const string &shopDate,
                     int shopStorage, double shopScore, const list<ShopRemark *> &shopRemarks,
                     const map<CommodityInformation *, int> &itemList) : Shop(shopName, shopId, shopType, shopDate,
                                                                              shopStorage,
                                                                              shopScore, shopRemarks, itemList) {}


void furnitureShop::accept(Visitor &v) {
    return v.visit(this);
}

furnitureShop::furnitureShop(const string &shopName, int shopId, const string &shopType, const string &shopDate,
                             int shopStorage, double shopScore, const list<ShopRemark *> &shopRemarks,
                             const map<CommodityInformation *, int> &itemList) : Shop(shopName, shopId, shopType,
                                                                                      shopDate, shopStorage,
                                                                                      shopScore, shopRemarks,
                                                                                      itemList) {}


void clothesShop::accept(Visitor &v) {
    v.visit(this);
}

clothesShop::clothesShop(const string &shopName, int shopId, const string &shopType, const string &shopDate,
                         int shopStorage, double shopScore, const list<ShopRemark *> &shopRemarks,
                         const map<CommodityInformation *, int> &itemList) : Shop(shopName, shopId, shopType, shopDate,
                                                                                  shopStorage,
                                                                                  shopScore, shopRemarks, itemList) {}


void stationeryShop::accept(Visitor &v) {
    return v.visit(this);
}

stationeryShop::stationeryShop(const string &shopName, int shopId, const string &shopType, const string &shopDate,
                               int shopStorage, double shopScore, const list<ShopRemark *> &shopRemarks,
                               const map<CommodityInformation *, int> &itemList) : Shop(shopName, shopId, shopType,
                                                                                        shopDate,
                                                                                        shopStorage, shopScore,
                                                                                        shopRemarks,
                                                                                        itemList) {}


void sportShop::accept(Visitor &v) {
    return v.visit(this);
}

sportShop::sportShop(const string &shopName, int shopId, const string &shopType, const string &shopDate,
                     int shopStorage, double shopScore, const list<ShopRemark *> &shopRemarks,
                     const map<CommodityInformation *, int> &itemList) : Shop(shopName, shopId, shopType, shopDate,
                                                                              shopStorage,
                                                                              shopScore, shopRemarks, itemList) {}


void nullShop::accept(Visitor &v) {
    return v.visit(this);
}

nullShop::nullShop(const string &shopName, int shopId, const string &shopType, const string &shopDate, int shopStorage,
                   double shopScore, const list<ShopRemark *> &shopRemarks,
                   const map<CommodityInformation *, int> &itemList) : Shop(
        shopName, shopId, shopType, shopDate, shopStorage, shopScore, shopRemarks, itemList) {}
