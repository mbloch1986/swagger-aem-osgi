//
// ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqDamS7damCommonAnalyticsImplSiteCatalystReportRunnerProperties: JSONEncodable {

    public var schedulerExpression: ConfigNodePropertyString?
    public var schedulerConcurrent: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["scheduler.expression"] = self.schedulerExpression?.encodeToJSON()
        nillableDictionary["scheduler.concurrent"] = self.schedulerConcurrent?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

