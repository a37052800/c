#define MALE 1
class heart
{
private:
    int _gender = MALE;
    int _heartbeat = 70;

public:
    int Check_gender()
    {
        return _gender;
    };
    void Accelerated_heartbeat()
    {
        _heartbeat++;
    };
    bool Raided()
    {
        if (_heartbeat >= 120)
            return true;
        else
            return false;
    };
};
int main()
{
    heart person;
    while (person.Raided())
    {
        person.Accelerated_heartbeat();
    }
    return 0;
}
