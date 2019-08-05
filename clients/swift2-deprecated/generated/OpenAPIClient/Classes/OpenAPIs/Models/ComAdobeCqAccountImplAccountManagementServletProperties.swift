//
// ComAdobeCqAccountImplAccountManagementServletProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeCqAccountImplAccountManagementServletProperties: JSONEncodable {
    public var cqAccountmanagerConfigInformnewaccountMail: ConfigNodePropertyString?
    public var cqAccountmanagerConfigInformnewpwdMail: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["cq.accountmanager.config.informnewaccount.mail"] = self.cqAccountmanagerConfigInformnewaccountMail?.encodeToJSON()
        nillableDictionary["cq.accountmanager.config.informnewpwd.mail"] = self.cqAccountmanagerConfigInformnewpwdMail?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}