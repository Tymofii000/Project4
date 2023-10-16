// Базовий клас "Живий організм"
public class LivingOrganism
{
    public double Energy{ get; set; }
    public int Age{ get; set; }
    public double Size{ get; set; }
}

// Клас "Тварина" спадкується від "Живий організм"
public class Animal : LivingOrganism, IReproducible, IPredator
{
    // Додайте унікальні характеристики для тварин
    public void Reproduce() { /* Реалізація методу */ }
    public void Hunt(LivingOrganism target) { /* Реалізація методу */ }
}

// Клас "Рослина" спадкується від "Живий організм"
public class Plant : LivingOrganism, IReproducible
{
    // Додайте унікальні характеристики для рослин
    public void Reproduce() { /* Реалізація методу */ }
}

// Клас "Мікроорганізм" спадкується від "Живий організм"
public class Microorganism : LivingOrganism, IReproducible
{
    // Додайте унікальні характеристики для мікроорганізмів
    public void Reproduce() { /* Реалізація методу */ }
}

// Інтерфейс для розмноження
public interface IReproducible
{
    void Reproduce();
}

// Інтерфейс для полювання
public interface IPredator
{
    void Hunt(LivingOrganism target);
}

// Клас "Екосистема" моделює взаємодію організмів
public class Ecosystem
{
    private List<LivingOrganism> organisms = new List<LivingOrganism>();

    public void AddOrganism(LivingOrganism organism)
    {
        organisms.Add(organism);
    }

    public void SimulateInteraction()
    {
        // Моделювання взаємодії організмів: харчування, розмноження, конкуренція, і т.д.
    }
}
