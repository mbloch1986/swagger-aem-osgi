//
// ComDayCqReportingImplConfigServiceImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqReportingImplConfigServiceImplProperties: Codable {

    public var repconfTimezone: ConfigNodePropertyString?
    public var repconfLocale: ConfigNodePropertyString?
    public var repconfSnapshots: ConfigNodePropertyString?
    public var repconfRepdir: ConfigNodePropertyString?
    public var repconfHourofday: ConfigNodePropertyInteger?
    public var repconfMinofhour: ConfigNodePropertyInteger?
    public var repconfMaxrows: ConfigNodePropertyInteger?
    public var repconfFakedata: ConfigNodePropertyBoolean?
    public var repconfSnapshotuser: ConfigNodePropertyString?
    public var repconfEnforcesnapshotuser: ConfigNodePropertyBoolean?

    public init(repconfTimezone: ConfigNodePropertyString?, repconfLocale: ConfigNodePropertyString?, repconfSnapshots: ConfigNodePropertyString?, repconfRepdir: ConfigNodePropertyString?, repconfHourofday: ConfigNodePropertyInteger?, repconfMinofhour: ConfigNodePropertyInteger?, repconfMaxrows: ConfigNodePropertyInteger?, repconfFakedata: ConfigNodePropertyBoolean?, repconfSnapshotuser: ConfigNodePropertyString?, repconfEnforcesnapshotuser: ConfigNodePropertyBoolean?) {
        self.repconfTimezone = repconfTimezone
        self.repconfLocale = repconfLocale
        self.repconfSnapshots = repconfSnapshots
        self.repconfRepdir = repconfRepdir
        self.repconfHourofday = repconfHourofday
        self.repconfMinofhour = repconfMinofhour
        self.repconfMaxrows = repconfMaxrows
        self.repconfFakedata = repconfFakedata
        self.repconfSnapshotuser = repconfSnapshotuser
        self.repconfEnforcesnapshotuser = repconfEnforcesnapshotuser
    }

    public enum CodingKeys: String, CodingKey { 
        case repconfTimezone = "repconf.timezone"
        case repconfLocale = "repconf.locale"
        case repconfSnapshots = "repconf.snapshots"
        case repconfRepdir = "repconf.repdir"
        case repconfHourofday = "repconf.hourofday"
        case repconfMinofhour = "repconf.minofhour"
        case repconfMaxrows = "repconf.maxrows"
        case repconfFakedata = "repconf.fakedata"
        case repconfSnapshotuser = "repconf.snapshotuser"
        case repconfEnforcesnapshotuser = "repconf.enforcesnapshotuser"
    }


}

