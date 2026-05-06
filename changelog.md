# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## Unreleased
### Added
- [WIP] Custom rank icons compatable with TCPs rank system (rank icons on chestplate)
  - Known issue, doesn't show up well on the white chest plate
### Changed
- upgraded unit emblem (bright and dark) with fabric texture (map icon is bright only without fabric texture)
- Various TCP optics now can utilise the user's NVGs to provide alternate vison modes
  - Optics that already had extra vison modes have not been changed
  - I think I got all of them
## 1.6.0
### Add
- New unit emblem
### Fixed
- TCP GLs not accepting 40mm drones and OPTRE smokes
### Removed
- our implementation of AAX for TCP, they have added their own

## 1.5.0
### Changed
- TCP GLs are now able to fire 40mm drones

## 1.4.0
### Changed
- The SA TR12M now accepts TCP commando magazines

## 1.3.0
### Added
- Unit map marker
- Misc Halo themed map markers
### Fixed
- Logo not being referenced correctly in mod.cpp
### Changed
- Removed logo background for more pleasant appearance on the main menu

## 1.2.0
### Added
- Custom Zephyr unit patch (insignia) that can be applied to uniforms
- AAX support for TCP equipment

## 1.1.0
### Changed
- Properly add the right grenades and extra ones
  - More colours and the impact smokes

## 1.0.0
### Changed
- TCP GLs are now able to fire OPTRE smoke rounds, this is a temp fix until TCP fix their smokes
