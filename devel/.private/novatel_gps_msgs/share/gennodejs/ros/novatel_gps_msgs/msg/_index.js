
"use strict";

let NovatelExtendedSolutionStatus = require('./NovatelExtendedSolutionStatus.js');
let Gprmc = require('./Gprmc.js');
let NovatelVelocity = require('./NovatelVelocity.js');
let RangeInformation = require('./RangeInformation.js');
let Gpgsv = require('./Gpgsv.js');
let Inspva = require('./Inspva.js');
let Inscov = require('./Inscov.js');
let NovatelCorrectedImuData = require('./NovatelCorrectedImuData.js');
let NovatelReceiverStatus = require('./NovatelReceiverStatus.js');
let Gpgga = require('./Gpgga.js');
let Trackstat = require('./Trackstat.js');
let Range = require('./Range.js');
let Gpgsa = require('./Gpgsa.js');
let Satellite = require('./Satellite.js');
let NovatelSignalMask = require('./NovatelSignalMask.js');
let Time = require('./Time.js');
let TrackstatChannel = require('./TrackstatChannel.js');
let NovatelMessageHeader = require('./NovatelMessageHeader.js');
let Insstdev = require('./Insstdev.js');
let NovatelPosition = require('./NovatelPosition.js');

module.exports = {
  NovatelExtendedSolutionStatus: NovatelExtendedSolutionStatus,
  Gprmc: Gprmc,
  NovatelVelocity: NovatelVelocity,
  RangeInformation: RangeInformation,
  Gpgsv: Gpgsv,
  Inspva: Inspva,
  Inscov: Inscov,
  NovatelCorrectedImuData: NovatelCorrectedImuData,
  NovatelReceiverStatus: NovatelReceiverStatus,
  Gpgga: Gpgga,
  Trackstat: Trackstat,
  Range: Range,
  Gpgsa: Gpgsa,
  Satellite: Satellite,
  NovatelSignalMask: NovatelSignalMask,
  Time: Time,
  TrackstatChannel: TrackstatChannel,
  NovatelMessageHeader: NovatelMessageHeader,
  Insstdev: Insstdev,
  NovatelPosition: NovatelPosition,
};
