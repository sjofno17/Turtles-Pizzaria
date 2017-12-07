#ifndef PIZZAREPOSITORY_H
#define PIZZAREPOSITORY_H


class PizzaRepository
{
    public:
        PizzaRepository();
        virtual ~PizzaRepository();

        void storePizza(const PizzaUI& pizzaui);
        PizzaUI retrievePizzaUI();

    protected:

    private:
};

#endif // PIZZAREPOSITORY_H
