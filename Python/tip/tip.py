def main():
    dollars = dollars_to_float(input("How much was the meal? "))
    percent = percent_to_float(input("What percentage would you like to tip? "))
    tip = float(dollars) * float(percent)/100
    print(f"Leave ${tip:.2f}")


def dollars_to_float(d):
    # TODO using strip function maybe
    # can not find strip replace maybe?

    d = d.replace("$", "")
    return d




def percent_to_float(p):
    # TODO
    #copy paste
    p = p.replace("%", "")
    return p


main()
