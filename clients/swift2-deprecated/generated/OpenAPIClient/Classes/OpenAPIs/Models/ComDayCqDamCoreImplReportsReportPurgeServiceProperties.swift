//
// ComDayCqDamCoreImplReportsReportPurgeServiceProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqDamCoreImplReportsReportPurgeServiceProperties: JSONEncodable {
    public var schedulerExpression: ConfigNodePropertyString?
    public var maxSavedReports: ConfigNodePropertyInteger?
    public var timeDuration: ConfigNodePropertyInteger?
    public var enableReportPurge: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["scheduler.expression"] = self.schedulerExpression?.encodeToJSON()
        nillableDictionary["maxSavedReports"] = self.maxSavedReports?.encodeToJSON()
        nillableDictionary["timeDuration"] = self.timeDuration?.encodeToJSON()
        nillableDictionary["enableReportPurge"] = self.enableReportPurge?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
