using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Utility
{
    public static class WeightUnitConverter
    {
        public static float TrueWeight(float weight, int unit)
        {
            return weight * Mathf.Pow(10, 3 - unit);
        }
    }
}