
params ["_boss"];


private _exfilPositions = [
  getMarkerPos "mrk_exfiltrate_1",
  getMarkerPos "mrk_exfiltrate_2",
  getMarkerPos "mrk_exfiltrate_3",
  getMarkerPos "mrk_exfiltrate_4"
];

private _exfilPositionsSorted = [
  [_boss distance _exfilPositions#0, _exfilPositions#0],
  [_boss distance _exfilPositions#1, _exfilPositions#1],
  [_boss distance _exfilPositions#2, _exfilPositions#2],
  [_boss distance _exfilPositions#3, _exfilPositions#3]
];

_exfilPositionsSorted sort true;
_exfilPositionsSorted deleteRange [0,1];


missionNamespace setVariable ["hoppers_exfilPositions", _exfilPositions, true];


{
  private _exfilPosition = _x;
  private _taskID = format ["Exfiltrate_%1", _exfilPosition];
  [
    east,
    [_taskID],
    ["Boss has to be within 100m of exfil point to win for Opfor.",
    "Flee",
    ""],
    _exfilPosition,
    true,
    -1,
    false
  ] call BIS_fnc_taskCreate;
} forEach _exfilPositionsSorted;

{
  private _taskID = format ["Hoppers_Bomb%1", _forEachIndex];
  [_taskID, "CANCELED"] call BIS_fnc_taskSetState;
} forEach HOPPERS_BOMBS_BOMBSPOTS;

["hoppers_phaseChange", [9999]] call CBA_fnc_globalEvent;

missionNamespace setVariable ["hoppers_missionPhase", 9999, true];