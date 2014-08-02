/**
 * @page changes_current Changes after the latest release (v1.1)
 *
 * <p> This is the list of changes made after the release of Aspect version
 * 1.1. All entries are signed with the names of the author. </p>
 *
 *
 * <ol>
 * <li> New: There are numerous places in the input file where one can or
 * has to input boundary indicators. These indicators identify individual
 * parts of the boundary of the domain, such as the inner or outer surfaces
 * of a spherical shell. However, remembering these numerical indicators
 * when writing or reading input files is a hassle and error prone.
 * <br>
 * Given this problem, there is now functionality in Aspect so that geometry
 * models can (and, for the existing models, do) provide symbolic names for
 * each of the boundary parts. These symbolic names can then be used in the
 * input files wherever it was previously necessary to use numbers.
 * <br>
 * (Wolfgang Bangerth, 2014/07/21)
 *
 * <li> New: There is now a section in the manual detailing the
 * "Burstedde" benchmark and its verification.
 * <br>
 * (Iris van Zelst, Wolfgang Bangerth, 2014/07/07)
 *
 * <li> Changed: The viscosity in the steinberger material model can now be
 * calculated by taking either the lateral averaged temperature or the
 * adiabatic temperature in this depth as reference.
 * <br>
 * (Rene Gassmoeller, 2014/06/20)
 *
 * <li> Changed: The minimum refinement function is now evaluated at every
 * cell corner instead of the cell midpoint. This especially helps in refining
 * thin boundary layers.
 * <br>
 * (Rene Gassmoeller, 2014/06/20)
 *
 * <li> Changed: The internal heating statistics postprocessor now calculates
 * the integral and averaged internal heating by mass averaging instead
 * of volume averaging.
 * <br>
 * (Rene Gassmoeller, 2014/06/20)
 *
 * <li> New: Added a visualization processor to output the local gravity vector.
 * <br>
 * (Timo Heister, 2014/06/17)
 *
 * <li> Fixed: The direct solver now works with nonlinear schemes like
 * iterated IMPES.
 * <br>
 * (Timo Heister, 2014/06/11)
 *
 * <li> Changed: The maximum number of solver iterations for all linear solvers
 * (including the inner solvers) is now set to 1000.
 * <br>
 * (Timo Heister, 2014/06/08)
 *
 * <li> New: Initial temperature condition "S40RTS perturbation" has been
 * added, that provides a perturbation for a shell geometry based on the
 * S20RTS or S40RTS global shear wave velocity model data.
 * <br>
 * (Jacky Austermann, 2014/06/06)
 *
 * <li> Fixed: When a linear solver fails to converge in a parallel program,
 * every processor would output the same error message -- leading to incredible
 * amounts of entangled error messages. This has now been resolved: every processor
 * still fails, but only processor 0 reports the error.
 * <br>
 * (Wolfgang Bangerth, 2014/06/06)
 *
 * <li> Fixed: When setting "Use years in output instead of seconds" the
 * velocity solution is now exported in m/year instead of m/s in visualization
 * files.
 * <br>
 * (Timo Heister, 2014/06/02)
 *
 * </ol>
 */
