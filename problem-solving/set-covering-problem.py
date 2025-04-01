# Suppose you’re starting a radio show.
# You want to reach listeners in all 50 states.
# You have to decide what stations to play on to reach all those listeners.
# It costs money to be on each station, so you’re trying to minimize the number
# of stations you play on. Y

states_needed = set(["mt", "wa", "or", "id", "nv", "ut", "ca", "az"])
final_stations = set()

stations = {}
stations["kone"] = set(["id", "nv", "ut"])
stations["ktwo"] = set(["wa", "id", "mt"])
stations["kthree"] = set(["or", "nv", "ca"])
stations["kfour"] = set(["nv", "ut"])
stations["kfive"] = set(["ca", "az"])

while states_needed:
    best_station = None
    states_covered = set()

    for station, states in stations.items():
        covered = states_needed & states
        if len(covered) > len(states_covered):
            best_station = station
            states_covered = covered

    final_stations.add(best_station)
    states_needed -= states_covered

print(final_stations)
