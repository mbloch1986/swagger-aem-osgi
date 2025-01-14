//
// ComAdobeCqSocialUgcbaseDispatcherImplFlushServiceImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeCqSocialUgcbaseDispatcherImplFlushServiceImplProperties: JSONEncodable {

    public var threadPoolSize: ConfigNodePropertyInteger?
    public var delayTime: ConfigNodePropertyInteger?
    public var workerSleepTime: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["threadPoolSize"] = self.threadPoolSize?.encodeToJSON()
        nillableDictionary["delayTime"] = self.delayTime?.encodeToJSON()
        nillableDictionary["workerSleepTime"] = self.workerSleepTime?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

