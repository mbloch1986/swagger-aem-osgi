package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExInfo._

case class OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties])

object OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExInfo {
  import DateTimeCodecs._

  implicit val OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExInfoCodecJson: CodecJson[OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExInfo] = CodecJson.derive[OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExInfo]
  implicit val OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExInfoDecoder: EntityDecoder[OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExInfo] = jsonOf[OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExInfo]
  implicit val OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExInfoEncoder: EntityEncoder[OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExInfo] = jsonEncoderOf[OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExInfo]
}
