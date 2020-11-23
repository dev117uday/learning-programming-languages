public abstract class Crashable
{
    boolean carDriveAble = false;
    public void goodToGo()
    {
        this.carDriveAble = true;
    }
    public void youCrashed()
    {
        this.carDriveAble = false;
    }

    public abstract void setCarStrength(int carStrength);
    public abstract int getCarStrength();
}
