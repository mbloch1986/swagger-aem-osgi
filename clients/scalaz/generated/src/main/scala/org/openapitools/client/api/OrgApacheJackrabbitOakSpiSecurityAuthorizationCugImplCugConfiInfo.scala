package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiInfo._

case class OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties],
bundleLocation: Option[String],
serviceLocation: Option[String])

object OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiInfo {
  import DateTimeCodecs._

  implicit val OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiInfoCodecJson: CodecJson[OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiInfo] = CodecJson.derive[OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiInfo]
  implicit val OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiInfoDecoder: EntityDecoder[OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiInfo] = jsonOf[OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiInfo]
  implicit val OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiInfoEncoder: EntityEncoder[OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiInfo] = jsonEncoderOf[OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiInfo]
}
