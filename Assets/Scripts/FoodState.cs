using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class FoodState
{
    //Ternera - Beef        - 1
    public static readonly ID beef = 1;
    public static class beefState
    {
        public static readonly ID raw = beef[0];
        public static readonly ID dicedRaw = beef[1];
        public static readonly ID dicedCooked = beef[3];
        public static readonly ID cooked = beef[4];
    }

    //Brocoli               - 2
    public static readonly ID brocoli = 2;
    public static class brocoliState
    {
        public static readonly ID giant = brocoli[0];
        public static readonly ID diced = brocoli[1];
        public static readonly ID dicedCooked = brocoli[2];
        public static readonly ID giantCooked = brocoli[3];
    }

    //Masa - Dough          - 3
    public static readonly ID dough = 3;
    public static class doughState
    {
        public static readonly ID raw = dough[0];
        public static readonly ID flattened = dough[1];
        public static readonly ID cooked = dough[2];
    }

    //Cebolla - Onion       - 4
    public static readonly ID onion = 4;
    public static class onionState
    {
        public static readonly ID giant = onion[0];
        public static class giantState
        {
            public static readonly ID raw = giant[0];
            public static readonly ID cooked = giant[1];
            public static readonly ID boiled = giant[2];
        }

        public static readonly ID diced = onion[1];
        public static class dicedState
        {
            public static readonly ID raw = diced[0];
            public static readonly ID cooked = diced[1];
            public static readonly ID boiled = diced[2];
            public static readonly ID roasted = diced[3];
        }
    }

    //Queso - Cheese        - 5
    public static readonly ID cheese = 5;
    public static class cheeseState
    {
        public static readonly ID raw = cheese[0];
        public static readonly ID ball = cheese[1];     //Ball, for movement ?¿
        public static readonly ID melt = cheese[2];
        public static readonly ID spread = cheese[3];
    }

    //Pepperoni             - 6
    public static readonly ID pepperoni = 6;
    public static class pepperoniState
    {
        public static readonly ID raw = pepperoni[0];
        public static readonly ID sliced = pepperoni[1];
        public static readonly ID cooked = pepperoni[2];
    }
}

public struct ID
{
    public static ID none;

    public ID this[int childID]
    {
        get { return new ID((mID << 8) | (uint)childID); }
    }

    public ID super
    {
        get { return new ID(mID >> 8); }
    }

    public bool isa(ID super)
    {
        return (this != none) && ((this.super == super) || this.super.isa(super));
    }

    public static implicit operator ID(int id)
    {
        if (id == 0)
        {
            throw new System.InvalidCastException("top level id cannot be 0");
        }
        return new ID((uint)id);
    }

    public static bool operator ==(ID a, ID b)
    {
        return a.mID == b.mID;
    }

    public static bool operator !=(ID a, ID b)
    {
        return a.mID != b.mID;
    }

    public override bool Equals(object obj)
    {
        if (obj is ID)
            return ((ID)obj).mID == mID;
        else
            return false;
    }

    public override int GetHashCode()
    {
        return (int)mID;
    }

    private ID(uint id)
    {
        mID = id;
    }

    private readonly uint mID;
}