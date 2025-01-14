//
// ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties: JSONEncodable {
    public var schedulerExpression: ConfigNodePropertyString?
    public var schedulerConcurrent: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["scheduler.expression"] = self.schedulerExpression?.encodeToJSON()
        nillableDictionary["scheduler.concurrent"] = self.schedulerConcurrent?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
