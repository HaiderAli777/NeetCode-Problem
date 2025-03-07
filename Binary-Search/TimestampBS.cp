class TimeMap {
  unordered_map<string, vector<pair<int, string>>> ts;

public:
  TimeMap() {}

  void set(string key, string value, int timestamp) {
    ts[key].push_back({timestamp, value});
  }

  string get(string key, int timestamp) {
    auto &val = ts[key];
    string str = "";
    if (val.size() == 0) {
      return "";
    }
    int l = 0, r = val.size() - 1;
    int mid;
    while (l <= r) {
      mid = (l + r) / 2;
      if (val[mid].first == timestamp) {
        return val[mid].second;
      }
      if(val[mid].first<timestamp)
      {
        str=val[mid].second;
        l=mid+1;
      }
      else
      {
        r=mid-1;
      }
    }
    return str;
  }
};