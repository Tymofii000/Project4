// ������� ���� "����� �������"
public class LivingOrganism
{
    public double Energy{ get; set; }
    public int Age{ get; set; }
    public double Size{ get; set; }
}

// ���� "�������" ���������� �� "����� �������"
public class Animal : LivingOrganism, IReproducible, IPredator
{
    // ������� ������� �������������� ��� ������
    public void Reproduce() { /* ��������� ������ */ }
    public void Hunt(LivingOrganism target) { /* ��������� ������ */ }
}

// ���� "�������" ���������� �� "����� �������"
public class Plant : LivingOrganism, IReproducible
{
    // ������� ������� �������������� ��� ������
    public void Reproduce() { /* ��������� ������ */ }
}

// ���� "̳����������" ���������� �� "����� �������"
public class Microorganism : LivingOrganism, IReproducible
{
    // ������� ������� �������������� ��� ������������
    public void Reproduce() { /* ��������� ������ */ }
}

// ��������� ��� �����������
public interface IReproducible
{
    void Reproduce();
}

// ��������� ��� ���������
public interface IPredator
{
    void Hunt(LivingOrganism target);
}

// ���� "����������" ������� ������� ��������
public class Ecosystem
{
    private List<LivingOrganism> organisms = new List<LivingOrganism>();

    public void AddOrganism(LivingOrganism organism)
    {
        organisms.Add(organism);
    }

    public void SimulateInteraction()
    {
        // ����������� �����䳿 ��������: ����������, �����������, �����������, � �.�.
    }
}
