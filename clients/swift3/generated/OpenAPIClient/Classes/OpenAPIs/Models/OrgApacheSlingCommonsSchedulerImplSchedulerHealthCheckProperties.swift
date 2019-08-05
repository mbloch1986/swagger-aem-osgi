//
// OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class OrgApacheSlingCommonsSchedulerImplSchedulerHealthCheckProperties: JSONEncodable {

    public var maxQuartzJobDurationAcceptable: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["max.quartzJob.duration.acceptable"] = self.maxQuartzJobDurationAcceptable?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
