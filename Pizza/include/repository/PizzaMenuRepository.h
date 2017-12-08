#ifndef PIZZAMENUREPOSITORY_H
#define PIZZAMENUREPOSITORY_H


class PizzaMenuRepository
{
    public:
        PizzaMenuRepository();
        void add_pizzamenu_info(const PizzaMenuModel& pizzamenu_info);

    private:
        PizzaMenuRepository pizzamenu_info_repo;
};

#endif // PIZZAMENUREPOSITORY_H
