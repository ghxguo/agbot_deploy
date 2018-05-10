
"use strict";

let Range = require('./Range.js');
let Gprmc = require('./Gprmc.js');
let Trackstat = require('./Trackstat.js');
let Insstdev = require('./Insstdev.js');
let NovatelReceiverStatus = require('./NovatelReceiverStatus.js');
let NovatelPosition = require('./NovatelPosition.js');
let TrackstatChannel = require('./TrackstatChannel.js');
let Gpgga = require('./Gpgga.js');
let Gpgsa = require('./Gpgsa.js');
let NovatelSignalMask = require('./NovatelSignalMask.js');
let NovatelExtendedSolutionStatus = require('./NovatelExtendedSolutionStatus.js');
let Gpgsv = require('./Gpgsv.js');
let RangeInformation = require('./RangeInformation.js');
let NovatelMessageHeader = require('./NovatelMessageHeader.js');
let NovatelCorrectedImuData = require('./NovatelCorrectedImuData.js');
let Inspva = require('./Inspva.js');
let NovatelVelocity = require('./NovatelVelocity.js');
let Time = require('./Time.js');
let Satellite = require('./Satellite.js');
let Inscov = require('./Inscov.js');

module.exports = {
  Range: Range,
  Gprmc: Gprmc,
  Trackstat: Trackstat,
  Insstdev: Insstdev,
  NovatelReceiverStatus: NovatelReceiverStatus,
  NovatelPosition: NovatelPosition,
  TrackstatChannel: TrackstatChannel,
  Gpgga: Gpgga,
  Gpgsa: Gpgsa,
  NovatelSignalMask: NovatelSignalMask,
  NovatelExtendedSolutionStatus: NovatelExtendedSolutionStatus,
  Gpgsv: Gpgsv,
  RangeInformation: RangeInformation,
  NovatelMessageHeader: NovatelMessageHeader,
  NovatelCorrectedImuData: NovatelCorrectedImuData,
  Inspva: Inspva,
  NovatelVelocity: NovatelVelocity,
  Time: Time,
  Satellite: Satellite,
  Inscov: Inscov,
};
