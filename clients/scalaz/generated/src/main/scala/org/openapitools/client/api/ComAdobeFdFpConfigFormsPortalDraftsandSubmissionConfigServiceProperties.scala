package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties._

case class ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties (
  portalOutboxes: Option[ConfigNodePropertyArray],
draftDataService: Option[ConfigNodePropertyString],
draftMetadataService: Option[ConfigNodePropertyString],
submitDataService: Option[ConfigNodePropertyString],
submitMetadataService: Option[ConfigNodePropertyString],
pendingSignDataService: Option[ConfigNodePropertyString],
pendingSignMetadataService: Option[ConfigNodePropertyString])

object ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties {
  import DateTimeCodecs._

  implicit val ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServicePropertiesCodecJson: CodecJson[ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties] = CodecJson.derive[ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties]
  implicit val ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServicePropertiesDecoder: EntityDecoder[ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties] = jsonOf[ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties]
  implicit val ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServicePropertiesEncoder: EntityEncoder[ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties] = jsonEncoderOf[ComAdobeFdFpConfigFormsPortalDraftsandSubmissionConfigServiceProperties]
}